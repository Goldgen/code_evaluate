#include <iostream>
#include <math.h>
#include <stack>
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

class Binary_tree {
public:
	Binary_tree( );
	bool empty( ) const;
	void preorder(void (*visit)(Entry &));
	void inorder(void (*visit)(Entry &));
	void postorder(void (*visit)(Entry &));
	int size( ) const;
	int height(Binary_node *current) const;
	void get_root(Binary_node *&x)const;

	Error_code insert(const Entry &new_data);
	Error_code search_and_insert(Binary_node *&sub_root, const Entry &new_data);

	Error_code remove(const Entry &target);
    Error_code search_and_destroy(Binary_node *&sub_root, const Entry &target);
    Error_code remove_root(Binary_node *&sub_root);

	Error_code tree_search(Entry &target) const;
	Binary_node * search_for_node(Binary_node *sub_root, const Entry &target)const;

protected:
// Add auxiliary function prototypes here.
	void recursive_preorder(Binary_node *sub_root, void (*visit)(Entry &));
	void recursive_inorder(Binary_node *sub_root, void (*visit)(Entry &));
	void recursive_postorder(Binary_node *sub_root, void (*visit)(Entry &));
	Binary_node *root;
	int count;
};

Binary_tree:: Binary_tree(){
    root = NULL;
    count = 0;
}

bool Binary_tree::empty()const{
    return root == NULL;
}

int Binary_tree::size()const{
    return count;
}

void Binary_tree::get_root(Binary_node *&x)const{
    x = root;
}

int Binary_tree::height(Binary_node *current)const{
    if(current == NULL)return -1;
    int max_h = (height(current->left) > height(current->right))?(height(current->left)):(height(current->right));
    return ++ max_h;
}

void print(Entry &x){
    cout<<x<<" ";
}

void Binary_tree::postorder(void (*visit)(Entry &)){
    recursive_postorder(root, visit);
}

void Binary_tree::preorder(void (*visit)(Entry &)){
    recursive_preorder(root, visit);
}

void Binary_tree::inorder(void (*visit)(Entry &)){
    recursive_inorder(root, visit);
}

void Binary_tree::recursive_preorder(Binary_node *sub_root, void (*visit)(Entry &)){
    if (sub_root != NULL) {
		(*visit)(sub_root->data);
		recursive_preorder(sub_root->left, visit);
		recursive_preorder(sub_root->right, visit);
	}

}

void Binary_tree::recursive_inorder(Binary_node *sub_root, void (*visit)(Entry &)){
	if (sub_root != NULL) {
		recursive_inorder(sub_root->left, visit);
		(*visit)(sub_root->data);
		recursive_inorder(sub_root->right, visit);
	}

}

void Binary_tree::recursive_postorder(Binary_node *sub_root, void (*visit)(Entry &)){
	if (sub_root != NULL) {
		recursive_postorder(sub_root->left, visit);
		recursive_postorder(sub_root->right, visit);
		(*visit)(sub_root->data);
	}

}

Error_code Binary_tree::insert(const Entry &new_data){
    return search_and_insert(root, new_data);
}

Error_code Binary_tree::search_and_insert(Binary_node *&sub_root, const Entry &new_data){
    if(sub_root == NULL){
        sub_root = new Binary_node(new_data);
        return success;
    }
    else if(new_data < sub_root->data)
        return search_and_insert(sub_root->left, new_data);
    else if(new_data > sub_root->data)
        return search_and_insert(sub_root->right, new_data);
    else return duplicateError;
}

Error_code Binary_tree::remove(const Entry &target){
    return search_and_destroy(root, target);
}

Error_code Binary_tree::search_and_destroy(Binary_node *&sub_root, const Entry &target){
    if(sub_root == NULL || sub_root->data == target)
        return remove_root(sub_root);
    else if(target < sub_root->data)
        return search_and_destroy(sub_root->left, target);
    else if(target > sub_root->data)
        return search_and_destroy(sub_root->right, target);
}

Error_code Binary_tree::remove_root(Binary_node *&sub_root){
    if(sub_root == NULL)return notPresent;
    Binary_node *to_detele = sub_root;
    if(sub_root->right == NULL)sub_root = sub_root->left;
    else if(sub_root->left == NULL)sub_root = sub_root->right;
    else{
        to_detele = sub_root->left;
        Binary_node *parent = sub_root;
        while(to_detele->right != NULL){
            parent = to_detele;
            to_detele = to_detele->right;
        }
        sub_root->data = to_detele->data;
        if(parent == sub_root)sub_root->left = to_detele->left;
        else parent->right = to_detele->left;
    }
    delete to_detele;
    return success;
}

Error_code Binary_tree::tree_search(Entry &target) const{
    Error_code result = success;
    Binary_node *found = search_for_node(root, target);
    if(found == NULL)
        result = notPresent;
    else
        target = found->data;
    return result;
}

Binary_node * Binary_tree::search_for_node(Binary_node *sub_root, const Entry &target)const{
    while(sub_root != NULL && sub_root->data != target){
        if(sub_root->data < target)sub_root = sub_root->right;
        else sub_root = sub_root->left;
    }
    return sub_root;
}

int main()
{
    Binary_tree MyTree;
    int c;
    cin >> c;
    while(c != -1){
        MyTree.insert(c);
        cin >> c;
    }

    MyTree.preorder(print);
    cout<<endl;
    MyTree.inorder(print);
    cout<<endl;
    MyTree.postorder(print);
    cout<<endl;

    return 0;
}
