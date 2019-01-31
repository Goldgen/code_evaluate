#include <iostream>

using namespace std;
const int max_size = 30;
typedef int Vertex;

#define maxqueue 100

typedef int Queue_entry;
enum Error_code{success, underflow, overflow};

class MyQueue
{
public:
    MyQueue();
    bool empty() const;
    Error_code append(const Queue_entry &x);
    Error_code serve();
    Error_code retrieve(Queue_entry &x) const;
    bool full() const;
    int size() const;
    void clear();
    Error_code serve_and_retrieve(Queue_entry &x);
protected:
    int count;
    int front,rear;
    Queue_entry entry[maxqueue];
};

MyQueue::MyQueue()
{
    count=0;
    rear=-1;
    front=0;
}

bool MyQueue::empty() const
{
    return count==0;
}

Error_code MyQueue::append(const Queue_entry &x)
{
    if(rear>=maxqueue-1) return overflow;

    count++;
    rear=rear+1;
    entry[rear]=x;
    return success;
}

Error_code MyQueue::serve()
{
    if (count<=0) return underflow;
    count--;
    front=front+1;
    return success;
}

Error_code MyQueue::retrieve(Queue_entry &x) const
{
    if(count<=0) return underflow;
    x=entry[front];
    return success;
}

bool MyQueue::full() const
{
    return rear>=maxqueue-1;
}

int MyQueue::size() const
{
    return count;
}

void MyQueue::clear()
{
    count=0;
    front=0;
    rear=-1;
}

Error_code MyQueue::serve_and_retrieve(Queue_entry &x)
{
    if(count<=0) return underflow;
    x=entry[front];
    front++;
    count--;
    return success;
}

class Digraph {
private:
  int count; // number of vertices, at most max size
  bool adjacency[max_size][max_size];
public:
  Digraph();
  void depth_first(void (*visit)(Vertex &)) const;
  void breadth_first(void (*visit)(Vertex &)) const;
  void traverse(Vertex &v, bool visited[],void (*visit)(Vertex &)) const;
  void readFromKeyboard();
};

Digraph::Digraph()
{
    count=0;
    int i,j;
    for(i=0;i<max_size;i++)
    {
        for(j=0;j<max_size;j++)
        adjacency[i][j]=false;
    }
}

void Digraph::depth_first(void (*visit)(Vertex &)) const
{
    bool visited[count];
	Vertex v;
	for (v=0;v<count;v++)  visited[v] = false;
	for (v=0;v<count;v++)  if (!visited[v]) traverse(v, visited, visit);
}

void Digraph::traverse(Vertex &v, bool visited[],void (*visit)(Vertex &)) const
{
    Vertex w;
	visited[v] = true;
	(*visit)(v);
	for (w=0;w<count;w++)
    {
        if (adjacency[w][v]==true&&!visited[w])
        traverse(w, visited, visit);
    }
    for (w=0;w<count;w++)
    {
        if (adjacency[v][w]==true&&!visited[w])
        traverse(w, visited, visit);
    }
}

void Digraph::breadth_first(void (*visit)(Vertex &)) const
{
    MyQueue q;
	bool visited[max_size];
	Vertex v, w, x;
	for (v=0;v<count;v++) visited[v] = false;
	for (v=0;v<count;v++)
		if (!visited[v]) {
			q.append(v);
			while (!q.empty( )){
				q.retrieve(w);
				if (!visited[w]) {
					visited[w] = true;
					(*visit)(w);
					for (x=0;x<count;x++)
					{
					    if (adjacency[x][w]==true) q.append(x);
					}
					for (x=0;x<count;x++)
					{
					    if (adjacency[w][x]==true) q.append(x);
					}
				}
				q.serve( );
			}
		}
}

void Digraph::readFromKeyboard()
{
    int i,j,vertex,edge;
    cin>>vertex>>edge;
    count=vertex;
    for(;edge>0;edge--)
    {
        cin>>i>>j;
        adjacency[i][j]=true;
        adjacency[j][i]=true;
    }
}

void visit(Vertex &x)
{
    cout<<x<<" ";
}

int main()
{
    Digraph mygraph;
    mygraph.readFromKeyboard();
    mygraph.depth_first(visit);
    cout<<endl;
    mygraph.breadth_first(visit);
    return 0;
}
