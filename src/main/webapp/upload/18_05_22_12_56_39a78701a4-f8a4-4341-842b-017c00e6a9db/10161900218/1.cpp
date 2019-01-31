#include <iostream>
#include <cmath>
using namespace std;

enum Error_code
{
    notPresent, overflow, underflow, duplicateError, success
};

typedef int Entry;
struct Binary_node
{
// data members:
	Entry data;
	Binary_node *left;
	Binary_node *right;
// constructors:
	Binary_node();
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
	BinarySearchtree();
	bool empty() const;
	void preorder(void (*visit)(Entry &));
	void inorder(void (*visit)(Entry &));
	void postorder(void (*visit)(Entry &));
	int size() const;
	int height() const;
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

void print(Entry &entry)
{
    cout<<entry<<" ";
}

int main()
{
    int temp;
    BinarySearchtree tree;
    cin>>temp;
    while(temp!=-1)
    {
        tree.insert(temp);
        cin>>temp;
    }
    tree.preorder(print);
    cout<<"\n";
    tree.inorder(print);
    cout<<"\n";
    tree.postorder(print);
    return 0;
}

BinarySearchtree::BinarySearchtree()
{
	root=NULL;
	count=0;
}

bool BinarySearchtree::empty() const
{
	return count==0;
}

void BinarySearchtree::preorder(void (*visit)(Entry &))
{
	recursive_preorder(root,visit);
}

void BinarySearchtree::inorder(void (*visit)(Entry &))
{
	recursive_inorder(root,visit);
}

void BinarySearchtree::postorder(void (*visit)(Entry &))
{
	recursive_postorder(root,visit);
}

int BinarySearchtree::size() const
{
	return count;
}

int BinarySearchtree::height() const
{
	if(count==0)
        return -1;
	return log(count)/log(2);
}

Error_code BinarySearchtree::insert(const Entry &new_data)
{
	if (count==0)
	{
		root=new Binary_node(new_data);
		count++;
		return success;
	}
	Binary_node *p=root;
	while(p)
	{
		if (new_data>p->data)
		{
			if (p->right==NULL)
			{
				p->right=new Binary_node(new_data);
				count++;
				return success;
			}
			else
			{
				p=p->right;
			}
		}
		else if (new_data<p->data)
		{
			if (p->left==NULL)
			{
				p->left=new Binary_node(new_data);
				count++;
				return success;
			}
			else
			{
				p=p->left;
			}
		}
		else
		{
			return duplicateError;
		}
	}
}

void BinarySearchtree::recursive_preorder(Binary_node *sub_root, void (*visit)(Entry &))
{
	if (sub_root)
	{
		visit(sub_root->data);
		recursive_preorder(sub_root->left,visit);
		recursive_preorder(sub_root->right,visit);
	}
}

void BinarySearchtree::recursive_inorder(Binary_node *sub_root, void (*visit)(Entry &))
{
	if (sub_root)
	{
		recursive_inorder(sub_root->left,visit);
		visit(sub_root->data);
		recursive_inorder(sub_root->right,visit);
	}
}

void BinarySearchtree::recursive_postorder(Binary_node *sub_root, void (*visit)(Entry &))
{
	if (sub_root)
	{
		recursive_postorder(sub_root->left,visit);
		recursive_postorder(sub_root->right,visit);
		visit(sub_root->data);
	}
}
