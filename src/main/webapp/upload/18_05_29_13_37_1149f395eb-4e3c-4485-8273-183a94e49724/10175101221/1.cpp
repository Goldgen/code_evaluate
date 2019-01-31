#include <iostream>
using namespace std;
enum Balance_factor {left_higher, equal_height, right_higher};
enum Error_code{success,overflow,underflow,duplicat_error,not_present};
template <class Entry>
struct Binary_node {
    Balance_factor balance;
	Entry data;
	Binary_node<Entry> *left;
    Binary_node<Entry> *right;
	Binary_node();
	Binary_node(const Entry &x);
	void set_balance(Balance_factor a);
	Balance_factor get_balance() const;
};
template <class Entry>
Binary_node<Entry> :: Binary_node(){
	left = 0;
	right = 0;
	balance=equal_height;
}
template <class Entry>
Binary_node<Entry> :: Binary_node(const Entry &x){
	data = x;
	left = 0;
	right = 0;
	balance=equal_height;
}
template <class Entry>
void Binary_node<Entry>::set_balance(Balance_factor a)
{
    balance=a;
}
template<class Entry>
Balance_factor Binary_node<Entry>::get_balance() const
{
    return balance;
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
protected:
	void recursive_preorder(Binary_node<Entry> *sub_root, void (*visit)(Entry &));
	void recursive_inorder(Binary_node<Entry> *sub_root, void (*visit)(Entry &));
	void recursive_postorder(Binary_node<Entry> *sub_root, void (*visit)(Entry &));
	Binary_node<Entry> *root;
	int count;
    Error_code remove_root(Binary_node<Entry> * &sub_root);
    Error_code search_and_destroy( Binary_node<Entry>* &sub_root, const Entry &target);
    Binary_node<Entry> * search_for_node(Binary_node<Entry>*  sub_root, const Entry &target) const;
	Error_code search_and_insert(Binary_node<Entry> *&sub_root,const Entry &new_data);
	Error_code avl_insert(Binary_node<Entry> * &sub_root, const Entry& new_data,bool &taller);
    void rotate_left(Binary_node<Entry> *&sub_root);
    void rotate_right(Binary_node<Entry> *&sub_root);
    void right_balance(Binary_node<Entry> * &sub_root);
    void left_balance(Binary_node<Entry> * &sub_root);
    Error_code avl_remove(Binary_node<Entry> * &sub_root,Entry &new_data, bool &shorter);
    bool right_balance2(Binary_node<Entry> * &sub_root);
    bool left_balance2(Binary_node<Entry> * &sub_root);
};
template<class Entry>
Error_code Binary_tree<Entry>::avl_insert(Binary_node<Entry> *&sub_root,const Entry& new_data,bool &taller)
{
    Error_code result=success;
    if(sub_root==NULL)
    {
        sub_root=new Binary_node<Entry>(new_data);
        taller=true;
    }
    else if(new_data==sub_root->data)
    {
        result=duplicat_error;
        taller=false;
    }
    else if(new_data<sub_root->data)
    {
        result=avl_insert(sub_root->left,new_data,taller);
        if(taller==true)
            switch(sub_root->get_balance())
        {
        case left_higher:
            left_balance(sub_root);
            taller=false;
            break;
        case equal_height:
            sub_root->set_balance(left_higher);
            break;
        case right_higher:
            sub_root->set_balance(equal_height);
            taller=false;
            break;
        }
    }
    else
    {
        result=avl_insert(sub_root->right,new_data,taller);
        if(taller==true)
            switch(sub_root->get_balance())
        {
        case left_higher:
            sub_root->set_balance(equal_height);
            taller=false;
            break;
        case equal_height:
            sub_root->set_balance(right_higher);
            break;
        case right_higher:
            right_balance(sub_root);
            taller=false;
            break;
        }
    }
    return result;
}
template <class Entry>
void Binary_tree<Entry>::rotate_left(Binary_node<Entry> * &sub_root)
{
    if(sub_root==NULL||sub_root->right==NULL)
        cout<<"ROTATE LEFT ERROR"<<endl;
    else
    {
        Binary_node<Entry> *right_tree=sub_root->right;
        sub_root->right=right_tree->left;
        right_tree->left=sub_root;
        sub_root=right_tree;
    }
}
template <class Entry>
void Binary_tree<Entry>::rotate_right(Binary_node<Entry> * &sub_root)
{
    if(sub_root==NULL||sub_root->left==NULL)
        cout<<"ROTATE RIGHT ERROR"<<endl;
    else
    {
        Binary_node<Entry> *left_tree=sub_root->left;
        sub_root->left=left_tree->right;
        left_tree->right=sub_root;
        sub_root=left_tree;
    }
}
template <class Entry>
void Binary_tree<Entry>::right_balance(Binary_node<Entry> * &sub_root)
{
    Binary_node<Entry> *&right_tree=sub_root->right;
    switch(right_tree->get_balance())
    {
    case right_higher:
        sub_root->set_balance(equal_height);
        right_tree->set_balance(equal_height);
        rotate_left(sub_root);
        break;
    case equal_height:
        cout<<"RIGHT BALANCE ERROR"<<endl;break;
    case left_higher:
        Binary_node<Entry>* left_tree=right_tree->left;
        switch(left_tree->get_balance())
        {
        case left_higher:
            right_tree->set_balance(right_higher);
            sub_root->set_balance(equal_height);
            break;
        case right_higher:
            sub_root->set_balance(left_higher);
            right_tree->set_balance(equal_height);
            break;
        case equal_height:
            sub_root->set_balance(equal_height);
            right_tree->set_balance(equal_height);
            break;
        }
        left_tree->set_balance(equal_height);
        rotate_right(right_tree);
        rotate_left(sub_root);
        break;
    }
}
template <class Entry>
void Binary_tree<Entry>::left_balance(Binary_node<Entry> * &sub_root)
{
    Binary_node<Entry> *&left_tree=sub_root->left;
    switch(left_tree->get_balance())
    {
    case left_higher:
        sub_root->set_balance(equal_height);
        left_tree->set_balance(equal_height);
        rotate_right(sub_root);
        break;
    case equal_height:
        cout<<"LEFT BALANCE ERROR"<<endl;break;
    case right_higher:
        Binary_node<Entry>* right_tree=left_tree->right;
        switch(right_tree->get_balance())
        {
        case right_higher:
            left_tree->set_balance(left_higher);
            sub_root->set_balance(equal_height);
            break;
        case left_higher:
            sub_root->set_balance(right_higher);
            left_tree->set_balance(equal_height);
            break;
        case equal_height:
            sub_root->set_balance(equal_height);
            left_tree->set_balance(equal_height);
            break;
        }
        right_tree->set_balance(equal_height);
        rotate_left(left_tree);
        rotate_right(sub_root);
        break;
    }
}
template <class Entry>
Binary_node<Entry>* Binary_tree<Entry>::search_for_node(Binary_node<Entry>* sub_root,const Entry &target) const
{
    if((sub_root==NULL)||(sub_root->data==target))
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
void Binary_tree<Entry> :: inorder(void (*visit)(Entry &))
{
	recursive_inorder(root, visit);
}
template <class Entry>
void Binary_tree<Entry> :: postorder(void (*visit)(Entry &))
{
	recursive_postorder(root, visit);
}
template <class Entry>
int Binary_tree<Entry> :: size( ) const
{
	return count;
}
template <class Entry>
int Binary_tree<Entry> :: height( ) const
{
    int k=0;
	int count=size();
	if(count==0)return 0;
	int tmp=1;
	for(; tmp<=count; k++) tmp*=2;
	return k;
}
template <class Entry>
void Binary_tree<Entry> :: recursive_postorder(Binary_node<Entry> *sub_root, void (*visit)(Entry &))
{
	if (sub_root != NULL) {
		recursive_postorder(sub_root->left, visit);
		recursive_postorder(sub_root->right, visit);
		(*visit)(sub_root->data);
	}
}
template <class Entry>
void Binary_tree<Entry> :: recursive_inorder(Binary_node<Entry> *sub_root, void (*visit)(Entry &))
{
	if (sub_root != NULL) {
		recursive_inorder(sub_root->left, visit);
		(*visit)(sub_root->data);
		recursive_inorder(sub_root->right, visit);
	}
}
template <class Entry>
Error_code Binary_tree<Entry> :: insert(Entry &x)
{
	bool taller;
	return avl_insert(root,x,taller);
}
void print(int &x)
{
    cout<<x<<' ';
}
int main()
{
    Binary_tree<int> tree;
    int tem=0;
    while(tem!=-1)
    {
        cin>>tem;
        if(tem==-1) break;
        tree.insert(tem);
    }
    tree.preorder(print);
    cout<<endl;
    tree.inorder(print);
    cout<<endl;
    tree.postorder(print);
}
