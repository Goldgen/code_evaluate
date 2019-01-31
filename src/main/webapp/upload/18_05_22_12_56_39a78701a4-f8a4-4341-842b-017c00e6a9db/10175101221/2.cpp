#include <iostream>
using namespace std;
enum Error_code{success,overflow,underflow,duplicat_error,not_present,fail,rangeError};
template <class Entry>
struct Binary_node {
	Entry data;
	Binary_node<Entry> *left;
Binary_node<Entry> *right;
	Binary_node( );
	Binary_node(const Entry &x);
};
template <class Entry>
Binary_node<Entry> :: Binary_node(){
	left = 0;
	right = 0;
}
template <class Entry>
Binary_node<Entry> :: Binary_node(const Entry &x){
	data = x;
	left = 0;
	right = 0;
}
const int max_list = 30;
template <class List_entry>
class List {
public:
	List( );
	int size( ) const;
	bool full( ) const;
	bool empty( ) const;
	void clear( );
	void traverse(void (*visit)(List_entry &));
	Error_code retrieve(int position, List_entry &x) const;
	Error_code replace(int position, const List_entry &x);
	Error_code remove(int position, List_entry &x);
	Error_code insert(int position, const List_entry &x);
protected:
	int count;
	List_entry entry[max_list];
};
template <class List_entry>
List<List_entry> :: List( )
{
	count = 0;
}
template <class List_entry>
int List<List_entry> :: size( ) const
{
	return count;
}
template <class List_entry>
bool List<List_entry> :: full( ) const
{
	return(count==max_list);
}
template <class List_entry>
bool List<List_entry> :: empty( ) const
{
   return count == 0;
}
template <class List_entry>
void List<List_entry> :: clear( )
{
   count = 0;
}
template <class List_entry>
Error_code List<List_entry> :: insert(int position, const List_entry &x)
{
	if (full( ))return overflow;
	if (position < 0 || position > count)return rangeError;
	for (int i = count - 1; i >= position; i--)	entry[i + 1] = entry[i];
	entry[position] = x;
	count++;
	return success;
}
template <class List_entry>
Error_code List<List_entry> :: remove(int position, List_entry &x)
{
	if (empty( ))return underflow;
	if (position < 0 || position >= count)return rangeError;
	x = entry[position];
	for (int i = position; i < count-1; i++)entry[i] = entry[i+1];
	count--;
	return success;
}
template <class List_entry>
Error_code List<List_entry> :: replace(int position, const List_entry &x)
{
	if (position < 0 || position >= count)return rangeError;
	entry[position] = x;
	return success;
}
template <class List_entry>
Error_code List<List_entry> :: retrieve(int position, List_entry &x) const
{
	if (position < 0 || position >= count)return rangeError;
	x = entry[position];
	return success;
}
template <class List_entry>
void List<List_entry> :: traverse(void (*visit)(List_entry &))
{
	for (int i = 0; i < count; i++)(*visit)(entry[i]);
}
template <class Entry>
class Binary_tree {
public:
	Binary_tree( );
	bool empty( ) const;
	void preorder(void (*visit)(Entry &));
	void inorder(void (*visit)(Entry &));
	void postorder(void (*visit)(Entry &));
	int size( ) const;
	int height( ) const;
	Error_code insert(Entry &);
	Error_code remove(const Entry &target);
	Error_code tree_search(Entry &target) const;
	Error_code build_tree(const List<Entry> &supply);
protected:
	void recursive_preorder(Binary_node<Entry> *sub_root, void (*visit)(Entry &));
	void recursive_inorder(Binary_node<Entry> *sub_root, void (*visit)(Entry &));
	void recursive_postorder(Binary_node<Entry> *sub_root, void (*visit)(Entry &));
	Binary_node<Entry> *root;
	int count;
    Error_code remove_root(Binary_node<Entry> * &sub_root);
    Error_code search_and_destroy( Binary_node<Entry>* &sub_root, const Entry &target);
    Binary_node<Entry> * search_for_node(Binary_node<Entry>*  sub_root, const Entry &target) const;
	void build_insert(int coun, const Entry &new_data, List <Binary_node<Entry>*>&last_node);
	Binary_node<Entry> * find_root(const List<Binary_node<Entry>*>&last_node);
	void connect_trees(const List <Binary_node<Entry>*> &last_node);
	Error_code search_and_insert(Binary_node<Entry> *&sub_root,const Entry &new_data);
};
template <class Entry>
Error_code Binary_tree<Entry>::build_tree(const List<Entry> &supply)
{
    Error_code result=success;
    int coun=0;
    Entry x,last_x;
    List<Binary_node<Entry>*> last_node;
    Binary_node<Entry>*none=NULL;
    last_node.insert(0,none);
    while(supply.retrieve(coun,x)==success)
    {
        if(coun>0&&x<=last_x)
        {
            result=fail;
            break;
        }
        build_insert(++coun,x,last_node);
        last_x=x;
        count++;
    }
    root=find_root(last_node);
    connect_trees(last_node);
    return result;
}
template <class Entry>
void Binary_tree<Entry>::build_insert(int coun, const Entry &new_data,List<Binary_node<Entry>*>&last_node)
{
	int level;
	for (level=1;coun%2==0;level++)
		coun/=2;
	Binary_node<Entry>
		*next_node=new Binary_node<Entry>(new_data),
		*parent;
	last_node.retrieve(level-1,next_node->left);
	if (last_node.size()<=level)
		last_node.insert(level, next_node);
	else
		last_node.replace(level, next_node);
	if (last_node.retrieve(level+1,parent)==success&&parent->right==NULL)
		parent->right=next_node;
}
template <class Entry>
Binary_node<Entry>*Binary_tree<Entry>::find_root(const List<Binary_node<Entry>*>&last_node)
{
	Binary_node<Entry>*high_node;
	last_node.retrieve(last_node.size()-1,high_node);
	return high_node;
}
template <class Entry>
void Binary_tree<Entry>::connect_trees(const List<Binary_node<Entry>*>&last_node)
{
	Binary_node<Entry>*high_node,*low_node;
	int high_level=last_node.size()-1,low_level;
	while(high_level>2)
    {
		last_node.retrieve(high_level,high_node);
		if (high_node->right!=NULL)
			high_level--;
		else
		{
			low_level = high_level;
			do
			{
              last_node.retrieve(--low_level,low_node);
			} while (low_node!=NULL&&low_node->data<high_node->data);
			high_node->right=low_node;
			high_level=low_level;
		}
	}
}
template <class Entry>
Binary_node<Entry>* Binary_tree<Entry>::search_for_node(Binary_node<Entry>* sub_root,const Entry &target) const
{
    if(sub_root==NULL||sub_root->data=target)
        return sub_root;
    if(target>sub_root->data)
        return search_for_node(sub_root->right,target);
    return search_for_node(sub_root->left,target);
}
template <class Entry>
Error_code Binary_tree<Entry>::tree_search(Entry &target) const
{
    Error_code result=success;
    Binary_node<Entry>*found=search_for_node(root,target);
    if(found==NULL)
        return not_present;
    target=found->data;
    return result;
}
template <class Entry>
Error_code Binary_tree<Entry>::remove(const Entry &target)
{
    Error_code result=search_and_destroy(root,target);
    if(result==success) count--;
    return result;
}
template <class Entry>
Error_code Binary_tree<Entry>::search_and_destroy( Binary_node<Entry>* &sub_root, const Entry &target)
{
    if(sub_root==NULL||sub_root->data==target)
        return remove_root(sub_root);
    if(sub_root->data>target)
        return search_and_destroy(sub_root->left,target);
    if(target>sub_root->data)
        return search_and_destroy(sub_root->right,target);
}
template <class Entry>
Error_code Binary_tree<Entry>::remove_root(Binary_node<Entry> * &sub_root)
{
    if(sub_root==NULL)
        return underflow;
    Binary_node<int>*tmp=sub_root;
    if(sub_root->left==NULL) sub_root=sub_root->right;
    else if(sub_root->right==NULL) sub_root=sub_root->left;
    else
    {
        tmp=sub_root->left;
        Binary_node<int>* parent=sub_root;
        while(tmp->right!=NULL)
        {
            parent=tmp;
            tmp=tmp->right;
        }
        sub_root->data=tmp->data;
        if(parent==sub_root)sub_root->left=tmp->left;
        else parent->right=tmp->left;
    }
    delete tmp;
    return success;
}
template <class Entry>
Error_code Binary_tree<Entry>::search_and_insert(Binary_node<Entry> *&sub_root,const Entry &new_data)
{
    if(sub_root==NULL)
    {
        sub_root=new Binary_node<Entry>(new_data);
        return success;
    }
    if(new_data<sub_root->data)
        return search_and_insert(sub_root->left,new_data);
    if(new_data>sub_root->data)
        return search_and_insert(sub_root->right,new_data);
    return duplicat_error;
}
template <class Entry>
Binary_tree<Entry>::Binary_tree( )
{
    root = NULL;
    count = 0;
}

template <class Entry>
bool Binary_tree<Entry>::empty()const
{
	return root == NULL;
}
template <class Entry>
void Binary_tree<Entry> :: preorder(void (*visit)(Entry &))
{
	recursive_preorder(root, visit);
}
template <class Entry>
void Binary_tree<Entry>::recursive_preorder(Binary_node<Entry> *sub_root, void (*visit)(Entry &))
{
	if (sub_root != NULL)
    {
		(*visit)(sub_root->data);
		recursive_preorder(sub_root->left, visit);
		recursive_preorder(sub_root->right, visit);
	}
}
template <class Entry>
void Binary_tree<Entry>::inorder(void (*visit)(Entry &))
{
	recursive_inorder(root, visit);
}
template <class Entry>
void Binary_tree<Entry>::postorder(void (*visit)(Entry &))
{
	recursive_postorder(root, visit);
}
template <class Entry>
int Binary_tree<Entry>::size() const
{
	return count;
}

template <class Entry>
int Binary_tree<Entry>::height() const
{
    int k=0;
	int count=size();
	if(count==0)return 0;
	int tmp=1;
	for(;tmp<=count; k++) tmp*=2;
	return k;
}

template <class Entry>
void Binary_tree<Entry>::recursive_postorder(Binary_node<Entry> *sub_root, void (*visit)(Entry &))
{
	if (sub_root!=NULL)
    {
		recursive_postorder(sub_root->left, visit);
		recursive_postorder(sub_root->right, visit);
		(*visit)(sub_root->data);
	}
}

template <class Entry>
void Binary_tree<Entry>::recursive_inorder(Binary_node<Entry> *sub_root, void (*visit)(Entry &))
{
	if (sub_root!=NULL)
	{
		recursive_inorder(sub_root->left, visit);
		(*visit)(sub_root->data);
		recursive_inorder(sub_root->right, visit);
	}
}

template <class Entry>
Error_code Binary_tree<Entry>::insert(Entry &x)
{
	Error_code result=search_and_insert(root,x);
	if(result==success)count++;
	return result;
}
void print(int &x)
{
    cout<<x<<' ';
}
int main()
{
   	Binary_tree<int> mytree;
	List<int> mylist;
	int i=0;
	int count=0;
	while(i!=-1)
    {
        cin>>i;
        mylist.insert(count,i);
        count++;
    }
	mytree.build_tree(mylist);
	mytree.preorder(print);cout<<endl;
	mytree.inorder(print);cout<<endl;
	mytree.postorder(print);cout<<endl;
}
