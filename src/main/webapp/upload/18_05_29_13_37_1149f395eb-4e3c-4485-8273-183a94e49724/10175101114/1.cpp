#include <iostream>
using namespace std;

enum Error_code{not_present, overflow, underflow, duplicate_error, success};
enum Balance_factor{ left_higher, equal_height, right_higher };
typedef int Entry;

void print(Entry &x){
	cout<<x<<" ";
}

struct AVL_node {
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

	//new method
	Error_code insert(const Entry &new_data);
    Error_code remove( Entry &target);
    Error_code tree_search(Entry &target) const;

protected:
// Add auxiliary function prototypes here.
	void recursive_preorder(AVL_node *sub_root, void (*visit)(Entry &));
	void recursive_inorder(AVL_node *sub_root, void (*visit)(Entry &));
	void recursive_postorder(AVL_node *sub_root, void (*visit)(Entry &));
	// Add auxiliary function prototypes here.
	Error_code avl_insert(AVL_node * &sub_root, const Entry &new_data, bool &taller);
	void rotate_left(AVL_node * &sub_root);
	void rotate_right(AVL_node * &sub_root);
	void right_balance(AVL_node * &sub_root);
	void left_balance(AVL_node * &sub_root);
	//add for remove
	Error_code avl_remove(AVL_node * &sub_root, Entry &new_data, bool &shorter);
	bool right_balance2(AVL_node * &sub_root);
	bool left_balance2(AVL_node * &sub_root);

	AVL_node *root;
	int count;
};

AVL_tree :: AVL_tree()
{
    root = NULL;
    count = 0;
}

void AVL_tree::preorder(void (*visit)(Entry &))
{
	recursive_preorder(root, visit);
}

void AVL_tree::recursive_preorder(AVL_node *sub_root, void (*visit)(Entry &))
{
	if (sub_root != NULL) {
		(*visit)(sub_root->data);
		recursive_preorder(sub_root->left, visit);
		recursive_preorder(sub_root->right, visit);
	}
}

void AVL_tree::inorder(void (*visit)(Entry &))
{
	recursive_inorder(root, visit);
}

void AVL_tree::recursive_inorder(AVL_node *sub_root, void (*visit)(Entry &))
{
	if (sub_root != NULL) {
		recursive_inorder(sub_root->left, visit);
		(*visit)(sub_root->data);
		recursive_inorder(sub_root->right, visit);
	}
}

void AVL_tree::postorder(void (*visit)(Entry &))
{
	recursive_postorder(root, visit);
}

void AVL_tree::recursive_postorder(AVL_node *sub_root, void (*visit)(Entry &))
{
	if (sub_root != NULL) {
		recursive_postorder(sub_root->left, visit);
		recursive_postorder(sub_root->right, visit);
		(*visit)(sub_root->data);
	}
}

int AVL_tree::size( ) const
{
	return count;
}

int AVL_tree::height( ) const
{
	int count=size();
	if(count==0)return -1;
	int tmp=1;
	int k;
	for(k=0; tmp<=count; k++) tmp*=2;
	return k-1;
}


Error_code AVL_tree :: insert(const Entry &new_data)
/* Post: If the key of new data is already in the AVL tree , a code of duplicate_error is returned. Otherwise, a code of success is returned and the Record new data is inserted into the tree in such a way that the properties of an AVL tree are preserved.
Uses: avl_insert . */
{
	bool taller; // Has the tree grown in height?
	return avl_insert(root, new_data, taller);
}

Error_code AVL_tree :: avl_insert(AVL_node * &sub_root,  const Entry &new_data, bool &taller)
{
	Error_code result = success;
	if (sub_root == NULL) {
		sub_root = new AVL_node(new_data);
		taller = true;
	}
	else if (new_data == sub_root->data) {
		result = duplicate_error;
		taller = false;
	}
	else if (new_data < sub_root->data) { // Insert in left subtree.
		result = avl_insert(sub_root->left, new_data, taller);
		if (taller == true)
		switch (sub_root->get_balance( )) {
		case left_higher:
			left_balance(sub_root);
			taller = false;
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

void AVL_tree :: rotate_left(AVL_node * &sub_root)
/* Pre: sub_root points to a subtree of the AVL tree . This subtree has a nonempty right subtree.
Post: sub_root is reset to point to its former right child, and the former sub_root node is the left child of the new sub_root node. */
{
	if (sub_root == NULL || sub_root->right == NULL) // impossible cases
		cout << "WARNING: program error detected in rotate left" << endl;
	else {
		AVL_node *right_tree = sub_root->right;
		sub_root->right = right_tree->left;
		right_tree->left = sub_root;
		sub_root = right_tree;
	}
}

void AVL_tree :: rotate_right(AVL_node * &sub_root)
/* Pre: sub_root points to a subtree of the AVL tree . This subtree has a nonempty
left subtree.
Post: sub_root is reset to point to its former left child, and the former sub_root
node is the right child of the new sub_root node. */
{
	if (sub_root == NULL || sub_root->left == NULL) // impossible cases
		cout << "WARNING: program error detected in rotate right" << endl;
	else {
		AVL_node *left_tree = sub_root->left;
		sub_root->left = left_tree->right;
		left_tree->right = sub_root;
		sub_root = left_tree;
	}
}

void AVL_tree :: right_balance(AVL_node * &sub_root)
/* Pre: sub root points to a subtree of an AVL tree , doubly unbalanced on the right.
Post: The AVL properties have been restored to the subtree.
Uses: Methods of struct AVL node ; functions rotate_right ,rotate_left . */
{
	AVL_node * &right_tree = sub_root->right;
	switch (right_tree->get_balance( )) {
	case right_higher: // single rotation left
		sub_root->set_balance(equal_height);
		right_tree->set_balance(equal_height);
		rotate_left(sub_root);
		break;
	case equal_height: // impossible case because taller == true
		cout << "WARNING: program error in right balance" << endl;
	case left_higher: // double rotation left
		AVL_node *sub_tree = right_tree->left;
		switch (sub_tree->get_balance( )) {
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

void AVL_tree :: left_balance(AVL_node * &sub_root)
/* Pre: sub root points to a subtree of an AVL tree , doubly unbalanced on the left.
Post: The AVL properties have been restored to the subtree.
Uses: Methods of struct AVL node ; functions rotate_right ,rotate_left . */
{
	AVL_node * &left_tree = sub_root->left;
	switch (left_tree->get_balance( )) {
	case left_higher: // single rotation left
		sub_root->set_balance(equal_height);
		left_tree->set_balance(equal_height);
		rotate_right(sub_root);
		break;
	case equal_height: // impossible case
		cout << "WARNING: program error in right balance" << endl;
	case right_higher: // double rotation left
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

Error_code AVL_tree :: remove(Entry &new_data)
/* Post: If the key of new data is not in the AVL tree , a code of not_present is returned. Otherwise, a code of success is returned and the Record new data is removed from the tree in such a way that the properties of an AVL tree are preserved.
Uses: avl_remove . */
{
	bool shorter=true; // Has the tree shorter in height?
	return avl_remove(root, new_data, shorter);
}

bool AVL_tree :: right_balance2(AVL_node * &sub_root)
/* Pre: sub root points to a subtree of an AVL tree , doubly unbalanced on the right.
Post: The AVL properties have been restored to the subtree.
Uses: Methods of struct AVL node ; functions rotate_right ,rotate_left . */
{
	bool shorter;
	AVL_node * &right_tree = sub_root->right;
	switch (right_tree->get_balance( )) {
	case right_higher: // single rotation left
		sub_root->set_balance(equal_height);
		right_tree->set_balance(equal_height);
		rotate_left(sub_root);
		shorter = true;
		break;
	case equal_height: // single rotation left  R-型，左转后高度不变
		right_tree->set_balance(left_higher);
		rotate_left(sub_root);
		shorter = false;
		break;
	case left_higher: // double rotation left
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

bool AVL_tree :: left_balance2(AVL_node * &sub_root)
{
	bool shorter;
	AVL_node * &left_tree = sub_root->left;
	switch (left_tree->get_balance( )) {
	case left_higher:
		sub_root->set_balance(equal_height);
		left_tree->set_balance(equal_height);
		rotate_right(sub_root);
		shorter = true;
		break;
	case equal_height: // single rotation left  R-型，左转后高度不变
		left_tree->set_balance(right_higher);
		rotate_right(sub_root);
		shorter = false;
		break;
	case right_higher: // double rotation left
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
		shorter = true;
		break;
	}
	return shorter;
}

Error_code AVL_tree :: avl_remove(AVL_node* &sub_root, Entry &target, bool &shorter)
{
    Error_code result = success;
    Entry sub_data;
    if(sub_root == NULL){
        shorter = false;
        result = not_present;
    }
    else if(target == sub_root->data){
        AVL_node *to_delete = sub_root;
        if(sub_root->right == NULL){
            sub_root = sub_root->left;
            shorter = true;
            delete to_delete;
            return success;
        }
        else if(sub_root->left == NULL){
            sub_root = sub_root->right;
            shorter = true;
            delete to_delete;
            return success;
        }
        else{
            to_delete = sub_root->left;
            AVL_node *parent = sub_root;
            while(to_delete->right != NULL){
                parent = to_delete;
                to_delete = to_delete->right;
            }
            sub_data = to_delete->data;
            target = to_delete->data;
            shorter = false;
        }
    }
    if(target < sub_root->data){
        if(sub_data == target) sub_root->data = target;
        result = avl_remove(sub_root->left, target, shorter);
        if(shorter == true){
            switch(sub_root->get_balance()){
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
    }
    if(target > sub_root->data){
        if(sub_data == target) sub_root->data = target;
        result = avl_remove(sub_root->right, target, shorter);
        if(shorter == true){
            switch(sub_root->get_balance()){
            case right_higher:
                sub_root->set_balance(equal_height);
                break;
            case equal_height:
                sub_root->set_balance(left_higher);
                shorter = false;
                break;
            case left_higher:
                shorter = left_balance2(sub_root);
                break;
            }
        }
    }
    return result;
}

int main()
{
    AVL_tree avl_tree;
    int number;
    while(cin >> number){
        if(number == -1) break;
        avl_tree.insert(number);
    }
    avl_tree.preorder(print);
    cout << endl;
    avl_tree.inorder(print);
    cout << endl;
    avl_tree.postorder(print);
    cout << endl;
    return 0;
}