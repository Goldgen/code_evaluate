#include <iostream>

using namespace std;

enum Error_code{notPresent, overflow, underflow, duplicateError, success};
enum Balance_factor{left_higher, equal_height, right_higher};
typedef int data_entry;

struct AVL_node
{
// additional data member:
	Balance_factor AVL_balance;
    data_entry node_data;
	AVL_node *node_left;
	AVL_node *node_right;
// constructors:
	AVL_node( );
	AVL_node(const data_entry &get_data);
//functions:
	void set_balance(Balance_factor set_bfactor);
	Balance_factor get_balance( ) const;
};

class AVL_tree
{
public:
	AVL_tree( );
	void preorder(void (*visit)(data_entry &));
	void inorder(void (*visit)(data_entry &));
	void postorder(void (*visit)(data_entry &));
	int size( ) const;
	int height( );

	//new method
	Error_code insert(const data_entry &new_data);
    Error_code remove(const data_entry &target);
    Error_code tree_search(data_entry &target) const;

protected:
// Add auxiliary function prototypes here.
	void recursive_preorder(AVL_node *sub_root, void (*visit)(data_entry &));
	void recursive_inorder(AVL_node *sub_root, void (*visit)(data_entry &));
	void recursive_postorder(AVL_node *sub_root, void (*visit)(data_entry &));
	int recursive_height(AVL_node *sub_root, int current_height);

    Error_code AVL_insert(AVL_node* &sub_root,
                          const data_entry &new_data, bool &taller);
	void rotate_left(AVL_node* &sub_root);
	void rotate_right(AVL_node* &sub_root);
	void right_balance(AVL_node* &sub_root);
	void left_balance(AVL_node* &sub_root);
	//add for remove
	Error_code avl_remove(AVL_node* &sub_root, data_entry &new_data, bool &shorter);
	bool right_balance2(AVL_node* &sub_root);
	bool left_balance2(AVL_node* &sub_root);

	AVL_node *root;
	int count;
};

void number_print(data_entry &x)
{
    cout << x << " ";
}

int main()
{
    AVL_tree avl_tree;
    int number;
    while(cin >> number){
        if(number == -1) break;
        avl_tree.insert(number);
    }
    avl_tree.preorder(number_print);
    cout << endl;
    avl_tree.inorder(number_print);
    cout << endl;
    avl_tree.postorder(number_print);
    cout << endl;
    return 0;
}

AVL_node :: AVL_node(){
	node_left = NULL;
	node_right = NULL;
	AVL_balance = equal_height;
}

AVL_node:: AVL_node(const data_entry &set_data){
    node_data = set_data;
	node_left = NULL;
	node_right = NULL;
	AVL_balance = equal_height;
}

void AVL_node::set_balance(Balance_factor set_bfactor)
{
	AVL_balance = set_bfactor;
}

Balance_factor AVL_node:: get_balance( ) const
{
	return AVL_balance;
}

AVL_tree :: AVL_tree()
{
    root = NULL;
    count = 0;
}

int AVL_tree :: size() const
{
    return count;
}

int AVL_tree :: height()
{
    return recursive_height(root, 0);
}

int AVL_tree :: recursive_height(AVL_node *sub_root, int current_height)
{
    if(sub_root == NULL) return current_height;
    current_height++;
    return max(recursive_height(sub_root->node_left, current_height),
               recursive_height(sub_root->node_right, current_height));
}

void AVL_tree :: preorder(void (*visit)(data_entry &))
{
    recursive_preorder(root, visit);
}

void AVL_tree :: recursive_preorder(AVL_node *sub_root, void (*visit)(data_entry &))
{
    if(sub_root == NULL) return;
    (*visit) (sub_root->node_data);
    recursive_preorder(sub_root->node_left, visit);
    recursive_preorder(sub_root->node_right, visit);
}

void AVL_tree :: inorder(void (*visit)(data_entry &))
{
    recursive_inorder(root ,visit);
}

void AVL_tree :: recursive_inorder(AVL_node *sub_root, void (*visit)(data_entry &))
{
    if(sub_root == NULL) return;
    recursive_inorder(sub_root->node_left, visit);
    (*visit) (sub_root->node_data);
    recursive_inorder(sub_root->node_right, visit);
}

void AVL_tree :: postorder(void (*visit)(data_entry &))
{
    recursive_postorder(root ,visit);
}

void AVL_tree :: recursive_postorder(AVL_node *sub_root, void (*visit)(data_entry &))
{
    if(sub_root == NULL) return;
    recursive_postorder(sub_root->node_left, visit);
    recursive_postorder(sub_root->node_right, visit);
    (*visit) (sub_root->node_data);
}

Error_code AVL_tree :: insert(const data_entry &new_data)
{
    bool taller;
    AVL_insert(root, new_data, taller);
}

Error_code AVL_tree :: AVL_insert(AVL_node* &sub_root,
                                  const data_entry &new_data, bool &taller)
{
    Error_code result = success;
    if(sub_root == NULL){
        sub_root = new AVL_node(new_data);
        taller = true;
    }else if(new_data == sub_root->node_data){
        result = duplicateError;
        taller = false;
    }else if(new_data < sub_root->node_data){
        result = AVL_insert(sub_root->node_left, new_data, taller);
        if(taller == true){
            switch(sub_root->get_balance()){
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
    }else if(new_data > sub_root->node_data){
        result = AVL_insert(sub_root->node_right, new_data, taller);
        if(taller == true){
            switch(sub_root->get_balance()){
            case left_higher:
                sub_root->set_balance(equal_height);
                taller = false;
                break;
            case equal_height:
                sub_root->set_balance(right_higher);
                break;
            case right_higher:
                right_balance(sub_root);
                taller = false;
                break;
            }
        }
    }
    return result;
}

void AVL_tree :: rotate_left(AVL_node* &sub_root)
{
    if(sub_root == NULL || sub_root->node_right == NULL)
        cout << "WARNING: program error detected in rotate left" << endl;
    else{
        AVL_node *right_tree = sub_root->node_right;
        sub_root->node_right = right_tree->node_left;
        right_tree->node_left = sub_root;
        sub_root = right_tree;
    }
}

void AVL_tree :: rotate_right(AVL_node* &sub_root)
{
    if(sub_root == NULL || sub_root->node_left == NULL)
        cout << "WARNING: program error detected in rotate left" << endl;
    else{
        AVL_node *left_tree = sub_root->node_left;
        sub_root->node_left = left_tree->node_right;
        left_tree->node_right = sub_root;
        sub_root = left_tree;
    }
}

void AVL_tree :: right_balance(AVL_node* &sub_root)
{
    AVL_node* &right_tree = sub_root->node_right;
    switch(right_tree->get_balance()){
    case right_higher:
        sub_root->set_balance(equal_height);
        right_tree->set_balance(equal_height);
        rotate_left(sub_root);
        break;
    case equal_height:
        cout << "WARNING: program error in right balance" << endl;
        break;
    case left_higher:
        AVL_node *sub_tree = right_tree->node_left;
        switch(sub_tree->get_balance()){
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
        break;
    }
}

void AVL_tree :: left_balance(AVL_node* &sub_root)
{
    AVL_node* &left_tree = sub_root->node_left;
    switch(left_tree->get_balance()){
    case left_higher:
        sub_root->set_balance(equal_height);
        left_tree->set_balance(equal_height);
        rotate_right(sub_root);
        break;
    case equal_height:
        cout << "WARNING: program error in right balance" << endl;
        break;
    case right_higher:
        AVL_node *sub_tree = left_tree->node_right;
        switch(sub_tree->get_balance()){
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
