#include <iostream>
#include <math.h>
using namespace std;
enum Error_code
{notPresent, overflow, underflow, duplicateError, success};
enum Balance_factor{ left_higher, equal_height, right_higher };
typedef int Entry;
struct AVL_node {
	Balance_factor balance;
    Entry data;
	AVL_node *left;
	AVL_node *right;
	AVL_node( );
	AVL_node(const Entry &x);
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
	Error_code insert(const Entry &new_data);
    Error_code remove( Entry &new_data);
    Error_code tree_search(Entry &target) const;
protected:
    Error_code avl_insert
		(AVL_node *&sub_root,const Entry &new_data,bool &taller);
    void rotate_left(AVL_node *&sub_root);
    void rotate_right(AVL_node * &sub_root);
    void right_balance(AVL_node *&sub_root);
    void left_balance(AVL_node * &sub_root);
    Error_code avl_remove
		(AVL_node * &sub_root, Entry &new_data, bool &shorter);
	bool right_balance2(AVL_node * &sub_root);
	bool left_balance2(AVL_node * &sub_root);
	AVL_node *Search_for_node
		(AVL_node *sub_root,const Entry &target) const;
	void recursive_preorder
		(AVL_node *sub_root, void (*visit)(Entry &));
	void recursive_inorder
		(AVL_node *sub_root, void (*visit)(Entry &));
	void recursive_postorder
		(AVL_node *sub_root, void (*visit)(Entry &));
	AVL_node *root;
	int count;
};
AVL_tree::AVL_tree()
{
    count=0;
    root=NULL;
}
bool AVL_tree::empty() const
{
    if(count==0)return true;
    return false;
}
int AVL_tree::size() const
{
    return count;
}
int AVL_tree::height() const
{
    if(count==0) return -1;
    return ceil(log10(count) / log10(2));
}
void AVL_tree::preorder
(void (*visit)(Entry &))
{
    recursive_preorder(root,visit);
}
void AVL_tree::inorder
(void (*visit)(Entry &))
{
    recursive_inorder(root,visit);
}
void AVL_tree::postorder
(void (*visit)(Entry &))
{
    recursive_postorder(root,visit);
}
void AVL_tree::recursive_preorder
(AVL_node *sub_root, void (*visit)(Entry &))
{
    if(sub_root!=NULL)
    {
        (*visit)(sub_root->data);
        recursive_preorder(sub_root->left,visit);
        recursive_preorder(sub_root->right,visit);
    }
}
void AVL_tree::recursive_inorder
(AVL_node *sub_root, void (*visit)(Entry &))
{
    if(sub_root!=NULL)
    {
        recursive_inorder(sub_root->left,visit);
        (*visit)(sub_root->data);
        recursive_inorder(sub_root->right,visit);
    }
}
void AVL_tree::recursive_postorder
(AVL_node *sub_root, void (*visit)(Entry &))
{
    if(sub_root!=NULL)
    {
        recursive_postorder(sub_root->left,visit);
        recursive_postorder(sub_root->right,visit);
        (*visit)(sub_root->data);
    }
}
Error_code AVL_tree::insert(const Entry &new_data)
{
    bool taller;
    return avl_insert(root,new_data,taller);
}
Error_code AVL_tree::avl_insert
(AVL_node *&sub_root,const Entry &new_data,bool &taller)
{
    Error_code result=success;
    if(sub_root==NULL)
    {
        sub_root=new AVL_node(new_data);
        taller=true;
    }
    else if(new_data==sub_root->data)
    {
        result=duplicateError;
        taller=false;
    }
    else if(new_data<sub_root->data)
    {
        result=avl_insert(sub_root->left,new_data,taller);
        if(taller==true)
        {
            switch(sub_root->get_balance())
            {
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
    }
    else
    {
        result=avl_insert(sub_root->right,new_data,taller);
        if(taller==true)
        {
            switch(sub_root->get_balance())
            {
            case left_higher:
                sub_root->set_balance(equal_height);
                taller=false;
                break;
            case equal_height:
                sub_root->set_balance(right_higher);
                break;
            case right_higher:
                right_balance(sub_root);
                taller=false;
                break;
            }
        }
    }
    return result;
}
void AVL_tree::rotate_left(AVL_node *&sub_root)
{
    if(sub_root==NULL || sub_root->right==NULL)
        cout<<"WARNING:program error detected in rotate_left"<<endl;
    else
    {
        AVL_node *right_tree=sub_root->right;
        sub_root->right=right_tree->left;
        right_tree->left=sub_root;
        sub_root=right_tree;
    }
}
void AVL_tree::rotate_right(AVL_node * &sub_root)
{
    if (sub_root == NULL || sub_root->left == NULL)
		cout << "WARNING: program error detected in rotate right" << endl;
	else {
		AVL_node *left_tree = sub_root->left;
		sub_root->left = left_tree->right;
		left_tree->right = sub_root;
		sub_root = left_tree;
	}
}
void AVL_tree::right_balance(AVL_node *&sub_root)
{

	AVL_node * &right_tree = sub_root->right;
	switch (right_tree->get_balance( )) {
	case right_higher:
		sub_root->set_balance(equal_height);
		right_tree->set_balance(equal_height);
		rotate_left(sub_root);
		break;
	case equal_height:
        cout << "WARNING: program error in right balance" << endl;
        break;
    case left_higher:
		AVL_node *sub_tree = right_tree->left;
		switch (sub_tree->get_balance( )) {
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
    AVL_node * &left_tree = sub_root->left;
	switch (left_tree->get_balance( )) {
	case left_higher:
		sub_root->set_balance(equal_height);
		left_tree->set_balance(equal_height);
		rotate_right(sub_root);
		break;
	case equal_height:
		cout << "WARNING: program error in right balance" << endl;
		break;
    case right_higher:
		AVL_node *sub_tree = left_tree->right;
		switch (sub_tree->get_balance( )) {
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
Error_code AVL_tree::remove( Entry &new_data)
{
    bool shorter=true;
    return avl_remove(root,new_data,shorter);
}
Error_code AVL_tree::avl_remove
(AVL_node * &sub_root, Entry &new_data, bool &shorter)
{
    Error_code result = success;
       Entry sub_record;
	if (sub_root == NULL) {
		shorter = false;
		return notPresent;
	}
    else if (new_data == sub_root->data) {
		AVL_node *to_delete = sub_root;
		if (sub_root->right == NULL){ 
			sub_root = sub_root->left;
			shorter = true;
			delete to_delete; 
			return success;
		}
		else if (sub_root->left == NULL){
			sub_root = sub_root->right;
			shorter = true;
			delete to_delete;
			return success;
		}
    else {
			to_delete = sub_root->left;
			AVL_node *parent = sub_root;
			while (to_delete->right != NULL) {
                                                   
				parent = to_delete;
				to_delete = to_delete->right;
			}
			new_data = to_delete->data;
			sub_record = new_data; 
		} 
	}
    if (new_data < sub_root->data) {
		result = avl_remove(sub_root->left, new_data, shorter);
		if(sub_record!=0)sub_root->data = sub_record;
		if (shorter == true)
		switch (sub_root->get_balance( )) {
		case left_higher:
			sub_root->set_balance(equal_height);
			break;
		case equal_height:
			sub_root->set_balance(right_higher);
			shorter = false;
			break;
		case right_higher:
			shorter = right_balance2(sub_root);
			break;
		}
	}
    if (new_data > sub_root->data) { 
		result = avl_remove(sub_root->right, new_data, shorter);
		if(sub_record!=0)sub_root->data = sub_record;
		if (shorter == true)
		switch (sub_root->get_balance( )) {
		case left_higher:
			shorter = left_balance2(sub_root);
			break;
		case equal_height:
			sub_root->set_balance(left_higher);
			shorter = false;
			break;
		case right_higher:
			sub_root->set_balance(equal_height);
			break;
		}
	}
	return result;
}
bool AVL_tree::right_balance2(AVL_node * &sub_root)
{
    bool shorter;
	AVL_node * &right_tree = sub_root->right;
	switch (right_tree->get_balance( )) {
	case right_higher: 
		sub_root->set_balance(equal_height);
		right_tree->set_balance(equal_height);
		rotate_left(sub_root);
		shorter = true;
		break;
    case equal_height:
		right_tree->set_balance(left_higher);
		rotate_left(sub_root);
		shorter = false;
		break;
    case left_higher: 
		AVL_node *sub_tree = right_tree->left;
		switch (sub_tree->get_balance( )) {
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
		shorter = true;
		break;
	}
	return shorter;

}
bool AVL_tree::left_balance2(AVL_node * &sub_root)
{
    bool shorter;
	AVL_node * &left_tree = sub_root->left;
	switch (left_tree->get_balance( )) {
	case left_higher: // single rotation left
		sub_root->set_balance(equal_height);
		left_tree->set_balance(equal_height);
		rotate_right(sub_root);
		shorter = true;
		break;
    case equal_height: 
		left_tree->set_balance(left_higher);
		rotate_right(sub_root);
		shorter = false;
		break;
    case right_higher:
		AVL_node *sub_tree = left_tree->right;
		switch (sub_tree->get_balance( )) {
		case equal_height:
			sub_root->set_balance(equal_height);
			left_tree->set_balance(equal_height);
			break;
		case right_higher:
			sub_root->set_balance(equal_height);
			left_tree->set_balance(right_higher);
			break;
    case left_higher:
			sub_root->set_balance(right_higher);
			left_tree->set_balance(equal_height);
			break;
		}
		sub_tree->set_balance(equal_height);
		rotate_left(left_tree);
		rotate_right(sub_root);
		shorter = true;
		break;
	}
	return shorter;
}
Error_code AVL_tree::tree_search(Entry &target) const
{
    Error_code result=success;
    AVL_node *found=Search_for_node(root,target);
    if(found == NULL)
        result=notPresent;
    else
        target=found->data;
    return result;
}
AVL_node *AVL_tree::Search_for_node
(AVL_node *sub_root,const Entry &target) const
{
    while(sub_root != NULL && sub_root->data != target)
    {
        if(sub_root->data<target)sub_root=sub_root->right;
        else sub_root=sub_root->left;
    }
    return sub_root;
}
void print(Entry &x)
{
    cout<<x<<" ";
}
int main()
{
    AVL_tree mytree;
	int tem=0;
	cin>>tem;
	while(tem!=-1)
    {
        mytree.insert(tem);
        cin>>tem;
    }
	mytree.preorder(print);
	cout<<endl;
	mytree.inorder(print);
	cout<<endl;
	mytree.postorder(print);
}