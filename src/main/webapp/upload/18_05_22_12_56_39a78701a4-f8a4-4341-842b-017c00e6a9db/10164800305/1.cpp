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
	int count;
};

BinarySearchtree::BinarySearchtree()
{
    count=0;
    root=NULL;
}


Error_code BinarySearchtree::insert(const Entry &new_data)
{
    Binary_node *pt=root;
    Binary_node *prept;
    int start;

    if(root==NULL)
    {
        root=new Binary_node(new_data);
        pt=root;
        count++;
        return success;
    }

    else
    {
        while(pt!=NULL)
        {
            if(pt->data<new_data)
            {
                prept=pt;
                pt=pt->right;
                start=1;
            }
            else if(pt->data>new_data)
            {
                prept=pt;
                pt=pt->left;
                start=0;
            }
            else
            return duplicateError;
        }

        pt=new Binary_node(new_data);
        if(start==0)
        {
            prept->left=pt;
        }
        else
        {
            prept->right=pt;
        }
        count++;
        return success;
    }
}


void BinarySearchtree::preorder(void (*visit)(Entry &))
{
    recursive_preorder(root,visit);
    cout<<endl;
}

void BinarySearchtree::inorder(void (*visit)(Entry &))
{
    recursive_inorder(root,visit);
    cout<<endl;
}

void BinarySearchtree::postorder(void (*visit)(Entry &))
{
    recursive_postorder(root,visit);
    cout<<endl;
}

void BinarySearchtree::recursive_preorder(Binary_node *sub_root, void (*visit)(Entry &))
{
    if(sub_root!=NULL)
    {
        (*visit)(sub_root->data);
        recursive_preorder(sub_root->left,visit);
        recursive_preorder(sub_root->right,visit);
    }
}
void BinarySearchtree::recursive_inorder(Binary_node *sub_root, void (*visit)(Entry &))
{
    if(sub_root!=NULL)
    {
        recursive_inorder(sub_root->left,visit);
        (*visit)(sub_root->data);
        recursive_inorder(sub_root->right,visit);
    }
}


void BinarySearchtree::recursive_postorder(Binary_node *sub_root, void (*visit)(Entry &))
{
    if(sub_root!=NULL)
    {
        recursive_postorder(sub_root->left,visit);
        recursive_postorder(sub_root->right,visit);
        (*visit)(sub_root->data);
    }
}


void print(Entry &x)
{
    cout<<x<<" ";
}


int main()
{
    BinarySearchtree x;
    Entry n;
    cin>>n;
    while(n!=-1)
    {
        x.insert(n);
        cin>>n;
    }
    x.preorder(print);
    x.inorder(print);
    x.postorder(print);

    return 0;
}
