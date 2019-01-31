#include <iostream>
using namespace std;
enum Error_code{notPresent, overflow, underflow, duplicate_error, success};
enum Balance_factor{left_higher,equal_height,right_higher};
typedef int Entry;

struct AVL_node
{
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

AVL_node:: AVL_node()
{
	left = NULL;
	right = NULL;
	balance = equal_height;
}

AVL_node:: AVL_node(const Entry &x)
{
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
	void preorder(void (*visit)(Entry &));
	void inorder(void (*visit)(Entry &));
	void postorder(void (*visit)(Entry &));

	//new method
	Error_code insert(const Entry &new_data);

protected:
// Add auxiliary function prototypes here.
	void recursive_preorder(AVL_node *sub_root, void (*visit)(Entry &));
	void recursive_inorder(AVL_node *sub_root, void (*visit)(Entry &));
	void recursive_postorder(AVL_node *sub_root, void (*visit)(Entry &));

    Error_code avl_insert(AVL_node * &sub_root, const Entry &new_data, bool &taller);
	void rotate_left(AVL_node * &sub_root);
	void rotate_right(AVL_node * &sub_root);
	void right_balance(AVL_node * &sub_root);
	void left_balance(AVL_node * &sub_root);

	AVL_node *root;
	int count;
};


AVL_tree::AVL_tree()
{
    count=0;
    root=NULL;
}


Error_code AVL_tree::insert(const Entry &new_data)
{
    bool taller;
    return avl_insert(root,new_data,taller);
}

Error_code AVL_tree::avl_insert(AVL_node * &sub_root, const Entry &new_data, bool &taller)
{
   Error_code result = success;
	if (sub_root == NULL)
    {
		sub_root = new AVL_node(new_data);
		taller = true;
	}
	else if (new_data == sub_root->data)
    {
		result = duplicate_error;
		taller = false;
	}
	else if (new_data < sub_root->data)
    { // Insert in left subtree.
		result = avl_insert(sub_root->left, new_data, taller);
		if (taller == true)
		switch (sub_root->get_balance( )) { // Change balance factors.
		case left_higher:
			left_balance(sub_root);
			taller = false; // Rebalancing always shortens the tree.
			break;
		case equal_height:
			sub_root->set_balance(left_higher);
			break;
		case right_higher:
			sub_root->set_balance(equal_height);
			taller = false;
			break;
		}
	}
	else { // Insert in right subtree.
		result = avl_insert(sub_root->right, new_data, taller);
		if (taller == true)
		switch (sub_root->get_balance( )) {
		case left_higher:
			sub_root->set_balance(equal_height);
			taller = false;
			break;
		case equal_height:
			sub_root->set_balance(right_higher);
			break;
		case right_higher:
			right_balance(sub_root);
			taller = false; // Rebalancing always shortens the tree.
			break;
		}
	}
	return result;
}





void AVL_tree::rotate_left(AVL_node* &sub_root)
{
    if(sub_root==NULL||sub_root->right==NULL)
        cout << "WARNING: program error detected in rotate right" << endl;
    else
    {
        AVL_node *right_tree=sub_root->right;
        sub_root->right=right_tree->left;
        right_tree->left=sub_root;
        sub_root=right_tree;
    }
}

void AVL_tree::rotate_right(AVL_node* &sub_root)
{
	if(sub_root==NULL||sub_root->left==NULL)
		cout << "WARNING: program error detected in rotate right" << endl;
    else
    {
		AVL_node* left_tree = sub_root->left;
		sub_root->left = left_tree->right;
		left_tree->right = sub_root;
		sub_root = left_tree;
	}
}

void AVL_tree::right_balance(AVL_node* &sub_root)
{
    AVL_node* &right_tree = sub_root->right;
    switch (right_tree->get_balance( ))
    {
        case right_higher: // single rotation left
		sub_root->set_balance(equal_height);
		right_tree->set_balance(equal_height);
		rotate_left(sub_root);
		break;

		case equal_height: // impossible case because taller == true
		cout << "WARNING: program error in right balance" << endl;
			break;

		case left_higher: // double rotation left
		AVL_node *sub_tree = right_tree->left;
		switch (sub_tree->get_balance( ))
		{
		case equal_height:
			sub_root->set_balance(equal_height);
			right_tree->set_balance(equal_height);
			break;
		case left_higher: //T2 is h, T3 is h-1
			sub_root->set_balance(equal_height);
			right_tree->set_balance(right_higher);
			break;
		case right_higher: //T2 is h-1, T3 is h
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


void AVL_tree::left_balance(AVL_node* &sub_root)
{
    AVL_node* &left_tree = sub_root->left;
    switch(left_tree->get_balance())
    {
        case left_higher: // single rotation left
		sub_root->set_balance(equal_height);
		left_tree->set_balance(equal_height);
		rotate_right(sub_root);
		break;

		case equal_height: // impossible case
		cout << "WARNING: program error in right balance" << endl;
		break;

		case right_higher: // double rotation left
		AVL_node *sub_tree = left_tree->right;
		switch (sub_tree->get_balance( ))
		{
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


void AVL_tree::preorder(void (*visit)(Entry &))
{
    recursive_preorder(root,visit);
    cout<<endl;
}

void AVL_tree::inorder(void (*visit)(Entry &))
{
    recursive_inorder(root,visit);
    cout<<endl;
}

void AVL_tree::postorder(void (*visit)(Entry &))
{
    recursive_postorder(root,visit);
    cout<<endl;
}

void AVL_tree::recursive_preorder(AVL_node *sub_root, void (*visit)(Entry &))
{
    if(sub_root!=NULL)
    {
        (*visit)(sub_root->data);
        recursive_preorder(sub_root->left,visit);
        recursive_preorder(sub_root->right,visit);
    }
}
void AVL_tree::recursive_inorder(AVL_node *sub_root, void (*visit)(Entry &))
{
    if(sub_root!=NULL)
    {
        recursive_inorder(sub_root->left,visit);
        (*visit)(sub_root->data);
        recursive_inorder(sub_root->right,visit);
    }
}


void AVL_tree::recursive_postorder(AVL_node *sub_root, void (*visit)(Entry &))
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
    AVL_tree x;
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
}
