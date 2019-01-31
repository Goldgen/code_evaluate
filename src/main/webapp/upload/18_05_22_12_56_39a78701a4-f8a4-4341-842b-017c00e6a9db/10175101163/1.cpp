#include <iostream>
using namespace std;
enum Error_code{not_present, overflow, underflow, duplicate_error, success};
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
	BinarySearchtree();
	bool empty( ) ;
	void preorder(void (*visit)(Entry &));
	void inorder(void (*visit)(Entry &));
	void postorder(void (*visit)(Entry &));
	int size( ) ;
	int height( ) ;
	//new method
	Error_code insert(const Entry &new_data);
    Error_code remove(const Entry &target);
    Error_code tree_search(Entry &target) const;
private:
    Error_code search_and_insert(Binary_node * &sub_root,const int &new_data);
    Error_code remove_root(Binary_node* &sub_root);
    Error_code search_and_destroy(Binary_node* &sub_root,const int &target);
    Binary_node* search_for_node(Binary_node* sub_root, const int &target) const;
    int BinaryTreeHeight(Binary_node *node);
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
bool BinarySearchtree::empty()
{
    return count == 0;
}
int BinarySearchtree::size()
{
    return count;
}
int BinarySearchtree::height()
{
    Binary_node* node = root;
    return BinaryTreeHeight(node);
}
int BinarySearchtree::BinaryTreeHeight(Binary_node *node)
{
    int treeHeight = 0;
    if (node != NULL)
    {
        int leftHeight = BinaryTreeHeight(node->left);
        int rightHeight = BinaryTreeHeight(node->right);
        treeHeight = leftHeight >= rightHeight? leftHeight + 1:rightHeight + 1;
    }

    return treeHeight;
}
void BinarySearchtree::preorder(void (*visit)(Entry &))
{
    recursive_preorder(root,visit);
}
void BinarySearchtree:: recursive_preorder(Binary_node *sub_root, void (*visit)(Entry &))
{
	if (sub_root != NULL) {
		(*visit)(sub_root->data);
		recursive_preorder(sub_root->left, visit);
		recursive_preorder(sub_root->right, visit);
	}
}
void BinarySearchtree::inorder(void (*visit)(Entry &))
{
	recursive_inorder(root, visit);
}
void BinarySearchtree::recursive_inorder(Binary_node *sub_root, void (*visit)(Entry &))
{
	if (sub_root != NULL) {
		recursive_inorder(sub_root->left, visit);
		(*visit)(sub_root->data);
		recursive_inorder(sub_root->right, visit);
	}
}
void BinarySearchtree::postorder(void (*visit)(Entry &))
{
	recursive_postorder(root, visit);
}
void BinarySearchtree::recursive_postorder(Binary_node *sub_root, void (*visit)(Entry &))
{
	if (sub_root != NULL) {
		recursive_postorder(sub_root->left, visit);
		recursive_postorder(sub_root->right, visit);
		(*visit)(sub_root->data);
	}
}
Error_code BinarySearchtree::tree_search(int &target) const
{
	Error_code result = success;
	Binary_node* found = search_for_node(root, target);
	if (found == NULL)
 		result = not_present;
	else
		target = found->data;
	return result;
}
Binary_node* BinarySearchtree::search_for_node(
Binary_node* sub_root, const int &target) const
{
	if (sub_root == NULL || sub_root->data == target)
		return sub_root;
	else if (sub_root->data < target)
		return search_for_node(sub_root->right, target);
	else return search_for_node(sub_root->left, target);
}
Error_code BinarySearchtree::insert(const int &new_data)
{
	Error_code result=search_and_insert(root, new_data);
	if(result==success)count++;
	return result;
}
Error_code BinarySearchtree::search_and_insert(Binary_node* &sub_root,const int &new_data)
{
	if (sub_root == NULL) {
		sub_root = new Binary_node(new_data);
		return success;
	}
	else if (new_data < sub_root->data)
		return search_and_insert(sub_root->left, new_data);
	else if (new_data > sub_root->data)
		return search_and_insert(sub_root->right, new_data);
	else return duplicate_error;
}
Error_code BinarySearchtree::remove(const int &target)
{
	Error_code result=search_and_destroy(root, target);
	if(result==success)count--;
	return result;
}
Error_code BinarySearchtree::search_and_destroy(Binary_node* &sub_root,const int &target)
{
	if (sub_root == NULL || sub_root->data == target)
		return remove_root(sub_root);
	else if (target < sub_root->data)
		return search_and_destroy(sub_root->left, target);
	else
		return search_and_destroy(sub_root->right, target);
}
Error_code BinarySearchtree::remove_root(Binary_node* &sub_root)
{
	if (sub_root == NULL) return not_present;
	Binary_node* to_delete = sub_root;
           if (sub_root->right == NULL) sub_root = sub_root->left;
	else if (sub_root->left == NULL) sub_root = sub_root->right;
	else {
		to_delete = sub_root->left;
		Binary_node* parent = sub_root;
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
void print(int &x)
{
    cout<<x<<" ";
}
int main()
{
    BinarySearchtree mytree;
    for(;;)
    {
        int a;
        cin>>a;
        if(a == -1)
        break;
        mytree.insert(a);
    }
	mytree.preorder(print);
	cout<<endl;
	mytree.inorder(print);
	cout<<endl;
	mytree.postorder(print);
	cout<<endl;
    return 0;
}
