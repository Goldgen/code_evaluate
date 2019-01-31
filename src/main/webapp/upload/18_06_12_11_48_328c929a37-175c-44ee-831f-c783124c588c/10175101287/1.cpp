#include <iostream>

using namespace std;
const int MAX_SIZE = 30;
typedef int Vertex;

enum Error_code {underflow,overflow,success};
class Node
{
public:
    Node(Vertex v,Node* n=NULL);
    Vertex item;
    Node* next;
};

Node::Node(Vertex v,Node* n)
{
    item=v;
    next=n;
}

class Queue{
    int count;
    Node *front;
    Node *rear;
public:
    Queue();
    Error_code append(const Vertex item);
    Error_code serve();
    Error_code retrieve(Vertex &item)const;
    bool empty()const;
};

Queue::Queue()
{
    count=0;
    front=NULL;
    rear=NULL;
}

bool Queue::empty()const
{
    return count==0;
}

Error_code Queue::append(const Vertex item)
{
    Node *new_rear=new Node(item);
    if(new_rear==NULL) return overflow;
    if(empty()) {front=rear=new_rear;count++;return success;}
    rear->next=new_rear;
    rear=new_rear;
    count++;
    return success;
}

Error_code Queue::serve()
{
    if(empty()) return underflow;
    Node *old_front=front;
    front=front->next;
    delete old_front;
    count--;
    return success;
}

Error_code Queue::retrieve(Vertex &item)const
{
    if(empty()) return underflow;
    item=front->item;
    return success;
}

class Digraph {
private:
  int count;
  bool adjacency[MAX_SIZE][MAX_SIZE];
  void traverse(Vertex v, bool visited[],void (*visit)(Vertex &));
public:
  Digraph();
  void depth_first(void (*visit)(Vertex &));
  void breadth_first(void (*visit)(Vertex &));
  void readFromKeyboard();
};

Digraph::Digraph()
{
    count=0;
    for(int i=0;i<MAX_SIZE;i++)
        for(int j=0;j<MAX_SIZE;j++)
            adjacency[i][j]=false;
}

void Digraph::readFromKeyboard()
{
    int v,e;
    cin>>v>>e;
    count=v;
    int v1,v2;
    for(int i=0;i<e;i++)
    {
        cin>>v1>>v2;
        adjacency[v1][v2]=adjacency[v2][v1]=true;
    }
}

void Digraph::depth_first(void (*visit)(Vertex &))
{
    bool visited[MAX_SIZE];
    for(Vertex i=0;i<count;i++) visited[i]=false;
    for(Vertex i=0;i<count;i++)
        if(!visited[i]) traverse(i,visited,visit);
    cout<<endl;
}

void Digraph::traverse(Vertex v, bool visited[],void (*visit)(Vertex &))
{
    visited[v]=true;
    (*visit)(v);
    for(Vertex i=0;i<count;i++)
        if(!visited[i]) traverse(i,visited,visit);
}

void Digraph::breadth_first(void (*visit)(Vertex &))
{
    Queue q;
    bool visited[MAX_SIZE];
    for(Vertex v=0;v<count;v++) visited[v]=false;
    for(Vertex v=0;v<count;v++)
        if(!visited[v])
        {
            q.append(v);
            while(!q.empty())
            {
                Vertex w;
                q.retrieve(w);
                if(!visited[w])
                {
                    visited[w]=true;
                    (*visit)(w);
                    for(Vertex x=0;x<count;x++)
                        if(adjacency[w][x]==true&&!visited[x]) q.append(x);
                }
                q.serve();
            }
        }
    cout<<endl;
}

void visit(Vertex &v)
{
    cout<<v<<" ";
}

int main()
{
    Digraph d;
    d.readFromKeyboard();
    d.depth_first(visit);
    d.breadth_first(visit);
    return 0;
}
