#include <iostream>
#include <stdio.h>
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
	Error_code insert(const Entry &new_data);

protected:
	void recursive_preorder(Binary_node *sub_root, void (*visit)(Entry &));
	void recursive_inorder(Binary_node *sub_root, void (*visit)(Entry &));
	void recursive_postorder(Binary_node *sub_root, void (*visit)(Entry &));
	Error_code Search_and_insert(Binary_node *&sub_root,const int &new_data);
	Binary_node *root;
	int count;
};
BinarySearchtree::BinarySearchtree( )
{
    root=NULL;
    count=0;
}
bool BinarySearchtree::empty( ) const
{
    return count==0;
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
    if(sub_root!=NULL){
        (*visit)(sub_root->data);
        recursive_preorder(sub_root->left,visit);
        recursive_preorder(sub_root->right,visit);
    }
}
void BinarySearchtree::recursive_inorder(Binary_node *sub_root, void (*visit)(Entry &))
{
    if(sub_root!=NULL){
        recursive_inorder(sub_root->left,visit);
        (*visit)(sub_root->data);
        recursive_inorder(sub_root->right,visit);
    }
}
void BinarySearchtree::recursive_postorder(Binary_node *sub_root, void (*visit)(Entry &))
{
    if(sub_root!=NULL){
        recursive_postorder(sub_root->left,visit);
        recursive_postorder(sub_root->right,visit);
        (*visit)(sub_root->data);
    }
}
void print(Entry &x)
{
    cout<<x<<" ";
}
Error_code BinarySearchtree::insert(const Entry &new_data)
{
    return Search_and_insert(root,new_data);
}
Error_code BinarySearchtree::Search_and_insert(Binary_node *&sub_root,const int &new_data)
{
    if(sub_root==NULL){
        sub_root = new Binary_node(new_data);
        return success;
    }
    else if(new_data<sub_root->data)    
		return Search_and_insert(sub_root->left,new_data);
    else if(new_data>sub_root->data)   
		return Search_and_insert(sub_root->right,new_data);
    else   
		return duplicateError;
}
int main()
{
    int x;
    BinarySearchtree input;
    while(scanf("%d",&x)==1 && x!=-1){
        input.insert(x);
    }
    input.preorder(print);
    cout<<endl;
    input.inorder(print);
    cout<<endl;
    input.postorder(print);
    cout<<endl;
    return 0;
}
