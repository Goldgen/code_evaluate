#include <iostream>
#include <stdio.h>
using namespace std;
enum Error_code{notPresent, overflow, underflow, duplicateError, success};
enum Balance_factor{ left_higher, equal_height, right_higher };

typedef int Entry;

struct AVL_node {
// additional data member:
	Balance_factor balance;
    Entry data;
	AVL_node *left;
	AVL_node *right;
// constructors:
	AVL_node( );
	AVL_node(const Entry &x);
//functions:
	void set_balance(Balance_factor b);
	Balance_factor get_balance( ) const;
};

AVL_node:: AVL_node(){
	left = NULL;
	right = NULL;
	balance = equal_height;
}

AVL_node:: AVL_node(const Entry &x){
	data = x;
	left = NULL;
	right = NULL;
	balance = equal_height;
}

void AVL_node::set_balance(Balance_factor b)
{
	balance = b;
}

Balance_factor AVL_node:: get_balance( ) const
{
	return balance;
}


class AVL_tree {
public:
	AVL_tree( );
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
    AVL_node *root;
	int count;

	void recursive_preorder(AVL_node *sub_root, void (*visit)(Entry &));
	void recursive_inorder(AVL_node *sub_root, void (*visit)(Entry &));
	void recursive_postorder(AVL_node *sub_root, void (*visit)(Entry &));

	int recursive_height(AVL_node *x) const;
	Error_code avl_insert(AVL_node * &sub_root, const Entry &new_data, bool &taller);
	void rotate_left(AVL_node * &sub_root);
	void rotate_right(AVL_node * &sub_root);
	void right_balance(AVL_node * &sub_root);
	void left_balance(AVL_node * &sub_root);
	//add for remove
	Error_code avl_remove(AVL_node * &sub_root, int &new_data, bool &shorter);
	//bool right_balance2(AVL_node * &sub_root);
	//bool left_balance2(AVL_node * &sub_root);

};
AVL_tree::AVL_tree()
{
    count=0;
    root=NULL;
}
bool AVL_tree::empty( ) const
{
    return count==0;
}
void AVL_tree::preorder(void (*visit)(Entry &))
{
    recursive_preorder(root,visit);
}
void AVL_tree::inorder(void (*visit)(Entry &))
{
    recursive_inorder(root,visit);
}
void AVL_tree::postorder(void (*visit)(Entry &))
{
    recursive_postorder(root,visit);
}
void AVL_tree::recursive_preorder(AVL_node *sub_root, void (*visit)(Entry &))
{
    if(sub_root!=NULL){
        (*visit)(sub_root->data);
        recursive_preorder(sub_root->left,visit);
        recursive_preorder(sub_root->right,visit);
    }
}
void AVL_tree::recursive_inorder(AVL_node *sub_root, void (*visit)(Entry &))
{
    if(sub_root!=NULL){
        recursive_inorder(sub_root->left,visit);
        (*visit)(sub_root->data);
        recursive_inorder(sub_root->right,visit);
    }
}
void AVL_tree::recursive_postorder(AVL_node *sub_root, void (*visit)(Entry &))
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
int AVL_tree::size( ) const
{
    return count;
}
int AVL_tree::height( ) const
{
    return recursive_height(root);
}
int AVL_tree::recursive_height(AVL_node *x) const
{
    if(x==NULL){
        return -1;
    }
    else{
        return max(recursive_height(x->left),recursive_height(x->right))+1;
    }
}
Error_code AVL_tree::insert(const Entry &new_data)
{
    bool taller;
    return avl_insert(root,new_data,taller);
}
Error_code AVL_tree::avl_insert(AVL_node * &sub_root, const Entry &new_data, bool &taller)
{
    Error_code result=success;
    if(sub_root==NULL){
        sub_root=new AVL_node(new_data);
        taller=true;
    }
    else if(new_data==sub_root->data){
        result=duplicateError;
        taller=false;
    }
    else if(new_data<sub_root->data){
        result=avl_insert(sub_root->left,new_data,taller);
        if(taller==true)
        switch(sub_root->get_balance()){
        case left_higher:
            left_balance(sub_root);
            taller=false;
            break;
        case equal_height:
            sub_root->set_balance(left_higher);
            break;
        case right_higher:
            sub_root->set_balance(equal_height);
            taller=false;
            break;
        }
    }
    else{
        result=avl_insert(sub_root->right,new_data,taller);
        if(taller==true)
        switch(sub_root->get_balance()){
        case right_higher:
            right_balance(sub_root);
            taller=false;
            break;
        case equal_height:
            sub_root->set_balance(right_higher);
            break;
        case left_higher:
            sub_root->set_balance(equal_height);
            taller=false;
            break;
        }
    }
    return result;
}
void AVL_tree::rotate_left(AVL_node * &sub_root)
{
    if(sub_root==NULL||sub_root->right==NULL)
        cout<<"WARNING"<<endl;
    else{
        AVL_node *right_tree=sub_root->right;
        sub_root->right=right_tree->left;
        right_tree->left=sub_root;
        sub_root=right_tree;
    }
}
void AVL_tree::rotate_right(AVL_node * &sub_root)
{
    if(sub_root==NULL||sub_root->left==NULL)
        cout<<"WARNING"<<endl;
    else{
        AVL_node *left_tree=sub_root->left;
        sub_root->left=left_tree->right;
        left_tree->right=sub_root;
        sub_root=left_tree;
    }
}
void AVL_tree::right_balance(AVL_node * &sub_root)
{
    AVL_node *&right_tree=sub_root->right;
    switch(right_tree->get_balance()){
    case right_higher:
        sub_root->set_balance(equal_height);
        right_tree->set_balance(equal_height);
        rotate_left(sub_root);
        break;
    case equal_height:
        cout<<"WARNING"<<endl;
        break;
    case left_higher:
        AVL_node *sub_tree=right_tree->left;
        switch(sub_tree->get_balance()){
        case equal_height:
            sub_root->set_balance(equal_height);
            right_tree->set_balance(equal_height);
            break;
        case left_higher:
            sub_root->set_balance(equal_height);
            right_tree->set_balance(right_higher);
            break;
        case right_higher:
            sub_root->set_balance(left_higher);
            right_tree->set_balance(equal_height);
            break;
        }
        sub_tree->set_balance(equal_height);
        rotate_right(right_tree);
        rotate_left(sub_root);
        break;
    }
}
void AVL_tree::left_balance(AVL_node * &sub_root)
{
    AVL_node *&left_tree=sub_root->left;
    switch(left_tree->get_balance()){
    case left_higher:
        sub_root->set_balance(equal_height);
        left_tree->set_balance(equal_height);
        rotate_right(sub_root);
        break;
    case equal_height:
        cout<<"WARNING"<<endl;
        break;
    case right_higher:
        AVL_node *sub_tree=left_tree->right;
        switch(sub_tree->get_balance()){
        case equal_height:
            sub_root->set_balance(equal_height);
            left_tree->set_balance(equal_height);
            break;
        case right_higher:
            sub_root->set_balance(equal_height);
            left_tree->set_balance(left_higher);
            break;
        case left_higher:
            sub_root->set_balance(right_higher);
            left_tree->set_balance(equal_height);
            break;
        }
        sub_tree->set_balance(equal_height);
        rotate_left(left_tree);
        rotate_right(sub_root);
        break;
    }
}
Error_code AVL_tree::avl_remove(AVL_node * &sub_root, int &new_data, bool &shorter)
{

}
int main()
{
    int x;
    AVL_tree mytree;
    while(scanf("%d",&x)==1 && x!=-1){
        mytree.insert(x);
    }
    mytree.preorder(print);
    cout<<endl;
    mytree.inorder(print);
    cout<<endl;
    mytree.postorder(print);
    cout<<endl;
    return 0;
}