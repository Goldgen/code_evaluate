#include <iostream>
#include <math.h>
using namespace std;
enum Error_code{notPresent, overflow, underflow, duplicateError, success};
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

class BinarySearchtree {
public:
	BinarySearchtree( );
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
	Error_code Search_and_insert(Binary_node * &sub_root,const Entry &new_data);
	Error_code Search_and_destroy(Binary_node * &sub_root,const Entry &target);
	Error_code remove_root(Binary_node *&sub_root);
	Binary_node *Search_for_node(Binary_node *sub_root,const Entry &target) const;
	Binary_node *root;
	int count;
};

BinarySearchtree::BinarySearchtree()
{
    root=NULL;
    count=0;
}

void BinarySearchtree::preorder(void (*visit)(Entry &))
{
    recursive_preorder(root,visit);
}

void BinarySearchtree::inorder(void (*visit)(Entry &))
{
    recursive_inorder(root,visit);
}

void BinarySearchtree::postorder(void (*visit)(Entry &))
{
    recursive_postorder(root,visit);
}

void BinarySearchtree::recursive_preorder(Binary_node *sub_root, void (*visit)(Entry &))
{
    if(sub_root!=NULL)
    {
        (*visit)(sub_root->data);
        recursive_preorder(sub_root->left,visit);
        recursive_preorder(sub_root->right,visit);
    }
}

void BinarySearchtree::recursive_inorder(Binary_node *sub_root, void (*visit)(Entry &))
{
    if(sub_root!=NULL)
    {
        recursive_inorder(sub_root->left,visit);
        (*visit)(sub_root->data);
        recursive_inorder(sub_root->right,visit);
    }
}

void BinarySearchtree::recursive_postorder(Binary_node *sub_root, void (*visit)(Entry &))
{
    if(sub_root!=NULL)
    {
        recursive_postorder(sub_root->left,visit);
        recursive_postorder(sub_root->right,visit);
        (*visit)(sub_root->data);
    }
}

Error_code BinarySearchtree::insert(const Entry& new_data)
{
    return Search_and_insert(root,new_data);
}

Error_code BinarySearchtree::Search_and_insert(Binary_node * &sub_root,const Entry &new_data)
{
    if(sub_root==NULL)
    {
        sub_root=new Binary_node(new_data);
        return success;
    }
    else if(new_data < sub_root->data)
        return Search_and_insert(sub_root->left,new_data);
    else if(new_data > sub_root->data)
        return Search_and_insert(sub_root->right,new_data);
    else return duplicateError;
}


Error_code BinarySearchtree::remove(const Entry& target)
{
    return Search_and_destroy(root,target);
}

Error_code BinarySearchtree::Search_and_destroy(Binary_node * &sub_root,const Entry &target)
{
    if(sub_root==NULL || sub_root->data == target)
        return remove_root(sub_root);
    else if(target<sub_root->data)
        return Search_and_destroy(sub_root->left,target);
    else
        return Search_and_destroy(sub_root->right,target);
}


Error_code BinarySearchtree::remove_root(Binary_node *&sub_root)
{
    if(sub_root == NULL)return notPresent;
    Binary_node *to_delete=sub_root;
    if(sub_root->right==NULL) sub_root=sub_root->left;
    else if(sub_root->left==NULL) sub_root=sub_root->right;
    else
    {
        to_delete=sub_root->left;
        Binary_node *parent=sub_root;
        while(to_delete->right != NULL)
        {
            parent = to_delete;
            to_delete = to_delete->right;
        }
        sub_root->data=to_delete->data;
        if(parent == sub_root) sub_root->left=to_delete->left;
        else parent->right = to_delete->left;
    }
    delete to_delete;
    return success;
}


Error_code BinarySearchtree::tree_search(Entry& target) const
{
    Error_code result=success;
    Binary_node *found=Search_for_node(root,target);
    if(found == NULL)
        result=notPresent;
    else
        target=found->data;
    return result;
}

Binary_node *BinarySearchtree::Search_for_node(Binary_node *sub_root,const Entry &target) const
{
    while(sub_root != NULL && sub_root->data != target)
    {
        if(sub_root->data<target)sub_root=sub_root->right;
        else sub_root=sub_root->left;
    }
    return sub_root;
}

bool BinarySearchtree::empty() const
{
    if(count==0)return true;
    return false;
}

int BinarySearchtree::size() const
{
    return count;
}

int BinarySearchtree::height() const
{
    if(count==0) return -1;
    return ceil(log10(count) / log10(2));
}

void print(Entry &x)
{
    cout<<x<<" ";
}


int main()
{
    BinarySearchtree tree;
    int temp=0;
    cin>>temp;
    while(temp!=-1)
    {
        tree.insert(temp);
        cin>>temp;
    }
    tree.preorder(print);
    cout<<endl;
    tree.inorder(print);
    cout<<endl;
    tree.postorder(print);
    cout<<endl;
    return 0;
}
