#include <iostream>
using namespace std;
enum Error_code{notPresent, overflow, underflow, duplicate_error, success};
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
	BinarySearchtree( ){
	root=NULL;
	};
	bool empty( ) const;
	void preorder()
	{
        recursive_preorder(root);
        cout<<endl;
	};
	void inorder()
	{
        recursive_inorder(root);
        cout<<endl;
	};
	void postorder()
	{
        recursive_postorder(root);
        cout<<endl;
	};
	int size( ) const;
	int height( ) const;

	//new method
	Error_code insert(const Entry &new_data);
    Error_code remove(const Entry &target);
    Error_code tree_search(Entry &target) const;



protected:
// Add auxiliary function prototypes here.
    Binary_node *root;
    void recursive_preorder(Binary_node *sub_root);
	void recursive_inorder(Binary_node *sub_root);
	void recursive_postorder(Binary_node *sub_root);
    Error_code search_and_insert(Binary_node * &sub_root /*inout*/, const Entry &new_data /*in*/);

	int count;
};

Error_code BinarySearchtree :: insert(const Entry &new_data)
{
	Error_code result=search_and_insert(root, new_data);
	if(result==success)count++;
	return result;
}
Error_code BinarySearchtree :: search_and_insert(
                       Binary_node * &sub_root /*inout*/,
                       const Entry &new_data /*in*/)
{
	if (sub_root == NULL) {
		Binary_node * subb=new Binary_node(new_data);
		sub_root=subb;
		return success;
	}
	else if (new_data < sub_root->data)
		return search_and_insert(sub_root->left, new_data);
	else if (new_data > sub_root->data)
		return search_and_insert(sub_root->right, new_data);
	 return duplicate_error;
}

    void BinarySearchtree::recursive_preorder(Binary_node *sub_root)
{
    if(sub_root!=NULL)
    {
        cout<<sub_root->data<<" ";
        recursive_preorder(sub_root->left);
        recursive_preorder(sub_root->right);

    }
}
void BinarySearchtree::recursive_inorder(Binary_node *sub_root)
{
    if(sub_root!=NULL)
    {

        recursive_inorder(sub_root->left);
        cout<<sub_root->data<<" ";
        recursive_inorder(sub_root->right);

    }
}
void BinarySearchtree::recursive_postorder(Binary_node *sub_root)
{
    if(sub_root!=NULL)
    {
        recursive_postorder(sub_root->left);
        recursive_postorder(sub_root->right);
         cout<<sub_root->data<<" ";
    }
}
int main()
{
   int input;
    BinarySearchtree  btree;
    while(cin>>input)
    {
            if(input==-1)
                break;
            btree.insert(input);
    }
    btree.preorder();
    btree.inorder();
    btree.postorder();
    return 0;
}
