#include <bits/stdc++.h>
#define OK 1
#define ERROR 1
#define FALSE 0
#define TRUE 1
using namespace std;
const int MAX_SIZE = 30;
typedef int QElemType;

typedef struct QNode
{
    QElemType  data;
    struct QNode *next;
}QNode,*QueuePtr;

typedef struct
{
    QueuePtr front,rear;
}LinkQueue;


int initQueue(LinkQueue *q)
{
    q->front = q->rear = (QueuePtr)malloc(sizeof(QNode));
    if(!q->front)
        return ERROR;
    q->front->next = NULL;

    return OK;
}


int EnQueue(LinkQueue *q,QElemType e)
{
    QueuePtr s = (QueuePtr)malloc(sizeof(QNode));
    if(!s)
        return ERROR;
    s->data = e;
    s->next = NULL;
    q->rear->next = s;
    q->rear = s;

    return OK;
}


int DeQueue(LinkQueue *q,QElemType *e)
{

    QueuePtr p;
    if(q->front==q->rear)
        return ERROR;
    p = q->front->next;
    *e = p->data;
    q->front->next = p->next;

    if(q->rear==p)
        q->rear = q->front;
    free(p);
    return OK;
}

int QueueEmpty(LinkQueue q)
{
    if(q.front == q.rear)
        return 1;
    return 0;
}
class Digraph {
private:
  int count; // number of vertices, at most max size
  bool adjacency[MAX_SIZE][MAX_SIZE];
public:
  Digraph();
  void depth_first() const;
  void DFS(int i) const;
  void breadth_first() const;
  void readFromKeyboard();
  void test(int i,int j);
};
int visited[MAX_SIZE];


int main()
{
    Digraph G;
    G.readFromKeyboard();
    G.depth_first();
    G.breadth_first();
}
Digraph::Digraph()
{
    count = 0;
}
void Digraph::test(int i,int j)
{
    cout << adjacency[i][j];
}
void Digraph::readFromKeyboard()
{
    int n,m,cnt;
    cin >> n >> m;
    count = n;
    for(int a=0;a<n;a ++)
        for(int b=0;b<n;b ++)
        adjacency[a][b] = 0;
    for(cnt = 0;cnt < m;cnt ++){
        int i,j;
        cin >> i >> j;
        adjacency[i][j] = 1;
        adjacency[j][i] = 1;
    }

}
void Digraph::DFS(int i) const
{
    int j;
    visited[i]=1;
    cout << i << " ";
    for(j=0;j<count;j++)
    {
        if(adjacency[i][j]==1&&!visited[j])
        {
            DFS(j);
        }
    }
}
void Digraph::depth_first() const
{
    int i;
    for(i=0;i<count;i++)//将顶点都标记为0 即表示未访问
    {
        visited[i]=0;
    }
    for(i=0;i<count;i++)//用于判断该顶点是否被访问
    {
        if(visited[i]==0)
            DFS(i);//深度优先遍历函数
    }
    cout << endl;
}
void Digraph::breadth_first() const
{
    int i,j;
    LinkQueue Q;
    for(i=0;i<count;i++)
    {
        visited[i] = 0;
    }
    initQueue(&Q);              //初始化一辅助用的队列
    for(i=0;i<count;i++)//对每一个顶点做循环
    {
        if(!visited[i])         //若是未被访问过就处理
        {
            visited[i] = 1;  //设置当前顶点访问过
            cout << i << " ";//打印顶点
            EnQueue(&Q,i);      //将此顶点入队列
            while(!QueueEmpty(Q))//队列不为空
            {
                DeQueue(&Q,&i);  //将队中元素出队列，赋值给i
                for(j=0;j<count;j++)
                {
                    //判断其他顶点若与当前顶点存在边且未被访问过
                    if(adjacency[i][j] ==1 && !visited[j])
                    {
                        visited[j] = 1;//将找到的此顶点标记为已访问
                        cout << j << " ";//打印此顶点
                        EnQueue(&Q,j);//将找到的此顶点入队列
                    }
                }
            }
        }
    }
    cout << endl;
}

