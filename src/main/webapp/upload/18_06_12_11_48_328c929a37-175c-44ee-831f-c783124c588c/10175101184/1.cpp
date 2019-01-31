#include <iostream>

using namespace std;
const int MAX_SIZE = 30;
typedef int Vertex;
enum Error_code {underflow,overflow,success};
const int maxqueue=30;

class Queue{
public:
        Queue();
        bool empty()const;
        Error_code serve();
        Error_code append(const int &item);
        Error_code retrieve(int &item)const;
protected:
        int count;
        int front,rear;
        int entry[maxqueue];
};

Queue::Queue(){//初始化队列
    count=0;
    rear=maxqueue-1;
    front=0;
}

bool Queue::empty()const{//判断是否为空
    return count==0;
}

Error_code Queue::append(const int &item){//插入
    if(count>=maxqueue)
        return overflow;
    count++;
    rear=((rear+1)==maxqueue)?0:(rear+1);
    entry[rear]=item;
    return success;
}

Error_code Queue::serve(){//删除
    if(count<=0)
        return underflow;
    count--;
    front=((front+1)==maxqueue)?0:(front+1);
    return success;
}

Error_code Queue::retrieve(int &item)const//输出
{
    if(count<=0)
        return underflow;
    item=entry[front];
    return success;

}

class Digraph {
private:
  int count; // number of vertices, at most max size
  bool adjacency[MAX_SIZE][MAX_SIZE];
public:
  Digraph();
  void set_adj(int x,int y);
  void r_vertex(int x);
  void depth_first(void (*visit)(Vertex &)) ;
  void breadth_first(void (*visit)(Vertex &));
  void traverse(Vertex &v, bool visited[],void (*visit)(Vertex &));
  //void readFromKeyboard();
};

Digraph::Digraph()
{
    count=0;
    for(int i=0;i<MAX_SIZE;i++){
        for(int j=0;j<MAX_SIZE;j++){
            adjacency[i][j]=false;
        }
    }
}

void Digraph::r_vertex(int x)
{
    count=x;
}

void Digraph::set_adj(int x,int y)
{
    adjacency[x][y]=true;
    adjacency[y][x]=true;
}

void Digraph::traverse(Vertex &v,bool visited[],void (*visit)(Vertex &))
{
    Vertex w;
    visited[v]=true;
    (*visit)(v);
    for(w=0;w<v;w++)
        if(!visited[w])
            traverse(w,visited,visit);
}

void Digraph::depth_first(void(*visit)(Vertex &))
{
    bool visited[MAX_SIZE];//创建一个数组标记节点是否被遍历
    Vertex v;
    for(v=0;v<count;v++)//先全部置位否
        visited[v]=false;
    for(v=0;v<count;v++)
        if(!visited[v])//存在不连通的情况
            traverse(v,visited,visit);
}

void Digraph::breadth_first(void(*visit)(Vertex &))
{
    Queue q;
    bool visited[MAX_SIZE];
    Vertex v,w=0,x=0;
    for(v=0;v<count;v++)visited[v]=false;
    for(v=0;v<count;v++){
        if(!visited[v]){
            q.append(v);
            while(!q.empty()){
                q.retrieve(w);
                if(!visited[w]){
                    visited[w]=true;
                    (*visit)(w);
                    for(x=0;x<count;x++){
                        if(adjacency[w][x]==true)
                            q.append(x);
                    }
                }
                q.serve();
            }
        }
    }

}

void print(Vertex &x)
{
    cout<<x<<" ";
}

int main()
{
    Digraph mygraph;
    int n,m;
    int v1,v2;
    cin>>n>>m;
    mygraph.r_vertex(n);
    for(int i=0;i<m;i++){
        cin>>v1>>v2;
        mygraph.set_adj(v1,v2);
    }
    mygraph.depth_first(print);
    cout<<endl;
    mygraph.breadth_first(print);
    cout<<endl;
}
