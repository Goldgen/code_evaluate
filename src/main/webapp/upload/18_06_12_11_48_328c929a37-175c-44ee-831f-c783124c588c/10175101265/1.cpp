#include <iostream>
#include <queue>
#include<string>
#include<string.h>
#define maxqueue 100
using namespace std;

enum Error_code
{
	success = 1,overflow = 0,underflow = -1
};
typedef int Queue_entry;

class Queue
{
	public:
		Queue();
		bool empty()const;
		Error_code append( const Queue_entry &item );
		Error_code serve();
		Error_code retrieve(Queue_entry &item)const;
		int count;
		int front, rear;
		Queue_entry entry[maxqueue];

};

Queue::Queue()
{
	count = 0;
	rear = maxqueue - 1;
	front = 0;
}

bool Queue::empty() const
{
	return count == 0 ? 1 : 0;
}

Error_code Queue::append( const Queue_entry &item )
{
	if( count >= maxqueue )
	{
		return overflow;
	}
	count ++;
	rear = ((rear+1) == maxqueue) ? 0 : (rear+1);
	entry[rear] = item;
	return success;
}

Error_code Queue::serve()
{
	if( count <= 0 )
	{
		return underflow;
	}
	count --;
	front = ((front+1) == maxqueue) ? 0: (front+1);
	return success;
}

Error_code Queue::retrieve(Queue_entry &item) const
{
	if( count <=0 )
	{
		return underflow;
	}
	item = entry[front];
	return success;
}

const int MAX_SIZE = 30;
typedef int Vertex;

class Digraph

{
private:
  int count; // number of vertices, at most max size
  bool adjacency[MAX_SIZE][MAX_SIZE];

public:
  Digraph();
  void depth_first(void (*visit)(Vertex &)) const;
  void breadth_first(void (*visit)(Vertex &)) const;
  void traverse( Vertex &v, bool visited[],void(*visit)(Vertex &)) const;
  void readFromKeyboard();

};

Digraph::Digraph()
{
    count = 0;
    for( int i = 0; i < MAX_SIZE; i ++ )
    {
        for( int j = 0; j < MAX_SIZE; j ++ )
        {
            adjacency[i][j] = false;
        }
    }
}


void Digraph::depth_first( void(*visit)(Vertex &)) const
{

    bool visited[MAX_SIZE];
    Vertex v;
    for( v = 0; v < MAX_SIZE; v ++ )
    {
        visited[v] = false;
    }
    for( v = 0; v < count; v ++ )
    {
        if( !visited[v] )
        {
            traverse(v,visited,visit);
        }
    }
}

void Digraph::traverse( Vertex &v, bool visited[],void(*visit)(Vertex &)) const
{

    Vertex w;
    visited[v] = true;
    (*visit)(v);
    for( w = 0; w < count; w ++ )
    {
        if( !visited[w] && adjacency[v][w] == true )
        {
            traverse(w,visited,visit);
        }
    }
}

void Digraph::breadth_first( void (*visit)(Vertex &)) const
{
    Queue q;
    bool visited[MAX_SIZE];
    Vertex v,w,x;
    for( v = 0; v < MAX_SIZE; v ++ )
    {
        visited[v] = false;
    }
    for( v = 0; v < count; v ++ )
    {
        if( !visited[v] )
        {
            q.append(v);
            while( !q.empty() )
            {
                q.retrieve(w);
                if( !visited[w] )
                {
                    visited[w] = true;
                    (*visit)(w);
                    for( x = 0; x < count; x ++ )
                    {
                        if( adjacency[w][x] == true )
                        {
                            q.append(x);
                        }
                    }
                }
                q.serve();
            }
        }
    }
}

void Digraph::readFromKeyboard()
{
    int n,m;
    cin >> n >> m;
    count = n;
    for( int i = 0; i < m; i ++ )
    {
        int temp1,temp2;
        cin >> temp1 >> temp2;
        adjacency[temp1][temp2] = true;
        adjacency[temp2][temp1] = true;
    }
}
void print(Vertex &x)
{
	cout << x << " ";

}

int main()
{
    Digraph mydigraph;
    mydigraph.readFromKeyboard();
    mydigraph.depth_first(print);
    cout << endl;
    mydigraph.breadth_first(print);
    cout << endl;

}
