#include <iostream>

using namespace std;

enum Error_code{notPresent, overflow, underflow, duplicate_error, success,range_Error,fail};
typedef int Entry;
const int max_list=1000;
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

typedef  Binary_node* List_entry;

class List {
public:
// methods of theList ADT
	List( );
	int size( ) const;
	Error_code insert(int position, const List_entry &x);
	Error_code replace(int position, const List_entry &x);
    Error_code retrieve(int position, List_entry &x) const;
    void traverse(void (*visit)(List_entry &));
    Error_code initialize(istream& is);
protected:
// data members for a contiguous list implementation
	int count;
	List_entry entry[max_list];
};


List:: List( )
{
	count = 0;
}

int List :: size( ) const
{
	return count;
}

Error_code List :: insert(int position, const List_entry &x)
{

	if (count >= max_list)return overflow;
	if (position < 0 || position > count)
        return range_Error;
	for (int i = count - 1; i >= position; i--)
        entry[i + 1] = entry[i];
	entry[position] = x;
	count++;
	return success;

}
Error_code List :: replace(int position, const List_entry &x)
{

	if (count >= max_list)return overflow;
	if (position < 0 || position > count)
        return range_Error;
	entry[position] = x;
	return success;

}

Error_code List:: retrieve(int position, List_entry &x) const
{
	if (position < 0 || position >= count)return range_Error;
	x = entry[position];
	return success;
}



void List:: traverse(void (*visit)(List_entry &))
{
	for (int i = 0; i < count; i++)
        (*visit)(entry[i]);
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

class Buildable_tree: public BinarySearchtree {
public:
	Error_code build_tree(/*in*/);
       //????????supply?????????
private: // Add auxiliary function prototypes here.
	void build_insert(int count, const Entry &new_data, List &last_node);
       //count????????? new_data?????
      // last_node ????????????????????????
	Binary_node* find_root(List  &last_node);
       //?????????????????????
	void connect_trees(const List  &last_node);
      //??last_node????????????????????????
};



Error_code Buildable_tree :: build_tree()
{
	Error_code ordered_data = success;
	//remove it for our Binary_tree int count
	int count = 0; // number of entries inserted so far
	Entry x, last_x;
	List  last_node;
	// pointers to last nodes on each level
	Binary_node *none = NULL;
	last_node.insert(0, none); // permanently NULL (for children of leaves)


	while (cin>>x) {
        if(x==-1)
        break;
		if (count > 0 && x < last_x) {
			ordered_data = fail;
			break;
		}
		else if(count > 0 && x == last_x)
        {
            continue;
        }
		build_insert(++count, x, last_node);
		last_x = x;
	}
	root = find_root(last_node);
	connect_trees(last_node);
	return ordered_data; // Report any data-ordering problems back to client.
}

void Buildable_tree:: build_insert(int count, const Entry &new_data,
List  &last_node)
{
	int level; // level of new node above the leaves, counting inclusively
	for (level = 1; count%2 == 0; level++)
		count /= 2; // Use count to calculate level of next node .
	Binary_node
		*next_node = new Binary_node(new_data),
		*parent; // one level higher in last node
	last_node.retrieve(level - 1, next_node->left);
	if (last_node.size( ) <= level) //??last_node
		last_node.insert(level, next_node);
	else
		last_node.replace(level, next_node);
	if (last_node.retrieve(level + 1, parent) == success && parent->right == NULL)
		parent->right = next_node; //?????
}

Binary_node* Buildable_tree::find_root(List  &last_node)

/* Pre: The list last node contains pointers to the last node on each occupied level of the binary search tree.
Post: A pointer to the root of the newly created binary search tree is returned.
Uses: Methods of classList */
{
	Binary_node *high_node;
	last_node.retrieve(last_node.size( ) - 1, high_node);
	// Find root in the highest occupied level in last node .
	return high_node;
}


void Buildable_tree:: connect_trees(
const List  &last_node)
{
	Binary_node
		*high_node, // from last node with NULL right child
		*low_node; // candidate for right child of high node
	int high_level = last_node.size( ) - 1, low_level;
	while (high_level > 2) { // Nodes on levels 1 and 2 are already OK.
		last_node.retrieve(high_level, high_node);
		if (high_node->right != NULL)
			high_level--; // Search down for highest dangling node.
		else { // Case: undefined right tree
			low_level = high_level;
			do { // Find the highest entry not in the left subtree.
			            last_node.retrieve(--low_level, low_node);
			} while (low_node != NULL && low_node->data < high_node->data);
			high_node->right = low_node;
			high_level = low_level;
		}
	}
}


int main()
{
    Buildable_tree mytree;

	mytree.build_tree();


	mytree.preorder();

	mytree.inorder();

	mytree.postorder();

    return 0;
}
