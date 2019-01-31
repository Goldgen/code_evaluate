#include <iostream>
using namespace std;

enum Error_code{not_present, overflow, underflow, duplicate_error, success,fail, rangeError};
typedef int Entry;

struct Binary_node {
// data members:
	Entry data;
	Binary_node *left;
	Binary_node *right;
// constructors:
	Binary_node( );
	Binary_node(const Entry &x);
};

Binary_node:: Binary_node(){
	left = NULL;
	right = NULL;
}

Binary_node:: Binary_node(const Entry &x){
     data = x;
	left = NULL;
	right = NULL;
}

const int max_list = 30;

template <class List_entry>
class List{
public:
// methods of theList ADT
	List( );
	int size() const;
	bool full() const;
	bool empty() const;
	void clear();
	void traverse(void (*visit)(List_entry &));
	Error_code retrieve(int position,List_entry &x)const;
	Error_code replace(int position,const List_entry &x);
	Error_code remove(int position,List_entry &x);
	Error_code insert(int position,const List_entry &x);
protected:
// data members for a contiguous list implementation
    int count;
	List_entry entry[max_list];
};

template <class List_entry>
List<List_entry>::List(){
    count = 0;
}

template <class List_entry>
int List<List_entry>::size()const{
    return count;
}

template <class List_entry>
bool List<List_entry>::full()const{
    return (count == max_list);
}

template <class List_entry>
void List<List_entry>::clear(){
    count = 0;
}

template <class List_entry>
bool List<List_entry>::empty()const{
    return count == 0;
}

template <class List_entry>
void List<List_entry>::traverse(void (*visit)(List_entry &)){
    for(int i = 0;i<count;i++)
        (*visit)(entry[i]);
}

template <class List_entry>
Error_code List<List_entry>::retrieve(int position,List_entry &x)const{
    if(position<0||position>=count)return rangeError;
    x = entry[position];
    return success;
}

template <class List_entry>
Error_code List<List_entry>::replace(int position,const List_entry &x){
    if(position<0||position>=count)return rangeError;
    entry[position] = x;
    return success;
}

template <class List_entry>
Error_code List<List_entry>::remove(int position,List_entry &x){
    if (empty( ))return underflow;
	if (position < 0 || position >= count)return rangeError;
	x = entry[position];
	for (int i = position; i < count-1; i++)entry[i] = entry[i+1];
	count--;
	return success;
}

template <class List_entry>
Error_code List<List_entry>::insert(int position,const List_entry &x){
    if (full( ))return overflow;
	if (position < 0 || position > count)return rangeError;
	for (int i = count - 1; i >= position; i--)	entry[i + 1] = entry[i];
	entry[position] = x;
	count++;
	return success;
}

class Binary_search_tree {
public:
	Binary_search_tree( );
	bool empty( ) const;
	void preorder(void (*visit)(Entry &));
	void inorder(void (*visit)(Entry &));
	void postorder(void (*visit)(Entry &));
	int size( ) const;
	int height( ) const;

	//new method
	Error_code insert(const Entry &new_data);
    Error_code remove(const Entry &target);
    Error_code tree_search(Entry &target) const;

protected:
// Add auxiliary function prototypes here.
	void recursive_preorder(Binary_node *sub_root, void (*visit)(Entry &));
	void recursive_inorder(Binary_node *sub_root, void (*visit)(Entry &));
	void recursive_postorder(Binary_node *sub_root, void (*visit)(Entry &));
	Binary_node *root;
	Binary_node *search_for_node(Binary_node *sub_root,const Entry &target)const;
	Error_code search_and_insert( Binary_node * &sub_root,const Entry &new_data);
	Error_code remove_root(Binary_node *&sub_root);
	Error_code search_and_destroy(Binary_node *&sub_root,const Entry &target);
	int count;
};

Binary_search_tree::Binary_search_tree()
{
    root = NULL;
    count = 0;
}

bool Binary_search_tree::empty()const
{
    return root == NULL;
}

void Binary_search_tree::preorder(void (*visit)(Entry &))
{
    recursive_preorder(root,visit);
}

void Binary_search_tree::recursive_preorder(Binary_node *sub_root, void (*visit)(Entry &))
{
    if(sub_root!=NULL)
    {
        (*visit)(sub_root->data);
        recursive_preorder(sub_root->left,visit);
        recursive_preorder(sub_root->right,visit);
    }
}

void Binary_search_tree::inorder(void (*visit)(Entry &))
{
    recursive_inorder(root,visit);
}

void Binary_search_tree::recursive_inorder(Binary_node *sub_root, void (*visit)(Entry &))
{
    if(sub_root!=NULL)
    {
        recursive_inorder(sub_root->left,visit);
        (*visit)(sub_root->data);
        recursive_inorder(sub_root->right,visit);
    }
}

void Binary_search_tree::postorder(void (*visit)(Entry &))
{
    recursive_postorder(root,visit);
}

void Binary_search_tree::recursive_postorder(Binary_node *sub_root, void (*visit)(Entry &))
{
    if(sub_root!=NULL)
    {
        recursive_postorder(sub_root->left,visit);
        recursive_postorder(sub_root->right,visit);
        (*visit)(sub_root->data);
    }
}

int Binary_search_tree::size()const
{
    return count;
}

int Binary_search_tree::height()const
{
    int count1 = size();
    if(count1==0)
        return -1;
    int tmp = 1;
    int k;
    for(k = -1; tmp<=count1; k++)
        tmp*=2;
    return k;
}

Error_code Binary_search_tree::insert(const Entry &new_data)
{
    Error_code result=search_and_insert(root, new_data);
    if(result==success)
        count++;
    return result;
}

Error_code Binary_search_tree::search_and_insert( Binary_node *&sub_root,const Entry &new_data)
{
    if (sub_root == NULL)
    {
        sub_root = new Binary_node(new_data);
        return success;
    }
    else if (new_data < sub_root->data)
        return search_and_insert(sub_root->left, new_data);
    else if (new_data > sub_root->data)
        return search_and_insert(sub_root->right, new_data);
    else
        return duplicate_error;
}

Error_code Binary_search_tree::tree_search(Entry &target) const
{
    Error_code result = success;
    Binary_node *found = search_for_node(root,target);
    if(found == NULL)
        result = not_present;
    else
        target = found->data;
    return result;
}

Binary_node *Binary_search_tree::search_for_node(Binary_node *sub_root,const Entry &target)const
{
    if (sub_root == NULL || sub_root->data == target)
        return sub_root;
    else if (sub_root->data < target)
        return search_for_node(sub_root->right, target);
    else
        return search_for_node(sub_root->left, target);
}

Error_code Binary_search_tree::remove(const Entry &target)
{
    Error_code result=search_and_destroy(root, target);
    if(result==success)
        count--;
    return result;
}

Error_code Binary_search_tree::remove_root(Binary_node *&sub_root)
{
    if (sub_root == NULL)
        return not_present;
    Binary_node *to_delete = sub_root;  // Remember node to delete at end.
    //???????????????????
    if (sub_root->right == NULL)
        sub_root = sub_root->left;
    else if (sub_root->left == NULL)
        sub_root = sub_root->right;
    else   // Neither subtree is empty.
    {
        to_delete = sub_root->left; // Move left to find predecessor. ????????
        Binary_node *parent = sub_root; // parent of to_delete
        while (to_delete->right != NULL)   // to_delete is not the predecessor.
        {
            parent = to_delete;
            to_delete = to_delete->right;
        }
        sub_root->data = to_delete->data; // Move from to_delete to root.
        if (parent == sub_root)
            sub_root->left = to_delete->left;
        else
            parent->right = to_delete->left;
    }
    delete to_delete; // Remove to_delete from tree.
    return success;
}

Error_code Binary_search_tree::search_and_destroy(Binary_node *&sub_root,const Entry &target)
{
    if (sub_root == NULL || sub_root->data == target)
        return remove_root(sub_root);
    else if (target < sub_root->data)
        return search_and_destroy(sub_root->left, target);
    else
        return search_and_destroy(sub_root->right, target);
}

class Buildable_tree:public Binary_search_tree{
public:
    Error_code build_tree(const List<int> &supply);
private:
    void build_insert(int count,const Entry &new_data,List<Binary_node*> &last_node);
    Binary_node* find_root(List<Binary_node*> &last_node);
    void connect_trees(const List<Binary_node*> &last_node);
};

Error_code Buildable_tree::build_tree(const List<int> &supply){
    Error_code ordered_data = success;
    //int count = 0;
    int x,last_x;
    List<Binary_node*> last_node;
    Binary_node* none = NULL;
    last_node.insert(0,none);
    while(supply.retrieve(count,x)==success){
        if(count>0&&x<=last_x){
            ordered_data = fail;
            break;
        }
        build_insert(++count,x,last_node);
        last_x = x;
    }
    root = find_root(last_node);
    connect_trees(last_node);
    return ordered_data;
}

void Buildable_tree::build_insert(int count,const Entry &new_data,List<Binary_node*> &last_node){
    int level;
    for(level=1;count%2==0;level++)
        count/=2;
    Binary_node* next_node=new Binary_node(new_data);
    Binary_node* parent;
    last_node.retrieve(level-1,next_node->left);
    if(last_node.size()<=level)
        last_node.insert(level,next_node);
    else
        last_node.replace(level,next_node);
    if(last_node.retrieve(level+1,parent)==success&&parent->right==NULL)
        parent->right=next_node;
}

Binary_node* Buildable_tree::find_root(List<Binary_node*> &last_node){
    Binary_node *high_node;
    last_node.retrieve(last_node.size()-1,high_node);
    return high_node;
}

void Buildable_tree::connect_trees(const List<Binary_node*> &last_node){
    Binary_node *high_node,*low_node;
    int high_level = last_node.size()-1,low_level;
    while(high_level>2){
        last_node.retrieve(high_level,high_node);
        if(high_node->right!=NULL)
            high_level--;
        else{
            low_level = high_level;
			do { // Find the highest entry not in the left subtree.
			            last_node.retrieve(--low_level, low_node);
			} while (low_node != NULL && low_node->data < high_node->data);
			high_node->right = low_node;
			high_level = low_level;
        }
    }
}

void print(Entry &x){
    cout<<x<<" ";
}

int main()
{
    Buildable_tree mytree;
    List<int>mylist;
    int num,i=0;
    while((cin>>num)&&(num!=-1)){
        mylist.insert(i++,num);
    }
    mytree.build_tree(mylist);
    mytree.preorder(print);
    cout<<endl;
    mytree.inorder(print);
    cout<<endl;
    mytree.postorder(print);
    cout<<endl;
    /*for(i=0;i<mylist.size();i++){
        mylist.retrieve(i,num);
        cout<<num<<" ";
    }*/
    return 0;
}