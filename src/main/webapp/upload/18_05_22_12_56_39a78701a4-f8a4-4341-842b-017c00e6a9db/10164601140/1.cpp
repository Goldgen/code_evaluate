#include <iostream>

using namespace std;

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
//

template <class Tree_entry>
class Binary_tree {
public:
    Binary_tree();
    void insert(const Tree_entry &x);
    void preorder(void (*visit)(Tree_entry &));
    void inorder(void (*visit)(Tree_entry &));
    void postorder(void (*visit)(Tree_entry &));
protected:
    Binary_node<Tree_entry>* root;
    int count;
    void recursive_preorder(Binary_node<Tree_entry>* sub_root, void (*visit)(Tree_entry &));
    void recursive_inorder(Binary_node<Tree_entry>* sub_root, void (*visit)(Tree_entry &));
    void recursive_postorder(Binary_node<Tree_entry>* sub_root, void (*visit)(Tree_entry &));
};

template <class Tree_entry>
Binary_tree<Tree_entry>::Binary_tree()
{
    root = NULL;
    count = 0;
}

template <class Tree_entry>
void Binary_tree<Tree_entry>::insert(const Tree_entry &x)
{
    Binary_node<Tree_entry> *pt = root, *father = NULL;
    int left_or_right = 0;
    while (pt!=NULL) {
        father = pt;
        if (x>pt->entry) {
            pt = pt->right;
            left_or_right = 1;
        } else if (x<pt->entry) {
            pt = pt->left;
            left_or_right = 0;
        }else {
			return;
		}
    }
    if (father==NULL) {
        root = new Binary_node<Tree_entry>(x);
    } else {
        if (left_or_right==0) father->left = new Binary_node<Tree_entry>(x);
        else father->right = new Binary_node<Tree_entry>(x);
    }
}

template <class Tree_entry>
void Binary_tree<Tree_entry>::recursive_preorder(Binary_node<Tree_entry>* sub_root, void (*visit)(Tree_entry &))
{
    if (sub_root!=NULL) {
        visit(sub_root->entry);
        if (sub_root->left!=NULL)   recursive_preorder(sub_root->left, visit);
        if (sub_root->right!=NULL)   recursive_preorder(sub_root->right, visit);
    }
}

template <class Tree_entry>
void Binary_tree<Tree_entry>::preorder(void (*visit)(Tree_entry &))
{
    recursive_preorder(root, visit);
    cout << endl;
}

template <class Tree_entry>
void Binary_tree<Tree_entry>::recursive_inorder(Binary_node<Tree_entry>* sub_root, void (*visit)(Tree_entry &))
{
    if (sub_root!=NULL) {
        if (sub_root->left!=NULL)   recursive_inorder(sub_root->left, visit);
        visit(sub_root->entry);
        if (sub_root->right!=NULL)   recursive_inorder(sub_root->right, visit);
    }
}

template <class Tree_entry>
void Binary_tree<Tree_entry>::inorder(void (*visit)(Tree_entry &))
{
    recursive_inorder(root, visit);
    cout << endl;
}

template <class Tree_entry>
void Binary_tree<Tree_entry>::recursive_postorder(Binary_node<Tree_entry>* sub_root, void (*visit)(Tree_entry &))
{
    if (sub_root!=NULL) {
        if (sub_root->left!=NULL)   recursive_postorder(sub_root->left, visit);
        if (sub_root->right!=NULL)   recursive_postorder(sub_root->right, visit);
        visit(sub_root->entry);
    }
}

template <class Tree_entry>
void Binary_tree<Tree_entry>::postorder(void (*visit)(Tree_entry &))
{
    recursive_postorder(root, visit);
    cout << endl;
}

//
void print(long long &x)
{
    cout << x << ' ';
}

int main()
{
    Binary_tree<long long> *bt = new Binary_tree<long long>();
    long long tmp;
    cin >> tmp;
    while (tmp!=-1) {
        bt->insert(tmp);
        cin >> tmp;
    }
    bt->preorder(print);
    bt->inorder(print);
    bt->postorder(print);
    return 0;
}