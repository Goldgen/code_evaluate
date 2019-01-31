#include <iostream>
using namespace std;
enum Error_code{notPresent, overflow, underflow, duplicateError, success};
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

class BinarySearchtree {
public:
	BinarySearchtree( );
	bool empty( ) const;
	void preorder(void (*visit)(Entry &));
	void inorder(void (*visit)(Entry &));
	void postorder(void (*visit)(Entry &));
	int size( ) const;
	int height( ) const;

	//new method
	Error_code tree_search(Entry &target);
	Error_code insert(const Entry &new_data);
    Error_code remove(const Entry &target);


protected:
// Add auxiliary function prototypes here.
	void recursive_preorder(Binary_node *sub_root, void (*visit)(Entry &));
	void recursive_inorder(Binary_node *sub_root, void (*visit)(Entry &));
	void recursive_postorder(Binary_node *sub_root, void (*visit)(Entry &));
	Error_code recursive_search(Binary_node *&sub_root,const Entry &target);
	Error_code recursive_insert(Binary_node *&sub_root,const Entry &new_data);
	Error_code recursive_remove(Binary_node *&sub_root,const Entry &new_data);
	Error_code remove_root(Binary_node *&sub_root);
	Binary_node *root;
	int count;
};

BinarySearchtree::BinarySearchtree(){
    root=NULL;
    count=0;
}
bool BinarySearchtree::empty()const{
    if(count==0)return true;
    return false;
}
void BinarySearchtree::preorder(void (*visit)(Entry &)){
    recursive_preorder(root,visit);
}
void BinarySearchtree::inorder(void (*visit)(Entry &)){
    recursive_inorder(root,visit);
}
void BinarySearchtree::postorder(void (*visit)(Entry &)){
    recursive_postorder(root,visit);
}
int BinarySearchtree::size()const{
    return count;
}
int BinarySearchtree::height()const{
    Binary_node *temp=root;
    int height=-1;
    while(temp){
        temp=temp->left;
        ++height;
    }
    return height;
}

void BinarySearchtree::recursive_preorder(Binary_node *sub_root,void (*visit)(Entry &)){
    if(sub_root!=NULL){
        (*visit)(sub_root->data);
        recursive_preorder(sub_root->left,visit);
        recursive_preorder(sub_root->right,visit);
    }
}
void BinarySearchtree::recursive_inorder(Binary_node *sub_root,void (*visit)(Entry &)){
    if(sub_root!=NULL){
       recursive_inorder(sub_root->left,visit);
        (*visit)(sub_root->data);
        recursive_inorder(sub_root->right,visit);
    }
}
void BinarySearchtree::recursive_postorder(Binary_node *sub_root,void (*visit)(Entry &)){
    if(sub_root!=NULL){
        recursive_postorder(sub_root->left,visit);
        recursive_postorder(sub_root->right,visit);
        (*visit)(sub_root->data);
    }
}

void print(Entry &x){
	cout<<x<<" ";
}
Error_code BinarySearchtree::tree_search(Entry &target){
    return recursive_search(root,target);
}
Error_code BinarySearchtree::recursive_search(Binary_node *&sub_root,const Entry &target){
    if(sub_root==NULL)return notPresent;
    if(sub_root->data==target)return success;
    else if(target<sub_root->data)return recursive_search(sub_root->left,target);
    else return recursive_search(sub_root->right,target);
}

Error_code BinarySearchtree::insert(const Entry &new_data){
    return recursive_insert(root,new_data);
}
Error_code BinarySearchtree::recursive_insert(Binary_node *&sub_root,const Entry &new_data){
    if(sub_root==NULL){
        sub_root=new Binary_node(new_data);
        return success;
    }
    else if(new_data<sub_root->data)return recursive_insert(sub_root->left,new_data);
    else if(new_data>sub_root->data)return recursive_insert(sub_root->right,new_data);
    else return duplicateError;
}
Error_code BinarySearchtree::remove(const Entry &target){
   return recursive_remove(root,target);
}
Error_code BinarySearchtree::recursive_remove(Binary_node *&sub_root,const Entry &new_data){
    if(sub_root==NULL||sub_root->data==new_data)return remove_root(sub_root);
    else if(new_data<sub_root->data)return recursive_remove(sub_root->left,new_data);
    else return recursive_remove(sub_root->right,new_data);
}
Error_code BinarySearchtree::remove_root(Binary_node *&sub_root){
    if(sub_root==NULL)return notPresent;
    Binary_node *to_delete=sub_root;
    if(sub_root->left==NULL)sub_root=sub_root->right;
    else if(sub_root->right==NULL)sub_root=sub_root->left;
    else{
        to_delete=sub_root->left;
        Binary_node *parent=sub_root;
        while(to_delete->right!=NULL){
            to_delete=to_delete->right;
            parent=to_delete;
        }
        sub_root->data=to_delete->data;
        if(parent==sub_root)sub_root->left=to_delete->left;
        else parent->right=to_delete->left;
        delete to_delete;
    }
    return success;
}

int main(){
	BinarySearchtree mytree;
	int data;
	while((cin>>data)&&data!=-1){
        mytree.insert(data);
	}
	mytree.preorder(print);
	cout<<endl;
	mytree.inorder(print);
	cout<<endl;
	mytree.postorder(print);
	cout<<endl;
	cin.get();
	return 0;
}
