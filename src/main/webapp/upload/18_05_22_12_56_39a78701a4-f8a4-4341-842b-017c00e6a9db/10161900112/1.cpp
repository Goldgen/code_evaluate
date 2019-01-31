#include <iostream>
#include<math.h>
#include<stdlib.h>
#include<string.h>
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

Binary_node :: Binary_node(const Entry &x){
     data = x;
	left = NULL;
	right = NULL;
}

class Binary_tree {
public:
	Binary_tree( );
	bool empty( ) const;
	void preorder(void (*visit)(Entry &));
	void inorder(void (*visit)(Entry &));
	void postorder(void (*visit)(Entry &));
	int size( ) const;
	int height( ) const;
	//void insert(Entry &x);
	//int height_2(Binary_node *p);
	Error_code insert(const Entry &new_data);
    Error_code remove(const Entry &target);
    Error_code tree_search(const Entry &target);
protected:
// Add auxiliary function prototypes here.
    Error_code search_(const Entry &target, Binary_node *&root);
    Error_code delete_(Binary_node *&root);
    Error_code search_destory(const Entry &target,Binary_node *&root);
    Error_code insert_search(const Entry &new_data, Binary_node *&root);
	void recursive_preorder(Binary_node *sub_root, void (*visit)(Entry &));
	void recursive_inorder(Binary_node *sub_root, void (*visit)(Entry &));
	void recursive_postorder(Binary_node *sub_root, void (*visit)(Entry &));
	Binary_node *root;
	int count;
};
 Error_code Binary_tree::remove(const Entry &target)
 {
     return search_destory(target,root);
 }
 Error_code Binary_tree::search_destory(const Entry &target,Binary_node *&root)
 {
     if(root==NULL)
        return notPresent;
     if(target==root->data)
        return delete_(root);
     else if(target<root->data)
        return search_destory(target,root->left);
     else
        return search_destory(target,root->right);
 }
 Error_code Binary_tree::delete_(Binary_node *&root)
 {
     Binary_node *to_delete,*parent;
     to_delete=root;
     if(root->left==NULL&&root->right!=NULL)root=root->right;
     if(root->right==NULL&&root->left!=NULL)root=root->left;
     if(root->left!=NULL&&root->right!=NULL)
     {
         to_delete=root->right;
         parent=root;
         while(to_delete!=NULL)
         {
             parent=to_delete;
             to_delete=to_delete->right;
         }
         root->data=to_delete->data;
         if(parent==root)root->left=to_delete->left;
         else
            parent->right=to_delete->left;
     }
     delete to_delete;
     return success;

 }
Error_code Binary_tree::insert(const Entry &new_data)
{
    return insert_search(new_data,root);
}
Error_code Binary_tree::insert_search(const Entry &new_data,Binary_node *&root)
{
    if(root==NULL){
        root=new Binary_node(new_data);
        return success;
    }
    else if(root->data>new_data)
        return insert_search(new_data,root->left);
    else if(root->data<new_data)
        return insert_search(new_data,root->right);
    else
        return duplicateError;

}
Error_code Binary_tree::tree_search(const Entry &target){
    return search_(target,root);
}
Error_code Binary_tree::search_(const Entry &target, Binary_node *&root)
{
    if(root==NULL)
        return notPresent;
    if(root->data==target)
        return success;
    else if(root->data<target)
        search_(target,root->right);
    else
        search_(target,root->left);
}
Binary_tree::Binary_tree()
{
    root=NULL;
    count=0;
}
bool Binary_tree:: empty( ) const
{
    return count==0;
}
int Binary_tree::size( ) const
{
    return count;
}
int Binary_tree::height( ) const
{
    if(count==0)return -1;
    return (int)(log(count)/log(2));
}
void Binary_tree::preorder(void (*visit)(Entry &))
{
    recursive_preorder(root,visit);
}
void Binary_tree::recursive_preorder(Binary_node *sub_root, void (*visit)(Entry &))
{
    if(sub_root!=NULL)
    {
        visit(sub_root->data);
        recursive_preorder(sub_root->left,visit);
        recursive_preorder(sub_root->right,visit);
    }
}
void Binary_tree::inorder(void (*visit)(Entry &))
{
    recursive_inorder(root,visit);
}
void Binary_tree::postorder(void (*visit)(Entry &))
{
    recursive_postorder(root,visit);
}
void Binary_tree::recursive_inorder(Binary_node *sub_root, void (*visit)(Entry &))
{
    if(sub_root!=NULL)
    {
        recursive_inorder(sub_root->left,visit);
        visit(sub_root->data);
        recursive_inorder(sub_root->right,visit);
    }
}
void Binary_tree::recursive_postorder(Binary_node *sub_root, void (*visit)(Entry &))
{
    if(sub_root!=NULL)
    {
        recursive_postorder(sub_root->left,visit);
        recursive_postorder(sub_root->right,visit);
        visit(sub_root->data);
    }
}
void print(Entry &a)
{
    cout<<a<<" ";
}
int main()
{
    int number;
    Binary_tree tree1;
    cin>>number;
    while(number!=-1)
    {
        tree1.insert(number);
        cin>>number;
    }
    tree1.preorder(print);
    cout<<endl;
    tree1.inorder(print);
    cout<<endl;
    tree1.postorder(print);

    return 0;
}


