#include<bits/stdc++.h>
using namespace std;
typedef int entry_type;
struct AvlTree
{
	entry_type item;
	AvlTree * left;
	AvlTree * right;
	int Height;
};
static int Height(AvlTree * p)
{
	if (p == NULL)
		return -1;//空树高度定义为-1
	else
		return p->Height;
}
void inorderprint(AvlTree * T)
{
	if (T != NULL)
	{
		inorderprint(T->left);
		cout << T->item << " ";
		inorderprint(T->right);
	}
}
void preorderprint(AvlTree *T)
{
    if(T!=NULL)
    {
        cout<<T->item<<" ";
        preorderprint(T->left);
        preorderprint(T->right);
    }
}
void postorderprint(AvlTree *T)
{
    if(T!=NULL)
    {
        postorderprint(T->left);
        postorderprint(T->right);
        cout<<T->item<<" ";
    }
}
void levelprint(AvlTree * T)
{
	queue<AvlTree *> q;
	if(T!=NULL)q.push(T);
	while (!q.empty())
	{
		cout << (q.front())->item<<" ";
		if (q.front()->left)
			q.push(q.front()->left);
		if (q.front()->right)
			q.push(q.front()->right);
		q.pop();
	}
}
void MakeEmpty(AvlTree *& T)
{
	if (T != NULL)
	{
		MakeEmpty(T->left);
		MakeEmpty(T->right);
		delete T;
	}
}
AvlTree * Find(const entry_type &x, AvlTree * T)
{
	if (T == NULL) return NULL;
	if (x < T->item)
		return Find(x, T->left);
	else if (x > T->item)
		return Find(x, T->right);
	else
		return T;
}
AvlTree * FindMin(AvlTree * T)
{
	if (T == NULL) return NULL;
	else if (T->left == NULL)
		return T;
	else
		return FindMin(T->left);
}
AvlTree * FindMax(AvlTree * T)
{
	if (T != NULL)
		while (T->right != NULL)
			T = T->right;
	return T;
}
static AvlTree * SingleRotateLeft(AvlTree * k2)//将k2的左儿子的左子树上移一层，k2的右儿子下移一层，使树平衡
{
	AvlTree * k1;
	k1 = k2->left;
	k2->left = k1->right;
	k1->right = k2;
	k2->Height = max(Height(k2->left), Height(k2->right)) + 1;
	k1->Height = max(Height(k1->left), k2->Height) + 1;
	return k1;
}
static AvlTree * SingleRotateRight(AvlTree * k2)
{
	AvlTree * k1;
	k1 = k2->right;
	k2->right = k1->left;
	k1->left = k2;
	k2->Height = max(Height(k2->left), Height(k2->right)) + 1;
	k1->Height = max(Height(k1->right), k2->Height) + 1;
	return k1;
}
static AvlTree * DoubleRotateLeft(AvlTree * k3)
{
	k3->left = SingleRotateRight(k3->left);
	return SingleRotateLeft(k3);
}
static AvlTree * DoubleRotateRight(AvlTree * k3)
{
	k3->right = SingleRotateLeft(k3->right);
	return SingleRotateRight(k3);
}
AvlTree * Insert(const entry_type &x, AvlTree * T)
{
	if (T == NULL)//插入x
	{
		T = new AvlTree;
		T->item = x; T->Height = 0;
		T->left = T->right = NULL;
	}
	else
		if (x < T->item)
		{
			T->left = Insert(x, T->left);//进入插入递归
			if (Height(T->left) - Height(T->right) == 2)//回溯检查路径节点左右子树高度差
				if (x < T->left->item)//左儿子的左子树进行了插入
					T = SingleRotateLeft(T);
				else//左儿子的右子树进行了插入
					T = DoubleRotateLeft(T);
		}
		else if (x > T->item)
		{
			T->right = Insert(x, T->right);
			if (Height(T->right) - Height(T->left) == 2)
				if (x > T->right->item)
					T = SingleRotateRight(T);
				else
					T = DoubleRotateRight(T);
		}
	T->Height = max(Height(T->left), Height(T->right)) +1;//更改插入后所有路径节点的高度
	return T;
}
AvlTree * Delete(const entry_type &x, AvlTree * T)
{
	if (T == NULL)//树中无x
		cout << "Not found" << endl;
	else
	{
		if (x < T->item)
		{
			T->left = Delete(x, T->left);//进入删除递归（左边进行了删除，使右儿子比左儿子高）
			if (Height(T->right) - Height(T->left) == 2)//回溯检查路径节点左右子树高度差
				if (Height(T->right->left)<Height(T->right->right))//根据右儿子的右子树的左右儿子高度判断旋转类型
					T = SingleRotateRight(T);
				else
					T = DoubleRotateRight(T);
		}
		else if (x > T->item)
		{
			T->right = Delete(x, T->right);
			if (Height(T->left) - Height(T->right) == 2)
				if (Height(T->left->right)<Height(T->left->left))
					T = SingleRotateLeft(T);
				else
					T = DoubleRotateLeft(T);
		}
		else//找到删除对象
		{
			if (T->left&&T->right)//有两个儿子
			{
				AvlTree * tmp = FindMin(T->right);
				T->item = tmp->item;
				T->right = Delete(tmp->item, T->right);
			}
			else//0个或1个儿子
			{
				AvlTree * tmp = T;
				if (T->left == NULL)//同时处理0个儿子
					T = T->right;
				else if (T->right == NULL)
					T = T->left;
				delete tmp;
			}
		}
	}
	if(T!=NULL)T->Height = max(Height(T->left), Height(T->right)) + 1;//更新删除后所有路径节点的高度
	return T;
}
int main()
{
	int n;
	AvlTree * root = NULL;
	while (cin >> n && n!=-1)
		root = Insert(n, root);
		preorderprint(root);
		cout << endl;
		inorderprint(root);
		cout<<endl;
		postorderprint(root);
		cout<<endl;
}
