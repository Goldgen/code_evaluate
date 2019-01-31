#include <iostream>
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
	void preorder();
	void inorder();
	void postorder();
	int size( ) const;
	int height( ) const;

	//new method
	Error_code insert(const Entry &new_data);
    Error_code remove(const Entry &target);
    Error_code tree_search(Entry &target) const;
    Error_code search_and_insert(
                       Binary_node * &sub_root ,
                       const Entry &new_data );
    Binary_node* search_for_node(Binary_node* sub_root, const Entry &target) const;
    Error_code search_and_destroy(Binary_node* &sub_root,const Entry &target);
    Error_code remove_root(Binary_node * &sub_root);

protected:
// Add auxiliary function prototypes here.
	void recursive_preorder(Binary_node *sub_root);
	void recursive_inorder(Binary_node *sub_root);
	void recursive_postorder(Binary_node *sub_root);
	Binary_node *root;
	int count;
};

int main()
{
    int n;
    BinarySearchtree a;
    cin >> n;
    while (n!=-1){
        a.insert(n);
        cin >> n;
    }
    a.preorder();
    cout << endl;
    a.inorder();
    cout << endl;
    a.postorder();
}
Error_code BinarySearchtree::insert(const Entry &new_data)
{
    Error_code result=search_and_insert(root, new_data);
	if(result==success)count++;
	return result;
}
Error_code BinarySearchtree:: search_and_insert(
                       Binary_node * &sub_root ,
                       const Entry &new_data )
{
	if (sub_root == NULL) {
		sub_root = new Binary_node(new_data);
		return success;
	}
	else if (new_data < sub_root->data)
		return search_and_insert(sub_root->left, new_data);
	else if (new_data > sub_root->data)
		return search_and_insert(sub_root->right, new_data);
	else return duplicateError;
}
Error_code BinarySearchtree::tree_search(Entry &target) const
{
	Error_code result = success;
	Binary_node*found = search_for_node(root, target);
    if (found == NULL)
		result = notPresent;
	else
		target = found->data;
	return result;
}
Binary_node* BinarySearchtree::search_for_node(
Binary_node* sub_root, const Entry &target) const
{
	if (sub_root == NULL || sub_root->data == target)
		return sub_root;
	else if (sub_root->data < target)
		return search_for_node(sub_root->right, target);
	else return search_for_node(sub_root->left, target);
}
Error_code  BinarySearchtree:: remove(const Entry &target)
{
	Error_code result=search_and_destroy(root, target);
	if(result==success)count--;
	return result;
}
Error_code BinarySearchtree :: search_and_destroy(Binary_node* &sub_root,
                                                           const Entry &target)

{
	if (sub_root == NULL || sub_root->data == target)
		return remove_root(sub_root);
	else if (target < sub_root->data)
		return search_and_destroy(sub_root->left, target);
	else
		return search_and_destroy(sub_root->right, target);
}
Error_code BinarySearchtree :: remove_root(Binary_node * &sub_root)
{
	if (sub_root == NULL) return notPresent;
	Binary_node *to_delete = sub_root;
           if (sub_root->right == NULL) sub_root = sub_root->left;
	else if (sub_root->left == NULL) sub_root = sub_root->right;
	else {
		to_delete = sub_root->left;
		Binary_node *parent = sub_root;
		while (to_delete->right != NULL) {
			parent = to_delete;
			to_delete = to_delete->right;
		}
		sub_root->data = to_delete->data;
		if (parent == sub_root) sub_root->left = to_delete->left;
		else parent->right = to_delete->left;
	}
	delete to_delete;
	return success;
}

void BinarySearchtree::recursive_preorder(Binary_node *sub_root)
{
    if (sub_root != NULL){
        cout << sub_root -> data << " " ;
        recursive_preorder(sub_root->left);
        recursive_preorder(sub_root->right);
    }
}

void BinarySearchtree::recursive_inorder(Binary_node *sub_root)
{
    if (sub_root != NULL){
        recursive_inorder(sub_root->left);
        cout << sub_root -> data << " " ;
        recursive_inorder(sub_root->right);
    }
}

void BinarySearchtree::recursive_postorder(Binary_node *sub_root)
{
    if (sub_root != NULL){
        recursive_postorder(sub_root->left);
        recursive_postorder(sub_root->right);
        cout << sub_root -> data << " " ;
    }
}
int BinarySearchtree::size()const
{
    return count;
}
int BinarySearchtree::height()const
{
    int count=size(),k;
    if(count == 0)cout << 0;
    int tmp = 1;
    for (k = 0;tmp <= count;k ++)
        tmp *= 2;
    return k;
}
void BinarySearchtree::inorder()
{
    recursive_inorder(root);
}
void BinarySearchtree::preorder()
{
    recursive_preorder(root);
}
void BinarySearchtree::postorder()
{
    recursive_postorder(root);
}
BinarySearchtree::BinarySearchtree()
{
    root = NULL;
    count = 0;
}
