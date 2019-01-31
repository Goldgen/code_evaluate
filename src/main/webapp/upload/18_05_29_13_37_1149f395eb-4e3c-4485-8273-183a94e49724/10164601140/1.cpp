typedef int record;
typedef struct node node;
#include <iostream>

using namespace std;

void print(record &data);
struct node
{
    record data;
    char balance;
    node* left;
    node* right;
    node();
    ~node();
    node(const record &x);
    void set_balance(char b);
    char get_balance();
};

class AVL
{
public:
    AVL();
    bool insert(const record &new_data);
    bool remove(const record &new_data);
    bool avl_insert(node* &sub_root, const record &new_data, bool &taller);
    bool avl_remove(node* &sub_root, const record &new_data, bool &shorter);
    bool left_balance2(node* &sub_root);
    bool right_balance2(node* &sub_root);
    void left_balance(node* &sub_root);
    void right_balance(node* &sub_root);
    void rotate_left(node* &sub_root);
    void rotate_right(node* &sub_root);
    void inorder(void (*visit)(record &));
    void preorder(void (*visit)(record &));
    void postorder(void (*visit)(record &));
    void recursive_inorder(node* sub_root, void(*visit)(record &));
    void recursive_preorder(node* sub_root, void(*visit)(record &));
    void recursive_postorder(node* sub_root, void(*visit)(record &));
private:
    node* root;
};

node::node()
{
//  balance = '-';
    left = NULL;
    right =NULL;
};

node::~node()
{

};

node::node(const record &x)
{
    data = x;
    balance = '-';
    left = NULL;
    right =NULL;
};

void node::set_balance(char b)
{
    balance = b;
};

char node::get_balance()
{
    return balance;
};


AVL::AVL()
{
    root = NULL;
};

bool AVL::insert(const record &new_data)
{
    bool taller;
    return avl_insert(root, new_data, taller);
};

bool AVL::remove(const record &new_data)
{
    bool shorter = true;
    return avl_remove(root,new_data,shorter);
}

bool AVL::avl_insert(node* &sub_root, const record &new_data, bool &taller)
{
	bool result;
    if(sub_root == NULL)
    {
        sub_root = new node(new_data);
        sub_root->balance ='-';
        taller = true;
        return true;
    }
    if(new_data == sub_root->data)
    {
        taller = false;
        return false;
    }
    if(new_data < sub_root->data)
    {
        result = avl_insert(sub_root->left,new_data,taller);
        if(taller)
        {
            switch(sub_root->get_balance())
            {
                case '/':left_balance(sub_root);
                taller = false;break;
                case '-':sub_root->set_balance('/');break;
                case '\\':sub_root->set_balance('-');
                taller = false;break;
            }
        }
      //  return result;
    }
    else
    {
        result = avl_insert(sub_root->right,new_data,taller);
    //    cout<<sub_root->data<<endl;
    //    cout<<sub_root->balance<<endl;
        if(taller)
        {
            switch(sub_root->get_balance())
            {
                case '/':sub_root->set_balance('-');
                taller = false;break;
                case '-':sub_root->set_balance('\\');break;
                case '\\':
                //	cout<<sub_root->data<<endl;
					right_balance(sub_root);
                	taller = false;
					break;
            }
        }
    }
    return result;
};
bool AVL::avl_remove(node* &sub_root, const record &new_data, bool &shorter)
{
    bool result = true;
    record sub_record = new_data;
    if(sub_root == NULL)
    {
        shorter = false;
        return false;
    }
    else if(new_data == sub_root->data)
    {
        node* to_delete = sub_root;
        if (sub_root->right == NULL)
        {
            sub_root = sub_root->left;
            shorter = true;
            delete to_delete;
            return true;
        }
        else if (sub_root->left == NULL)
        {
            sub_root = sub_root->right;
            shorter = true;
            delete to_delete;
            return true;
        }
        else
        {
            to_delete = sub_root->left;
            while (to_delete->right != NULL)
            {
                to_delete = to_delete->right;
            }
            sub_root->data = to_delete->data;
            sub_record = to_delete->data;
        }
    }
    if(sub_record <= sub_root->data)
    {
        result = avl_remove(sub_root->left, sub_record, shorter);
        if (shorter)
            switch (sub_root->get_balance( ))
            {
                case '/': sub_root->set_balance('-'); break;
                case '-': sub_root->set_balance('\\');
                shorter = false; break;
                case '\\': shorter = right_balance2(sub_root); break;
            }
    }
    if(sub_record > sub_root->data)
    {
        result = avl_remove(sub_root->right, sub_record, shorter);
        if (shorter)
            switch (sub_root->get_balance( ))
            {
                case '/': shorter = left_balance2(sub_root); break;
                case '-': sub_root->set_balance('/');
                shorter = false; break;
                case '\\': sub_root->set_balance('-'); break;
            }
    }
    return result;
}


bool AVL::right_balance2(node* &sub_root)
{
    bool shorter;
    node* &right_tree = sub_root->right;
    switch (right_tree->get_balance( ))
    {
        case '\\': // single rotation left
        sub_root->set_balance('-');
        right_tree->set_balance('-');
        rotate_left(sub_root);
        shorter = true; break;
        case '-': // single rotation left R-型，左转后高度不变
        right_tree->set_balance('/');
        rotate_left(sub_root);
        shorter = false; break;
        case '/': // double rotation left
        node* sub_tree = right_tree->left;
        switch (sub_tree->get_balance( ))
        {
            case '-':sub_root->set_balance('-');
            right_tree->set_balance('-'); break;
            case '/': sub_root->set_balance('-');
            right_tree->set_balance('\''); break;
            case '\\': sub_root->set_balance('/');
            right_tree->set_balance('-'); break;
        }
        sub_tree->set_balance('-');
        rotate_right(right_tree);
        sub_root->right=right_tree;
        rotate_left(sub_root);
        shorter = true;break;
    }
    return shorter;
}

bool AVL::left_balance2(node* &sub_root)
{
    bool shorter;
    node* &left_tree = sub_root->left;
    switch (left_tree->get_balance( ))
    {
        case '/': // single rotation left
        sub_root->set_balance('-');
        left_tree->set_balance('-');
        rotate_right(sub_root);
        shorter = true; break;
        case '-': // single rotation left R-型，左转后高度不变
        left_tree->set_balance('\\');
        rotate_right(sub_root);
        shorter = false; break;
        case '\\': // double rotation left
        node* sub_tree = left_tree->right;
        switch (sub_tree->get_balance( ))
        {
            case '-':sub_root->set_balance('-');
            left_tree->set_balance('-'); break;
            case '\\': sub_root->set_balance('-');
            left_tree->set_balance('/'); break;
            case '/': sub_root->set_balance('\\');
            left_tree->set_balance('-'); break;
        }
        sub_tree->set_balance('-');
        rotate_left(left_tree);
        sub_root->left=left_tree;
        rotate_right(sub_root);
        shorter = true;break;
    }
    return shorter;
}

void AVL::rotate_left(node* &sub_root)
{
    if(sub_root == NULL ||sub_root->right == NULL)
        cout<<"WARRNING:program error detected in rotate_left"<<endl;
    else
    {
        node* right_tree = sub_root->right;
        sub_root->right = right_tree->left;
        right_tree->left = sub_root;
        sub_root = right_tree;
    }
};

void AVL::rotate_right(node* &sub_root)
{
    if(sub_root == NULL ||sub_root->left == NULL)
        cout<<"WARRNING:program error detected in rotate_right"<<endl;
    else
    {
        node* left_tree = sub_root->left;
        sub_root->left = left_tree->right;
        left_tree->right = sub_root;
        sub_root = left_tree;
    }
};

void AVL::right_balance(node* &sub_root)
{
    node* right_tree = sub_root->right;
    switch(right_tree->get_balance())
    {
        case '\\':sub_root->set_balance('-');
        right_tree->set_balance('-');
        rotate_left(sub_root);break;
        case '-':cout<<"WARNING:program error detected in right_balance"<<endl;
        break;
        case '/':node* sub_tree = right_tree->left;
        switch(sub_tree->get_balance())
        {
            case '-':sub_root->set_balance('-');
            right_tree->set_balance('-');break;
            case '/':sub_root->set_balance('-');
            right_tree->set_balance('\\');break;
            case '\\':sub_root->set_balance('/');
            right_tree->set_balance('-');break;
        }
        sub_tree->set_balance('-');
        rotate_right(right_tree);
    	sub_root->right=right_tree;
        rotate_left(sub_root);
        break;
    }
};


void AVL::left_balance(node* &sub_root)
{
    node* left_tree = sub_root->left;
    switch(left_tree->get_balance())
    {
        case '/':sub_root->set_balance('-');
        left_tree->set_balance('-');
        rotate_right(sub_root);break;
        case '-':cout<<"WARNING:program error detected in left_balance"<<endl;
        break;
        case '\\':node* sub_tree = left_tree->right;
        switch(sub_tree->get_balance())
        {
            case '-':sub_root->set_balance('-');
            left_tree->set_balance('-');break;
            case '\\':sub_root->set_balance('-');
            left_tree->set_balance('/');break;
            case '/':sub_root->set_balance('\\');
            left_tree->set_balance('-');break;
        }
        sub_tree->set_balance('-');
        rotate_left(left_tree);
        sub_root->left=left_tree;
        rotate_right(sub_root);
        break;
    }
};

void AVL::inorder(void (*visit)(record &))
{
    recursive_inorder(root,visit);
    cout << endl;
};

void AVL::preorder(void (*visit)(record &))
{
    recursive_preorder(root,visit);
    cout << endl;
};

void AVL::postorder(void (*visit)(record &))
{
    recursive_postorder(root,visit);
    cout << endl;
};

void AVL::recursive_inorder(node* sub_root, void(*visit)(record &))
{
    if(sub_root != NULL)
    {
        recursive_inorder(sub_root->left,visit);
        (*visit)(sub_root->data);
        recursive_inorder(sub_root->right,visit);
    }
}

void AVL::recursive_preorder(node* sub_root, void(*visit)(record &))
{
    if(sub_root != NULL)
    {
        (*visit)(sub_root->data);
		recursive_preorder(sub_root->left,visit);
        recursive_preorder(sub_root->right,visit);
    }
}

void AVL::recursive_postorder(node* sub_root, void(*visit)(record &))
{
    if(sub_root != NULL)
    {
		recursive_postorder(sub_root->left,visit);
        recursive_postorder(sub_root->right,visit);
        (*visit)(sub_root->data);
    }
}

void print(record &data)
{
    cout<<data<<' ';
}

int main()
{
	AVL tree;
	int tmp;
	cin >> tmp;
	while (tmp!=-1) {
		tree.insert(tmp);
		cin >> tmp;
	}
	tree.preorder(print);
	tree.inorder(print);
	tree.postorder(print);
	return 0;
}