#include <iostream>
#include <math.h>

using namespace std;

//List

enum Error_code{notPresent, overflow, underflow, duplicateError, range_errors, success,fail};

const int max_list = 10000;

template <class List_entry>
class List{
public:
    List();
    ~List();
    int size() const;
    bool full() const;
    bool empty() const;
    void clear();
    void traverse(void (*visit)(List_entry &));
    Error_code retrieve(int position,List_entry &x)const;
    Error_code replace(int position,const List_entry &x);
    Error_code remove(int position,List_entry &x);
    Error_code insert(int position,const List_entry &x);
protected:
    int count;
    List_entry entry[max_list];
};

template <class List_entry>
List<List_entry>::List()
{
    count=0;
}

template<class List_entry>
List<List_entry>::~List()
{
    count=0;
}

template <class List_entry>
int List<List_entry>::size() const
{
    return count;
}

template <class List_entry>
bool List<List_entry>::full() const
{
    if(count>=max_list)return true;
    return false;
}

template <class List_entry>
bool List<List_entry>::empty() const
{
    if(count==0)return true;
    return false;
}

template <class List_entry>
void List<List_entry>::clear()
{
    count=0;
}

template <class List_entry>
void List<List_entry>::traverse(void (*visit)(List_entry &))
{
    for(int i=0;i < count;i++)
        visit(entry[i]);
}

template <class List_entry>
Error_code List<List_entry>::retrieve(int position,List_entry &x) const
{
    if(position>=count||position<0) return range_errors;
    x=entry[position];
    return success;
}

template <class List_entry>
Error_code List<List_entry>::replace(int position,const List_entry &x)
{
    if(position>=count||position<0) return range_errors;
    entry[position]=x;
    return success;
}

template <class List_entry>
Error_code List<List_entry>::remove(int position,List_entry &x)
{
    if(position>=count||position<0) return range_errors;
    if(count==0) return underflow;
    x=entry[position];
    for(int i=position;i<count-1;i++)
    {
        entry[i]=entry[i+1];
    }
    count--;
    return success;
}

template <class List_entry>
Error_code List<List_entry>::insert(int position,const List_entry &x)
{
    if(position>count||position<0) return range_errors;
    if(full()) return overflow;
    for(int i=count-1;i>=position;i--)
    {
        entry[i+1]=entry[i];
    }
    entry[position]=x;
    count++;
    return success;
}


//Buildable_tree


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


Binary_node:: Binary_node(){
	left = NULL;
	right = NULL;
}

Binary_node:: Binary_node(const Entry &x){
     data = x;
	left = NULL;
	right = NULL;
}


class Buildable_tree {
public:
	Buildable_tree( );
	bool empty( ) const;
	void preorder(void (*visit)(Entry &));
	void inorder(void (*visit)(Entry &));
	void postorder(void (*visit)(Entry &));
	int size( ) const;
	int height( ) const;
	//Buildable_tree ????
	Error_code build_tree(const List<Entry> &supply);

	//new method
	void build_insert(int count,const Entry &new_data,List <Binary_node*> &last_node);
    Binary_node*  find_root(List <Binary_node*> &last_node);
    void connect_trees(const List<Binary_node*> &last_node) ;

protected:
// Add auxiliary function prototypes here.
	void recursive_preorder(Binary_node *sub_root, void (*visit)(Entry &));
	void recursive_inorder(Binary_node *sub_root, void (*visit)(Entry &));
	void recursive_postorder(Binary_node *sub_root, void (*visit)(Entry &));

	Binary_node *root;
	int count;
};


Buildable_tree::Buildable_tree( )
{
    root=NULL;
    count=0;
}

void Buildable_tree::preorder(void (*visit)(Entry &))
{
    recursive_preorder(root,visit);
}

void Buildable_tree::inorder(void (*visit)(Entry &))
{
    recursive_inorder(root,visit);
}

void Buildable_tree::postorder(void (*visit)(Entry &))
{
    recursive_postorder(root,visit);
}

void Buildable_tree::recursive_preorder(Binary_node *sub_root, void (*visit)(Entry &))
{
    if(sub_root!=NULL)
    {
        (*visit)(sub_root->data);
        recursive_preorder(sub_root->left,visit);
        recursive_preorder(sub_root->right,visit);
    }
}

void Buildable_tree::recursive_inorder(Binary_node *sub_root, void (*visit)(Entry &))
{
    if(sub_root!=NULL)
    {
        recursive_inorder(sub_root->left,visit);
        (*visit)(sub_root->data);
        recursive_inorder(sub_root->right,visit);
    }
}

void Buildable_tree::recursive_postorder(Binary_node *sub_root, void (*visit)(Entry &))
{
    if(sub_root!=NULL)
    {
        recursive_postorder(sub_root->left,visit);
        recursive_postorder(sub_root->right,visit);
        (*visit)(sub_root->data);
    }
}


Error_code Buildable_tree::build_tree(const List<Entry> &supply)
{
    Error_code ordered_data = success;
    int count=0;
    Entry x,last_x;
    List<Binary_node*> last_node;
    Binary_node *none=NULL;
    last_node.insert(0,none);
    while(supply.retrieve(count,x)==success)
    {
        if(count>0&&x<=last_x)
        {
            ordered_data = fail;
            break;
        }
        build_insert(++count,x,last_node);
        last_x=x;
    }
    root = find_root(last_node);
    connect_trees(last_node);
    return ordered_data;
}


void Buildable_tree::build_insert(int count,const Entry &new_data,List <Binary_node*> &last_node)
{
    int level;
    for(level=1;count%2==0;level++)
        count/=2;
    Binary_node *next_node = new Binary_node(new_data);
    Binary_node *parent;
    last_node.retrieve(level-1,next_node->left);

    if(last_node.size()<=level)
        last_node.insert(level,next_node);
    else
        last_node.replace(level,next_node);
    if(last_node.retrieve(level+1,parent)==success&&parent->right == NULL)
        parent->right = next_node;

}


Binary_node * Buildable_tree::find_root(List <Binary_node*> &last_node)
{
    Binary_node *high_node;
    last_node.retrieve(last_node.size()-1,high_node);
    return high_node;
}


void Buildable_tree::connect_trees(const List<Binary_node*> &last_node)
{
    Binary_node *high_node,*low_node;
    int high_level=last_node.size()-1,low_level;
    while(high_level>2)
    {
        last_node.retrieve(high_level,high_node);
        if(high_node->right!=NULL)
            high_level--;
        else
        {
            low_level=high_level;
            do
            {
                last_node.retrieve(--low_level,low_node);
            }while(low_node!=NULL&&low_node->data<high_node->data);
            high_node->right=low_node;
            high_level=low_level;
        }
    }
}




bool Buildable_tree::empty() const
{
    if(count==0)return true;
    return false;
}

int Buildable_tree::size() const
{
    return count;
}

int Buildable_tree::height() const
{
    if(count==0) return -1;
    return ceil(log10(count) / log10(2));
}

void print(Entry &x)
{
    cout<<x<<" ";
}


int main()
{
    Buildable_tree tree;
    List<int> sup;
    int i=0,sign=0,k=0;
    int temp=0;
    cin>>temp;
    while(temp!=-1)
    {
        sign=0;
        for(int j=0;j<sup.size();j++)
        {
            sup.retrieve(j,k);
            if(temp==k)
                sign=1;
        }
        if(sign==0)
        {
            sup.insert(i,temp);
            i++;
        }
        cin>>temp;
    }
    tree.build_tree(sup);
    tree.preorder(print);
    cout<<endl;
    tree.inorder(print);
    cout<<endl;
    tree.postorder(print);
    cout<<endl;
    return 0;
}
