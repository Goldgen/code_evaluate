#include <iostream>
using namespace std;

//LIST
enum Error_code{notPresent,duplicateError,fail,underflow, overflow, range_Error, success};
#define max_list 100
template <class List_entry>
class List {
public:
// methods of theList ADT
	List( );
	int size( ) const;
	Error_code insert(int position, const List_entry &x);
    void traverse(void (*visit)(List_entry &));
    Error_code retrieve(int position,List_entry &found);
    Error_code replace(int position,List_entry &new_data);
protected:
// data members for a contiguous list implementation
	int count;
	List_entry entry[max_list];
};


template <class List_entry>
List<List_entry>:: List( )
{
	count = 0;
}
template <class List_entry>
int List<List_entry> :: size( ) const
{
	return count;
}
template <class List_entry>
Error_code List<List_entry> :: insert(int position, const List_entry &x)
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
template <class List_entry>
void List<List_entry>:: traverse(void (*visit)(List_entry &))
{

	for (int i = 0; i < count; i++)
        (*visit)(entry[i]);

}

template <class List_entry>
Error_code List<List_entry>::retrieve(int position,List_entry &found){
    if(position>=count)return range_Error;
    found=entry[position];
    return success;
}
template <class List_entry>
Error_code List<List_entry>::replace(int position,List_entry &new_data){
    if(position>=count)return range_Error;
    entry[position]=new_data;
    return success;
}

//TREE
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

	//new method
	Error_code insert(const Entry &new_data);
    Error_code build_tree(List<Entry> &source);//+
protected:
// Add auxiliary function prototypes here.
	void recursive_preorder(Binary_node *sub_root, void (*visit)(Entry &));
	void recursive_inorder(Binary_node *sub_root, void (*visit)(Entry &));
	void recursive_postorder(Binary_node *sub_root, void (*visit)(Entry &));

	void build_insert(int count,const Entry &data,List<Binary_node*> &last_node);//+
	Binary_node* find_root(List<Binary_node*> &last_node);//+
	void connect_tree(List<Binary_node*> &last_node);//+

	Binary_node *root;
	int count;
};

Buildable_tree::Buildable_tree(){
    root=NULL;
    count=0;
}
bool Buildable_tree::empty()const{
    if(count==0)return true;
    return false;
}
void Buildable_tree::preorder(void (*visit)(Entry &)){
    recursive_preorder(root,visit);
}
void Buildable_tree::inorder(void (*visit)(Entry &)){
    recursive_inorder(root,visit);
}
void Buildable_tree::postorder(void (*visit)(Entry &)){
    recursive_postorder(root,visit);
}
int Buildable_tree::size()const{
    return count;
}
int Buildable_tree::height()const{
    Binary_node *temp=root;
    int height=-1;
    while(temp){
        temp=temp->left;
        ++height;
    }
    return height;
}

void Buildable_tree::recursive_preorder(Binary_node *sub_root,void (*visit)(Entry &)){
    if(sub_root!=NULL){
        (*visit)(sub_root->data);
        recursive_preorder(sub_root->left,visit);
        recursive_preorder(sub_root->right,visit);
    }
}
void Buildable_tree::recursive_inorder(Binary_node *sub_root,void (*visit)(Entry &)){
    if(sub_root!=NULL){
       recursive_inorder(sub_root->left,visit);
        (*visit)(sub_root->data);
        recursive_inorder(sub_root->right,visit);
    }
}
void Buildable_tree::recursive_postorder(Binary_node *sub_root,void (*visit)(Entry &)){
    if(sub_root!=NULL){
        recursive_postorder(sub_root->left,visit);
        recursive_postorder(sub_root->right,visit);
        (*visit)(sub_root->data);
    }
}


Error_code Buildable_tree::build_tree(List<Entry> &source){//+
    Error_code ordered_data=success;
    Entry x,last_x;
    int count=0;
    List<Binary_node*> last_node;//用于存放最右节点的指针队列
    Binary_node *none=NULL;
    last_node.insert(0,none);
    while(source.retrieve(count,x)==success){
        if(count>0&&x<=last_x){
            ordered_data=fail;
            break;
        }
        build_insert(++count,x,last_node);
        last_x=x;
    }
    root=find_root(last_node);
    connect_tree(last_node);
    return ordered_data;
}
void Buildable_tree::build_insert(int count,const Entry &data,List<Binary_node*> &last_node){
    //1.find level(from 1)
    int level=1;
    for(level=1;count%2==0;level++)
        count/=2;
    //2.new node
    Binary_node *next_node=new Binary_node(data);
    //3.find left child of next_node
    last_node.retrieve(level-1,next_node->left);
    //4.find father for next_node if it exist ?
    Binary_node *parent;
    if(last_node.retrieve(level+1,parent)==success&&parent->right==NULL)
        parent->right=next_node;
    //5.renew last_node
    if(last_node.size()<=level)last_node.insert(level,next_node);
    else last_node.replace(level,next_node);
}

Binary_node* Buildable_tree::find_root(List<Binary_node*> &last_node){
    Binary_node* root_node;
    last_node.retrieve(last_node.size()-1,root_node);
    return root_node;
}

void Buildable_tree::connect_tree(List<Binary_node*> &last_node){
    Binary_node *high_node,*low_node;
    int high_level=last_node.size()-1,low_level;
    while(high_level>2){
        last_node.retrieve(high_level,high_node);
        if(high_node->right!=NULL)high_level--;
        else{
            low_level=high_level;
            do{
                last_node.retrieve(--low_level,low_node);
            }while(low_node!=NULL&&low_node->data<high_node->data);
            high_node->right=low_node;
            high_level=low_level;
        }
    }
}

void print(Entry &x){
	cout<<x<<" ";

}


int main(){
    List<Entry> datalist;
	Buildable_tree mytree;
	Entry data;
	int count=0;
	while((cin>>data)&&data!=-1){
        datalist.insert(count,data);
        ++count;
	}
	mytree.build_tree(datalist);
	mytree.preorder(print);
	cout<<endl;
	mytree.inorder(print);
	cout<<endl;
	mytree.postorder(print);
	cout<<endl;
	cin.get();
	return 0;
}
