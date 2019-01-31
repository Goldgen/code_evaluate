#include <iostream>
#include "Record.h"
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
	Binary_node *root;
	Error_code search_and_insert(Binary_node *&sub_root,const Record &new_data);
	Error_code remove_root(Binary_node *&sub_root/*inout*/);
    Error_code search_and_destroy(Binary_node *&sub_root,const Record &target);
	int count;
};

Error_code BinarySearchtree::insert(const Entry &new_data)
{
    return search_and_insert(root,new_data);
}

Error_code BinarySearchtree::search_and_insert(Binary_node *&sub_root,const Record &new_data)
{
    if (sub_root == NULL) {

		sub_root = new Binary_node;

		return success;

	}

	else if (new_data < sub_root->data)

		return search_and_insert(sub_root->left, new_data);

	else if (new_data > sub_root->data)

		return search_and_insert(sub_root->right, new_data);

	else return duplicateError;

}

Error_code BinarySearchtree::remove_root(Binary_node *&sub_root)
{
	if (sub_root == NULL) return notPresent;
	Binary_node*to_delete = sub_root;  // Remember node to delete at end.
	//???????????????????
           if(sub_root->right == NULL) sub_root = sub_root->left;
	       else if (sub_root->left == NULL) sub_root = sub_root->right;
	       else { // Neither subtree is empty.
		       to_delete = sub_root->left; // Move left to find predecessor. ????????
               Binary_node *parent = sub_root; // parent of to_delete
               while (to_delete->right != NULL)
               { // to_delete is not the predecessor.
		          	parent = to_delete;
			        to_delete = to_delete->right;
		       }
		sub_root->data = to_delete->data; // Move from to_delete to root.
		if (parent == sub_root) sub_root->left = to_delete->left;
		else parent->right = to_delete->left;
	}
	delete to_delete; // Remove to_delete from tree.
	return success;
}

Error_code BinarySearchtree::search_and_destroy(Binary_node *&sub_root,const Record &target)
{
    if(sub_root==NULL||sub_root->data==target)
        return remove_root(sub_root);
    else if(target<sub_root->data)
        return search_and_destroy(sub_root->left,target);
    else
        return search_and_destroy(sub_root->right,target);
}

Error_code BinarySearchtree::remove(const Entry &target)
{
    return search_and_destroy(root,target);
}

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}