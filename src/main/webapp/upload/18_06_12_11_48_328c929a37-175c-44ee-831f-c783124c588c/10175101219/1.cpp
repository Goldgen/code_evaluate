#include <iostream>

using namespace std;
const int MAX_SIZE = 30;
typedef int Vertex;
class Digraph {
private:
  int count; // number of vertices, at most max size
  bool adjacency[MAX_SIZE][MAX_SIZE];
public:
  Digraph();
  void depth_first(void (*visit)(Vertex &)) const;
  void breadth_first();
  void readFromKeyboard();
  void traverse(Vertex &v,bool visited[],void (*visit)(Vertex &)) const;
};
Digraph::Digraph()
{
    int i,j;
    for(i=0;i<MAX_SIZE;i++)
    {
        for(j=0;j<MAX_SIZE;j++) adjacency[i][j]=false;
    }
}
void Digraph::readFromKeyboard()
{
    int n,m;
    cin>>n>>m;
    count=n;
    int i,j,k;
    for(i=0;i<m;i++)
    {
        cin>>j>>k;
        adjacency[j][k]=true;
        adjacency[k][j]=true;
    }

}
void print(Vertex &v)
{
    cout<< v<<" ";
}
void Digraph :: depth_first(void (*visit)(Vertex &)) const
{
	bool visited[MAX_SIZE];
	Vertex v;
	for(v=0;v<count;v++) visited[v]=false;
	for(v=0;v<count;v++)
    {
        if(!visited[v]) traverse(v,visited,print);
    }
}
void Digraph :: traverse(Vertex &v, bool visited[],void (*visit)(Vertex &)) const
{
	Vertex w;
	visited[v] = true;
	(*visit)(v);
	for(w=0;w<count;w++)
    {
        if(adjacency[v][w]==true)
        {
            if(!visited[w]) traverse(w,visited,print);
        }
    }
}
enum Error_code{success,underflow,overflow};
typedef int Queue_entry;
const int maxqueue=30;

class Queue
{
public:
    Queue();
    bool Empty() const;
    Error_code serve();
    Error_code append(const Queue_entry&item);
    Error_code retrieve(Queue_entry &item) ;
protected:
    int count;
    int front,rear;
    Queue_entry entry[maxqueue];
};
Queue::Queue()
{
    count=0;
    front=0;
    rear=maxqueue-1;
}
bool Queue::Empty() const
{
    if(count==0) return true;
    else return false;
}
Error_code Queue::serve()
{
    Error_code outcome=success;
    if(count==0) outcome=underflow;
    else {--count;
    front++;
    if(front==maxqueue) outcome=overflow;
    else outcome=success;
    }
    return outcome;
}
Error_code Queue::append(const Queue_entry &item)
{
    Error_code outcome=success;
    if(count>=maxqueue) outcome=overflow;
    else {entry[count++]=item;rear++;
    if(rear==maxqueue) outcome=overflow;
    else outcome=success;
    }
    return outcome;
}
Error_code Queue::retrieve(Queue_entry &item)
{
    Error_code outcome=success;
    if(count==0) outcome=overflow;
    else
    {
        item=entry[0];
        int i;
        for(i=0;i<count-1;i++) entry[i]=entry[i+1];
        count--;
    }
    return outcome;
}

void Digraph :: breadth_first()
{
	Queue q;
	bool visited[MAX_SIZE];
	Vertex v, w, x;
	for(v=0;v<count;v++) visited[v]=false;
	for(v=0;v<count;v++)
    {
        if(!visited[v])
        {
            q.append(v);
            while(!q.Empty())
            {
                q.retrieve(w);
                if(!visited[w])
                {
                    visited[w]=true;
                    print(w);
                    for(x=0;x<count;x++)
                    {
                        if(adjacency[w][x]==true) q.append(x);
                    }
                }
            }
        }
    }
}


int main()
{
    Digraph mygraph;
    mygraph.readFromKeyboard();
    mygraph.depth_first(0);
    cout<<endl;
    mygraph.breadth_first();
}
