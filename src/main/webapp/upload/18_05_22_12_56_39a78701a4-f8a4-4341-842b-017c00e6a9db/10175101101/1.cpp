#include <iostream>
using namespace std;
enum Error_code{notPresent, overflow, underflow, duplicateError, success};
typedef int Entry;

void print(Entry &x)
{
    cout<<x<<' ';
}
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
	Binary_node *root;
	int count;
};
BinarySearchtree::BinarySearchtree()
{
    root = NULL;
    count = 0;
}
void BinarySearchtree::inorder( void (*visit)(Entry &))
{
    recursive_inorder(root,visit);
    cout<<endl;
}
void BinarySearchtree::preorder( void (*visit)(Entry &))
{
    recursive_preorder(root,visit);
    cout<<endl;
}
void BinarySearchtree::postorder( void (*visit)(Entry &))
{
    recursive_postorder(root,visit);
    cout<<endl;
}
bool BinarySearchtree::empty()const
{
    return root==NULL;
}
int BinarySearchtree::size()const
{
    return count;
}
int BinarySearchtree::height()const
{
    int count = size();
    if(count == 0)return -1;
    int tmp = 1;
    int k;
    for(k=0;tmp<=count;k++)tmp*=2;
    return k;
}
Error_code BinarySearchtree::insert(const Entry &new_data)
{
    if(empty())
    {
        root = new Binary_node(new_data);
        count++;
        return success;
    }
    Binary_node *sub_root = root,*previous;
    while(sub_root!=NULL&&sub_root->data!=new_data)
    {
        previous = sub_root;
        if(new_data > sub_root->data)
            sub_root = sub_root->right;
        else
            sub_root = sub_root->left;
    }
    if(sub_root == NULL)
    {
        if(new_data>previous->data)
            previous->right = new Binary_node(new_data);
        else
            previous->left = new Binary_node(new_data);
        count++;
        return success;
    }
    return duplicateError;
}
Error_code BinarySearchtree::remove(const Entry& target)
{
    Binary_node *found = root,*previous;
    while(found!=NULL&&found->data!=target)
    {
        previous = found;
        if(target > found->data)
            found = found->right;
        else
            found = found->left;
    }
    if(found == NULL)return notPresent;
    if(found->left == NULL && found->right == NULL)
    {
        delete found;
        count--;
        return success;
    }
    if(found->left!=NULL&&found->right==NULL)
    {
        if(target>previous->data)
        {
            previous->right = found ->left;

        }
        else
        {
            previous->left = found ->left;
        }
        delete found;
        count--;
        return success;
    }
    if(found->left==NULL&&found->right!=NULL)
    {
        if(target>previous->data)
        {
            previous->right = found ->right;

        }
        else
        {
            previous->left = found ->right;
        }
        delete found;
        count--;
        return success;
    }
    Binary_node *pre = found->left;//??
    Binary_node *pre_pre;//?????
    while(pre->right != NULL)
    {
        pre_pre = pre;
        pre = pre->right;
    }
    found->data == pre->data;
    if(pre->left!=NULL)
        pre_pre->left = pre->left;
    delete pre;
    count--;
    return success;
}
Error_code BinarySearchtree::tree_search(Entry &target) const
{
    Binary_node *found = root;
    while(found != NULL&&found->data != target)
    {
        if(target > found->data)
            found = found->right;
        else
            found = found->left;
    }
    if(found == NULL)return notPresent;
    return success;
}
void BinarySearchtree::recursive_preorder(Binary_node*sub_root, void (*visit)(Entry &))
{
    if(sub_root != NULL)
    {
        Entry x = sub_root->data;
        (*visit)(x);
        recursive_preorder(sub_root->left,print);
        recursive_preorder(sub_root->right,print);
    }
}
void BinarySearchtree::recursive_inorder(Binary_node *sub_root, void (*visit)(Entry &))
{
    if(sub_root!=NULL)
    {
        Entry x = sub_root->data;
        recursive_inorder(sub_root->left,print);
        (*visit)(x);
        recursive_inorder(sub_root->right,print);
    }
}
void BinarySearchtree::recursive_postorder(Binary_node *sub_root, void (*visit)(Entry &))
{
    if(sub_root!=NULL)
    {
        Entry x = sub_root->data;
        recursive_postorder(sub_root->left,print);
        recursive_postorder(sub_root->right,print);
        (*visit)(x);
    }
}
int main()
{
    BinarySearchtree mytree;
    Entry x;
    cin>>x;
    while(x!=-1)
    {
        mytree.insert(x);
        cin>>x;
    }
    mytree.preorder(print);
    mytree.inorder(print);
    mytree.postorder(print);
    return 0;
}
