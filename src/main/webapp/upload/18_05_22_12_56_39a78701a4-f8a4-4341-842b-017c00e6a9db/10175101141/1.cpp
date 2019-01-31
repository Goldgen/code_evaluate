#include <iostream>
using namespace std;

enum Error_code{notPresent, overflow, underflow, duplicateError, success};

typedef int Entry;

struct Binary_node
{
// data members:
	Entry data;
	Binary_node *left;
	Binary_node *right;
// constructors:
	Binary_node( );
	Binary_node(const Entry &x);
};

Binary_node:: Binary_node()
{
	left = NULL;
	right = NULL;
}

Binary_node:: Binary_node(const Entry &x)
{
     data = x;
	left = NULL;
	right = NULL;
}

class BinarySearchtree
{
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
	int count;
};

BinarySearchtree :: BinarySearchtree( )
/* Post: An empty binary tree has been created. */
{
	root = NULL;
	count = 0;
}

bool BinarySearchtree :: empty( ) const
/* Post: A result oftrue is returned if the binary tree is empty. Otherwise,false is
returned. */
{
	return root == NULL;
}

void BinarySearchtree :: preorder(void (*visit)(Entry &))
{
    recursive_preorder(root,visit);
}

void BinarySearchtree :: inorder(void (*visit)(Entry &))
{
    recursive_inorder(root,visit);
}

void BinarySearchtree :: postorder(void (*visit)(Entry &))
{
    recursive_postorder(root,visit);
}

void BinarySearchtree :: recursive_preorder(Binary_node *sub_root, void (*visit)(Entry &))
{
    if(sub_root!=NULL)
    {
        (*visit)(sub_root->data);
        recursive_preorder(sub_root->left,visit);
        recursive_preorder(sub_root->right,visit);
    }
}

void BinarySearchtree :: recursive_inorder(Binary_node *sub_root, void (*visit)(Entry &))
{
    if(sub_root!=NULL)
    {
        recursive_inorder(sub_root->left,visit);
        (*visit)(sub_root->data);
        recursive_inorder(sub_root->right,visit);
    }
}

void BinarySearchtree :: recursive_postorder(Binary_node *sub_root, void (*visit)(Entry &))
{
    if(sub_root!=NULL)
    {
        recursive_postorder(sub_root->left,visit);
        recursive_postorder(sub_root->right,visit);
        (*visit)(sub_root->data);
    }
}

int BinarySearchtree :: size( ) const
{
	return count;
}

int BinarySearchtree :: height( ) const
{
	int count=size();
	if(count==0)
        return 0;
	int tmp=1;
	int k;
	for(k=0; tmp<=count; k++)
	    tmp*=2;
	return k;
}

Binary_node *search_for_node(Binary_node *sub_root,const Entry &target)
{
    if(sub_root==NULL||sub_root->data==target)
        return sub_root;
    else if(sub_root->data<target)
        return search_for_node(sub_root->right,target);
    else
        return search_for_node(sub_root->left,target);
}

Error_code BinarySearchtree :: tree_search(Entry &target) const
{
    Error_code result =success;
    Binary_node *found = search_for_node(root,target);
    if(found==NULL)
        result = notPresent;
    else
        target = found->data;
    return result;
}

Error_code search_and_insert(Binary_node * &sub_root, const Entry &new_data)
{
    if (sub_root == NULL)
    {
		sub_root = new Binary_node(new_data);
		return success;
	}
	else if (new_data < sub_root->data)
		return search_and_insert(sub_root->left, new_data);
	else if (new_data > sub_root->data)
		return search_and_insert(sub_root->right, new_data);
	else
	    return duplicateError;

}

Error_code BinarySearchtree :: insert(const Entry &new_data)
{
    Error_code result=search_and_insert(root, new_data);
	if(result==success)
        count++;
	return result;
}

Error_code remove_root(Binary_node * &sub_root)
{
	if (sub_root == NULL)
        return notPresent;
	Binary_node *to_delete = sub_root;  // Remember node to delete at end.
	//???????????????????
           if (sub_root->right == NULL) sub_root = sub_root->left;
	else if (sub_root->left == NULL) sub_root = sub_root->right;
	else { // Neither subtree is empty.
		to_delete = sub_root->left; // Move left to find predecessor. ????????
		Binary_node *parent = sub_root; // parent of to_delete
		while (to_delete->right != NULL) { // to_delete is not the predecessor.
			parent = to_delete;
			to_delete = to_delete->right;
		}
		sub_root->data = to_delete->data; // Move from to_delete to root.
		if (parent == sub_root)
		    sub_root->left = to_delete->left;
		else
		    parent->right = to_delete->left;
	}
	delete to_delete; // Remove to_delete from tree.
	return success;
}

Error_code search_and_destroy(Binary_node * &sub_root,const Entry &target)
{
	if (sub_root == NULL || sub_root->data == target)
		return remove_root(sub_root);
	else if (target < sub_root->data)
		return search_and_destroy(sub_root->left, target);
	else
		return search_and_destroy(sub_root->right, target);
}

Error_code BinarySearchtree :: remove(const Entry &target)
{
	Error_code result=search_and_destroy(root, target);
	if(result==success)
        count--;
	return result;
}

void print(Entry &x)
{
	cout<<x<<" ";
}

int main()
{
    BinarySearchtree myBinarySearchtree;
    int a[10];
    int i;
    for(i=0;i<10;i++)
    {
        cin >> a[i];
        if(a[i]==-1)
            break;
        myBinarySearchtree.insert(a[i]);
    }
    myBinarySearchtree.preorder(print);
    cout << endl;
    myBinarySearchtree.inorder(print);
    cout << endl;
    myBinarySearchtree.postorder(print);
    cout << endl;
}
