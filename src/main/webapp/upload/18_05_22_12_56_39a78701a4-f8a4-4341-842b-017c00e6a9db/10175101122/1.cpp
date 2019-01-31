#include<bits/stdc++.h>
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
    Binary_node *search_for_node(Binary_node *sub_root,const int &target)const;
    Error_code search_and_insert(Binary_node *&sub_root,const int &new_data);
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
        recursive_preorder(sub_root->right, visit);
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

int BinarySearchtree:: size( ) const
{
    return count;
}

int BinarySearchtree::height()const
{
    int count = size(),i;
    if(count==0)    i=0;
    else
    {
        int tmp=1;
        for(i=-1; tmp<=count; i++)
            tmp*=2;

    }
    return i;
}
BinarySearchtree:: BinarySearchtree( )
{
    root = NULL;
    count = 0;
}

bool BinarySearchtree :: empty( ) const
{
    return root == NULL;
}

Binary_node*BinarySearchtree::search_for_node(Binary_node *sub_root,const int &target)const
{
    if(sub_root==NULL||sub_root->data==target)
        return sub_root;
    else  if (sub_root->data<target)
        return search_for_node(sub_root->right,target);
    else return search_for_node(sub_root->left,target);
}
Error_code BinarySearchtree::tree_search(Entry &target)const
{
    Error_code result=success;
    Binary_node *found=search_for_node(root,target);
    if(found==NULL)
        result=notPresent;
    else
        target=found->data;
    return result;
}
Error_code BinarySearchtree::insert(const int &new_data)
{
    return search_and_insert(root,new_data);
}
Error_code BinarySearchtree::search_and_insert(Binary_node *&sub_root,const int &new_data)
{
    if(sub_root==NULL)
    {
        sub_root=new Binary_node (new_data);
        return success;
    }
    else if (new_data<sub_root->data)
        return search_and_insert(sub_root->left,new_data);
    else if (new_data>sub_root->data)
        return search_and_insert(sub_root->right,new_data);
    else return duplicateError;
}
Error_code BinarySearchtree::remove(const Entry &target)
{
    if(root==NULL) return notPresent;
    Binary_node *to_delete=root;
    if(root->right==NULL) root=root->left;
    else if (root->left==NULL) root=root->right;
    else {
        to_delete=root->left;
        Binary_node *parent=root;
        while(to_delete->right!=NULL)
        {
            parent=to_delete;
            to_delete=to_delete->right;
        }
        root->data=to_delete->data;
        if(parent==root) root->left=to_delete->left;
        else parent->right=to_delete->left;
    }
    delete to_delete;
    return success;
}
void print(Entry &x)
{
    cout<<x<<' ';
}
int main()
{
	BinarySearchtree mytree;
    int n;
    cin>>n;
    while(n!=-1)
    {
        mytree.insert(n);
        scanf("%d",&n);
    }
    mytree.preorder(print);
    cout<<endl;
    mytree.inorder(print);
    cout<<endl;
    mytree.postorder(print);
    cout<<endl;
}
