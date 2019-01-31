#include <iostream>
using namespace std;
enum Error_code{notPresent, overflow, underflow, duplicateError, success,duplicate_error};
enum Balance_factor{ left_higher, equal_height, right_higher };
typedef int Entry;

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
	AVL_tree( )
	{
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
	void recursive_preorder(AVL_node *sub_root);
	void recursive_inorder(AVL_node *sub_root);
	void recursive_postorder(AVL_node *sub_root);
	Error_code avl_insert(AVL_node* &sub_root,const Entry &new_data,bool &taller);//
	void rotate_left(AVL_node * &sub_root);
	void rotate_right(AVL_node * &sub_root);
	void right_balance(AVL_node * &sub_root);
	void left_balance(AVL_node * &sub_root);
	Error_code  avl_remove(AVL_node* &sub_root, Entry &new_data, bool &shorter);
	AVL_node *root;
	int count;
};

Error_code AVL_tree :: insert(const Entry &new_data)

{
	bool taller; // Has the tree grown in height?
	return avl_insert(root, new_data, taller);
        //向root中插入一个新节点new_data.
        //taller表示插入是否使得以root为根的树高度增加。
}

Error_code AVL_tree::avl_insert(AVL_node*&sub_root,const Entry&new_data,bool&taller)
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
		case right_higher:
			sub_root->set_balance(equal_height);
			taller = false;
			break;
		case equal_height:
			sub_root->set_balance(left_higher);
			break;
		case left_higher:
			left_balance(sub_root);
			taller = false; // Rebalancing always shortens the tree.
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
		break;
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
		break;
	}
}
void AVL_tree::recursive_preorder(AVL_node *sub_root)
{
    if(sub_root!=NULL)
    {
        cout<<sub_root->data<<" ";
        recursive_preorder(sub_root->left);
        recursive_preorder(sub_root->right);

    }
}
void AVL_tree::recursive_inorder(AVL_node *sub_root)
{
    if(sub_root!=NULL)
    {

        recursive_inorder(sub_root->left);
        cout<<sub_root->data<<" ";
        recursive_inorder(sub_root->right);

    }
}
void AVL_tree::recursive_postorder(AVL_node *sub_root)
{
    if(sub_root!=NULL)
    {
        recursive_postorder(sub_root->left);
        recursive_postorder(sub_root->right);
         cout<<sub_root->data<<" ";
    }
}
//Error_code AVL_tree::remove(const Entry &new_data)

//{
//	bool shorter=true; // Has the tree shorter in height?
//	return avl_remove(root, new_data, shorter);
//}
//
//Error_code AVL_tree :: avl_remove(AVL_node* &sub_root, Entry &new_data, bool &shorter)
//{
//	Error_code result = success;
//       Entry sub_record;
//	if (sub_root == NULL) {
//		shorter = false;
//		return not_present;
//	}
//		else if (new_data == sub_root->data) {//删除节点，操作与二分查找树相同
//		Binary_node<Record> *to_delete = sub_root;
//		 Remember node to delete at end.
//		if (sub_root->right == NULL){ //右子树为空
//			sub_root = sub_root->left;
//			shorter = true;
//			delete to_delete; // Remove to_delete from tree.
//			return success;
//		}
//		else if (sub_root->left == NULL){ //左子树为空
//			sub_root = sub_root->right;
//			shorter = true;
//			delete to_delete; // Remove to_delete from tree.
//			return success;
//		}
//				else { //左右子树都不为空
//                            Neither subtree is empty.
//			to_delete = sub_root->left;
//                               Move left to find predecessor.
//			Binary_node<Record> *parent = sub_root;
//                             parent of to_delete
//			while (to_delete->right != NULL) {
//                                                     to_delete is not the predecessor.
//				parent = to_delete;
//				to_delete = to_delete->right;
//			}
//sub_root->data = to_delete->data; // Move data from to_delete to root.
//			new_data = to_delete->data;
//			sub_record = new_data; //记录删除的数据值
//		} //else分支，完成删除任务的替换。
//                在删除点x的左右子树都存在时，此时删除的是前驱点w。
//	}
//		if (new_data < sub_root->data) { // remove in left subtree.
//		result = avl_remove(sub_root->left, new_data, shorter);
//		if(sub_record.the_key()!=0)sub_root->data = sub_record;
//                             Move data from to_delete to root.
//		if (shorter == true)
//		switch (sub_root->get_balance( )) { // Change balance factors.
//		case left_higher:
//			sub_root->set_balance(equal_height);
//			break;
//		case equal_height:
//			sub_root->set_balance(right_higher);
//			shorter = false;
//			break;
//		case right_higher:
//			shorter = right_balance2(sub_root);
//			break;
//		}
//	}
//		if (new_data > sub_root->data) { // remove in right subtree.
//		result = avl_remove(sub_root->right, new_data, shorter);
//		if(sub_record.the_key()!=0)sub_root->data = sub_record;
//                                  Move data from to_delete to root.
//		if (shorter == true)
//		switch (sub_root->get_balance( )) { // Change balance factors.
//		case left_higher:
//			shorter = left_balance2(sub_root);
//			break;
//		case equal_height:
//			sub_root->set_balance(left_higher);
//			shorter = false;
//			break;
//		case right_higher:
//			sub_root->set_balance(equal_height);
//			break;
//		}
//	}
//	return result;
//}






int main()
{
    AVL_tree mytree;
    int input=0;
    while(cin>>input)
    {
        if(input==-1)
            break;
        else
            mytree.insert(input);
    }


		mytree.preorder();
		mytree.inorder();
		mytree.postorder();



    return 0;
}
