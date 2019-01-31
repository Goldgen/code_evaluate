#include <iostream>
using namespace std;
enum Error_code {success, outofrange, underflow, overflow, fail};
template <class Node_entry>
struct Node {
    Node_entry x;
    Node<Node_entry> *next;
    Node();
    Node(Node_entry entry, Node<Node_entry>* addon=NULL)
    {
        x = entry;
        next = addon;
    }
};
template <class Node_entry>
Node<Node_entry>::Node()
{
    next = NULL;
}

//Definition of template List
template <class List_entry>
class List {
public:
    List();
    int size() const;
    bool empty() const;
    bool full() const;
    void clear();
    //void traverse(void (*visit)(List_entry &));
    void traverse();
    Error_code retrieve(int position, List_entry &x) const;
    Error_code replace(int position, const List_entry &x);
    Error_code remove(int position, List_entry &x);
    Error_code insert(int position, const List_entry &x);
    ~List();
    List(const List<List_entry> &copy);
    List<List_entry>& operator = (const List<List_entry> &copy);
    void merge_sort();
protected:
    void recursive_merge_sort(Node<List_entry>* &sub_list);
    Node<List_entry>* divide_from(Node<List_entry>* sub_list);
    Node<List_entry>* combine(Node<List_entry>* first, Node<List_entry>* second);
    Node<List_entry>* head;
    int count;
    Node<List_entry>* set_position(int position) const;
};

template <class List_entry>
List<List_entry>::List()
{
    head = NULL;
    count = 0;
}
template <class List_entry>
int List<List_entry>::size() const
{
    return count;
}

template <class List_entry>
bool List<List_entry>::empty() const
{
    return count==0;
}

template <class List_entry>
bool List<List_entry>::full() const
{
    Node<List_entry>* pt = new Node<List_entry>();
    bool ret = (pt==NULL);
    delete pt;
    return ret;
}

template <class List_entry>
void List<List_entry>::clear()
{
    List_entry trash;
    while (!empty()) remove(count-1, trash);
}

template <class List_entry>
//void List<List_entry>::traverse(void (*visit)(List_entry &x))
void List<List_entry>::traverse()
{
    Node<List_entry>* pt = head;
    for (; pt!=NULL; pt=pt->next) {
        cout << pt->x << ' ';
    }
    cout << endl;
}
template <class List_entry>
Node<List_entry>* List<List_entry>::set_position(int position) const
{
    Node<List_entry>* pt = head;
    int index = 0;
    for (; index!=position; index++) {
        pt = pt->next;
    }
    return pt;
}
template <class List_entry>
Error_code List<List_entry>::retrieve(int position, List_entry &x) const
{
    if (count==0) return underflow;
    if (position>=count||position<0) return outofrange;
    Node<List_entry>* pt = set_position(position);
    x = pt->x;
    return success;
}

template <class List_entry>
Error_code List<List_entry>::replace(int position, const List_entry &x)
{
    if (count==0) return underflow;
    if (position>=count||position<0) return outofrange;
    Node<List_entry>* pt = set_position(position);
    pt->x = x;
    return success;
}

template <class List_entry>
Error_code List<List_entry>::remove(int position, List_entry &x)
{
    if (count==0) return underflow;
    if (position>=count||position<0) return outofrange;
    Node<List_entry>* todelete;
    if (position==0) {
        todelete = head;
        head = head->next;
    } else {
        Node<List_entry>* pt = set_position(position-1);
        todelete = pt->next;
        pt->next = pt->next->next;
    }
    x = todelete->x;
    delete todelete;
    count --;
    return success;
}

template <class List_entry>
Error_code List<List_entry>::insert(int position, const List_entry &x)
{
    if (position>count||position<0) return outofrange;
    Node<List_entry>* toinsert = new Node<List_entry>(x, NULL);
    if (position==0) {
        toinsert->next = head;
        head = toinsert;
    } else {
        Node<List_entry>* last = set_position(position-1);
        toinsert->next = last->next;
        last->next = toinsert;
    }
    count ++;
    return success;
}

template <class List_entry>
List<List_entry>::~List()
{
    clear();
}

template <class List_entry>
List<List_entry>::List(const List<List_entry> &copy)
{
    this.head = NULL;
    Node<List_entry>* prept = NULL;
    for (count=0; count<copy.count; count++) {
        int copyx;
        copy.retrieve(count, copyx);
        Node<List_entry>* pt = new Node<List_entry>(copyx, NULL);
        if (count==0) head = pt;
        else prept->next = pt;
        prept = pt;
    }
}

template <class List_entry>
List<List_entry>& List<List_entry>::operator = (const List<List_entry> &copy)
{
    if ((&this)==(&copy)) return;
    this.clear();
    this.head = NULL;
    Node<List_entry>* prept = NULL;
    for (count=0; count<copy.count; count++) {
        int copyx;
        copy.retrieve(count, copyx);
        Node<List_entry>* pt = new Node<List_entry>(copyx, NULL);
        if (pt==NULL) return overflow;
        if (count==0) head = pt;
        else prept->next = pt;
        prept = pt;
    }
    return;
}

template <class List_entry>
void List<List_entry>::merge_sort()
{
    recursive_merge_sort(head);
}

template <class List_entry>
void List<List_entry>::recursive_merge_sort(Node<List_entry>* &sub_list)
{
    if (sub_list!=NULL&&sub_list->next!=NULL) {
        Node<List_entry>* second_half = divide_from(sub_list);
        recursive_merge_sort(sub_list);
        recursive_merge_sort(second_half);
        sub_list = combine(sub_list, second_half);
    } else {
        cout << "rua\n";
    }
}

template <class List_entry>
Node<List_entry>* List<List_entry>::divide_from(Node<List_entry>* sub_list)
{
    if (sub_list==NULL) return NULL;
    Node<List_entry>* half_way = sub_list;
    Node<List_entry>* position = sub_list->next;
    Node<List_entry>* second_half;
    while (position!=NULL) {
        position = position->next;
        if (position!=NULL) {
            half_way = half_way->next;
            position = position->next;
        }
    }
    second_half = half_way->next;
    half_way->next = NULL;
    return second_half;
}

template <class List_entry>
Node<List_entry>* List<List_entry>::combine(Node<List_entry>* first, Node<List_entry>* second)
{
    Node<List_entry>* last_sorted;
    Node<List_entry> combined;
    last_sorted = &combined;
    while (first!=NULL&&second!=NULL) {
        if (first->x<=second->x) {
            last_sorted->next = first;
            first = first->next;
        } else {
            last_sorted->next = second;
            second = second->next;
        }
        last_sorted = last_sorted->next;
    }
    if (first==NULL) {
        last_sorted->next = second;
    } else {
        last_sorted->next = first;
    }
    return combined.next;
}
//
template <class Node_entry>
struct Binary_node {
  //data members
  Node_entry entry;
  Binary_node<Node_entry>* left;
  Binary_node<Node_entry>* right;
  //constructors
  Binary_node();
  Binary_node(const Node_entry &x);
};

template <class Node_entry>
Binary_node<Node_entry>::Binary_node()
{
  left = NULL;
  right = NULL;
}

template <class Node_entry>
Binary_node<Node_entry>::Binary_node(const Node_entry &x)
{
  entry = x;
  left = NULL;
  right = NULL;
}

template <class Tree_entry>
class Buildable_tree {
public:
    Error_code build_tree(const List<Tree_entry> &supply);
    void preorder(void (*visit)(Tree_entry &));
    void inorder(void (*visit)(Tree_entry &));
    void postorder(void (*visit)(Tree_entry &));
protected:
    Binary_node<Tree_entry>* root;
    int count;
    void recursive_preorder(Binary_node<Tree_entry>* sub_root, void (*visit)(Tree_entry &));
    void recursive_inorder(Binary_node<Tree_entry>* sub_root, void (*visit)(Tree_entry &));
    void recursive_postorder(Binary_node<Tree_entry>* sub_root, void (*visit)(Tree_entry &));
    void build_insert(int count, const Tree_entry &new_data, List<Binary_node<Tree_entry>*> &last_node);
    Binary_node<Tree_entry>* find_root(List<Binary_node<Tree_entry>*> &last_node);
    void connect_trees(const List<Binary_node<Tree_entry>*> &last_node);
};

template <class Tree_entry>
Error_code Buildable_tree<Tree_entry>::build_tree(const List<Tree_entry> &supply)
{
    Error_code ordered_data = success;
    int count = 0;
    Tree_entry x, last_x;
    List<Binary_node<Tree_entry>*> last_node;
    Binary_node<Tree_entry> *none = NULL;
    last_node.insert(0, none);
    while (supply.retrieve(count, x)==success) {
        if (count>0&&x<=last_x) {
            ordered_data = fail;
            break;
        }
        build_insert(++count, x, last_node);
        last_x = x;
    }
    root = find_root(last_node);
    connect_trees(last_node);
    return ordered_data;
}

template <class Tree_entry>
void Buildable_tree<Tree_entry>::build_insert(int count, const Tree_entry &new_data, List<Binary_node<Tree_entry>*> &last_node)
{
    int level;
    for (level=1; count%2==0; level++) {
        count /= 2;
    }
    Binary_node<Tree_entry> *next_node = new Binary_node<Tree_entry>(new_data), *parent;
    last_node.retrieve(level-1, next_node->left);
    if (last_node.size()<=level) {
        last_node.insert(level, next_node);
    } else {
        last_node.replace(level, next_node);
    }
    if (last_node.retrieve(level+1, parent)==success&&parent->right==NULL) {
        parent->right = next_node;
    }
}

template <class Tree_entry>
Binary_node<Tree_entry> *Buildable_tree<Tree_entry>::find_root(List<Binary_node<Tree_entry>*> &last_node)
{
    Binary_node<Tree_entry> *high_node;
    last_node.retrieve(last_node.size()-1, high_node);
    return high_node;
}

template <class Tree_entry>
void Buildable_tree<Tree_entry>::connect_trees(const List<Binary_node<Tree_entry>*> &last_node)
{
    Binary_node<Tree_entry> *high_node, *low_node;
    int high_level = last_node.size() - 1;
    int low_level;
    while (high_level>2) {
        last_node.retrieve(high_level, high_node);
        if (high_node->right!=NULL) {
            high_level --;
        } else {
            low_level = high_level;
            do {
                last_node.retrieve(--low_level, low_node);
            } while (low_node!=NULL&&low_node->entry<high_node->entry);
            high_node->right = low_node;
            high_level = low_level;
        }
    }
}

template <class Tree_entry>
void Buildable_tree<Tree_entry>::recursive_preorder(Binary_node<Tree_entry>* sub_root, void (*visit)(Tree_entry &))
{
    if (sub_root!=NULL) {
        visit(sub_root->entry);
        if (sub_root->left!=NULL)   recursive_preorder(sub_root->left, visit);
        if (sub_root->right!=NULL)   recursive_preorder(sub_root->right, visit);
    }
}

template <class Tree_entry>
void Buildable_tree<Tree_entry>::preorder(void (*visit)(Tree_entry &))
{
    recursive_preorder(root, visit);
    cout << endl;
}

template <class Tree_entry>
void Buildable_tree<Tree_entry>::recursive_inorder(Binary_node<Tree_entry>* sub_root, void (*visit)(Tree_entry &))
{
    if (sub_root!=NULL) {
        if (sub_root->left!=NULL)   recursive_inorder(sub_root->left, visit);
        visit(sub_root->entry);
        if (sub_root->right!=NULL)   recursive_inorder(sub_root->right, visit);
    }
}

template <class Tree_entry>
void Buildable_tree<Tree_entry>::inorder(void (*visit)(Tree_entry &))
{
    recursive_inorder(root, visit);
    cout << endl;
}

template <class Tree_entry>
void Buildable_tree<Tree_entry>::recursive_postorder(Binary_node<Tree_entry>* sub_root, void (*visit)(Tree_entry &))
{
    if (sub_root!=NULL) {
        if (sub_root->left!=NULL)   recursive_postorder(sub_root->left, visit);
        if (sub_root->right!=NULL)   recursive_postorder(sub_root->right, visit);
        visit(sub_root->entry);
    }
}

template <class Tree_entry>
void Buildable_tree<Tree_entry>::postorder(void (*visit)(Tree_entry &))
{
    recursive_postorder(root, visit);
    cout << endl;
}
//
void print(int &x)
{
    cout << x << ' ';
}

int main()
{
    List<int> supply;
    int tmp;
    int cnt = 0;
    int last = -1;
    while ((cin>>tmp)&&tmp!=-1) {
        if (tmp<=last) continue;
        supply.insert(cnt++, tmp);
        last = tmp;
    }
    Buildable_tree<int> bt;
    bt.build_tree(supply);
    bt.preorder(print);
    bt.inorder(print);
    bt.postorder(print);
    return 0;
}