#include <iostream>
using namespace std;
enum Error_code {notPresent, overflow, underflow, duplicateError, success};
enum Balance_factor { left_higher, equal_height, right_higher };
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


class AVL_tree
{
public:
    AVL_tree();
    void preorder();
    void inorder();
    void postorder();
    void left_balance(AVL_node* &sub_root);
    void right_balance(AVL_node* &sub_root);
    void rotate_right(AVL_node * &sub_root);
    void rotate_left(AVL_node * &sub_root);
    bool right_balance2(AVL_node * &sub_root);
    bool left_balance2(AVL_node * &sub_root);

    //new method
    Error_code insert(const Entry &new_data);
    Error_code remove(Entry &new_data);
    Error_code tree_search(Entry &target) const;
    Error_code avl_insert(AVL_node *&sub_root,const Entry &new_data,bool &taller);
    Error_code avl_remove(AVL_node *&sub_root, Entry &new_data, bool &shorter);


protected:
// Add auxiliary function prototypes here.
    void recursive_preorder(AVL_node *sub_root);
    void recursive_inorder(AVL_node *sub_root);
    void recursive_postorder(AVL_node *sub_root);
    AVL_node *root;
    int count;
};

AVL_tree::AVL_tree()
{
    root = NULL;
}

void AVL_tree:: rotate_left(AVL_node * &sub_root)
{
    if (sub_root == NULL || sub_root->right == NULL) // impossible cases
        cout << "WARNING: program error detected in rotate left" << endl;
    else
    {
        AVL_node *right_tree = sub_root->right;
        sub_root->right = right_tree->left;
        right_tree->left = sub_root;
        sub_root = right_tree;
    }

}

void AVL_tree:: rotate_right(AVL_node * &sub_root)
{
    if (sub_root == NULL || sub_root->left == NULL) // impossible cases
        cout << "WARNING: program error detected in rotate right" << endl;
    else
    {
        AVL_node *left_tree = sub_root->left;
        sub_root->left = left_tree->right;
        left_tree->right = sub_root;
        sub_root = left_tree;
    }

}


void AVL_tree:: right_balance(AVL_node* &sub_root)
{
    AVL_node * &right_tree = sub_root->right;
    switch (right_tree->get_balance( ))
    {
    case right_higher:
        sub_root->set_balance(equal_height);
        right_tree->set_balance(equal_height);
        rotate_left(sub_root);
        break;
    case equal_height:
        cout << "WARNING: program error in right balance" << endl;
    case left_higher:
        AVL_node *sub_tree = right_tree->left;
        switch (sub_tree->get_balance( ))
        {
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



void AVL_tree::left_balance(AVL_node* &sub_root)
{
    AVL_node* &left_tree = sub_root->left;
    switch (left_tree->get_balance( ))
    {
    case left_higher:
        sub_root->set_balance(equal_height);
        left_tree->set_balance(equal_height);
        rotate_right(sub_root);
        break;
    case equal_height:
        cout << "WARNING: program error in right balance" << endl;
    case right_higher:
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


Error_code AVL_tree:: avl_insert(AVL_node* &sub_root, const Entry &new_data, bool &taller)
{
    Error_code result = success;
    if (sub_root == NULL)
    {
        sub_root = new AVL_node(new_data);
        taller = true;
    }
    else if (new_data == sub_root->data)
    {
        result = duplicateError;
        taller = false;
    }
    else if (new_data < sub_root->data)
    {
        result = 	avl_insert(sub_root->left, new_data, taller);
        if (taller == true)
            switch (sub_root->get_balance( ))
            {
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
    else
    {

        result = avl_insert(sub_root->right, new_data, taller);
        if (taller == true)
            switch (sub_root->get_balance( ))
            {
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
    return result;
}


Error_code AVL_tree::insert(const Entry &new_data)
{
    bool taller;
    return avl_insert(root,new_data,taller);
}

bool AVL_tree:: right_balance2(AVL_node * &sub_root)
{
    bool shorter;
    AVL_node * &right_tree = sub_root->right;
    switch (right_tree->get_balance( ))
    {
    case right_higher:
        sub_root->set_balance(equal_height);
        right_tree->set_balance(equal_height);
        rotate_left(sub_root);
        shorter = true;
        break;
    case equal_height:
        right_tree->set_balance(left_higher);
        rotate_left(sub_root);
        shorter = false;
        break;
    case left_higher:
        AVL_node *sub_tree = right_tree->left;
        switch (sub_tree->get_balance( ))
        {
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

bool AVL_tree :: left_balance2(AVL_node* &sub_root)
{
    bool shorter;
    AVL_node * &left_tree = sub_root->left;
    switch (left_tree->get_balance( ))
    {
    case left_higher:
        sub_root->set_balance(equal_height);
        left_tree->set_balance(equal_height);
        rotate_right(sub_root);
        shorter = true;
        break;
    case equal_height:
        left_tree->set_balance(left_higher);
        rotate_right(sub_root);
        shorter = false;
        break;
    case right_higher:
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
        shorter = true;
        break;
    }
    return shorter;
}


Error_code AVL_tree:: avl_remove(AVL_node* &sub_root, Entry &new_data, bool &shorter)
{
    Error_code result = success;
    Entry sub_record;
    if (sub_root == NULL)
    {
        shorter = false;
        return notPresent;
    }
    else if (new_data == sub_root->data)
    {
        AVL_node *to_delete = sub_root;

        if (sub_root->right == NULL)
        {
            sub_root = sub_root->left;
            shorter = true;
            delete to_delete;
            return success;
        }
        else if (sub_root->left == NULL)
        {
            sub_root = sub_root->right;
            shorter = true;
            delete to_delete;
            return success;
        }
        else
        {
            to_delete = sub_root->left;
            AVL_node *parent = sub_root;
            while (to_delete->right != NULL)
            {

                parent = to_delete;
                to_delete = to_delete->right;
            }
            new_data = to_delete->data;
            sub_record = new_data; 
        } 
    }
    if (new_data < sub_root->data)
    {
        result = avl_remove(sub_root->left, new_data, shorter);
        if(sub_record!=0)sub_root->data = sub_record;
        if (shorter == true)
            switch (sub_root->get_balance( ))
            {
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
    if (new_data > sub_root->data)
    {
        result = avl_remove(sub_root->right, new_data, shorter);
        if(sub_record!=0)sub_root->data = sub_record;
        if (shorter == true)
            switch (sub_root->get_balance( ))
            {
            case left_higher:
                shorter = left_balance2(sub_root);
                break;
            case equal_height:
                sub_root->set_balance(left_higher);
                shorter = false;
                break;
            case right_higher:
                sub_root->set_balance(equal_height);
                break;
            }
    }
    return result;
}



Error_code AVL_tree::remove(Entry &new_data)
{
    bool shorter=true; 
    return avl_remove(root,new_data,shorter);
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

void AVL_tree:: preorder()
{
    if(root!=NULL)
    {
        recursive_preorder(root);
    cout<<endl;
    }

}
void AVL_tree::recursive_inorder(AVL_node*sub_root)
{
    if(sub_root!=NULL)
    {
        recursive_inorder(sub_root->left);
        cout<<sub_root->data<<" ";
        recursive_inorder(sub_root->right);
    }
}

void AVL_tree:: inorder()
{
    if(root!=NULL)
    {
        recursive_inorder(root);
    cout<<endl;
    }

}

void AVL_tree::recursive_postorder(AVL_node*sub_root)
{
    if(sub_root!=NULL)
    {
        recursive_postorder(sub_root->left);
        recursive_postorder(sub_root->right);
        cout<<sub_root->data<<" ";
    }
}

void AVL_tree:: postorder()
{
    if(root!=NULL)
    {
        recursive_postorder(root);
    cout<<endl;
    }

}


int main()
{
    AVL_tree my_tree;
    int a;
    cin>>a;
    while(a!=-1)
    {
         my_tree.insert(a);
         cin>>a;
    }
    my_tree.preorder();
    my_tree.inorder();
    my_tree.postorder();

    return 0;
}

