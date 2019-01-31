#include <iostream>

using namespace std;

enum Error_code{success,overflow,underflow};

const int max_size = 100;
typedef int Vertex;

void print(Vertex &x)
{
    cout<<x<<" ";
}

class queue{
public:
    queue(){
        count=front=rear=0;
    };

    bool empty()const{
        return !count;
    };

    Error_code append(const int&item){
        if(count<100){
                waiters[rear++]=item;
                count++;
                return success;
        }
        else return overflow;
    };

    Error_code serve(){
        if(count){
            front++;
            count--;
            return success;
        }
        else return underflow;
    };

    Error_code retrieve(int&item){
        if(count){
            item=waiters[front];
            return success;
        }
        else return underflow;
    };

    int empty(){
        return count==0;
    }

private:
    int front,rear,count;
    int waiters[100];
};

struct Digraph {
    Digraph();
  int count;
  bool adjacency[max_size][max_size];
  void depth_first(int m,void (*visit)(Vertex &))const;
  void traverse(int m,Vertex &v, bool visited[],void (*visit)(Vertex &)) const;
  void breadth_first(int m,void (*visit)(Vertex &)) const;
  void insert(Vertex a,Vertex b);
};

Digraph::Digraph()
{
    for(int i=0;i<max_size;i++)
        for(int j=0;j<max_size;j++)
        adjacency[i][j]=0;
}

void Digraph :: insert(Vertex a,Vertex b)
{
    adjacency[a][b]=1;
    adjacency[b][a]=1;
}
void Digraph :: traverse(int m,Vertex &v, bool visited[],void (*visit)(Vertex &)) const
{
	Vertex w;
	visited[v] = true;
	(*visit)(v);
	for (w=0;w<m;w++)
	    if(adjacency[v][w]==1)
		    if (!visited[w])
                traverse(m,w, visited, visit);
}
void Digraph :: depth_first(int m,void (*visit)(Vertex &)) const
{
	bool visited[m];
	Vertex v;
	for (v=0;v<m;v++)  visited[v] = false;
	for (v=0;v<m;v++)
        if (!visited[v])
            traverse(m,v, visited, visit);
}


void Digraph :: breadth_first(int m,void (*visit)(Vertex &)) const
{
	queue q;
	bool visited[max_size];
	Vertex v, x,w;
	for (v=0;v<m;v++)
        visited[v] = false;
    for (v=0;v<m;v++)
		if (!visited[v]) {
			q.append(v);
			while (!q.empty( )){
				q.retrieve(w);
				if (!visited[w]) {
					visited[w] = true;
					(*visit)(w);
					for (x=0;x<m;x++)
                        if(adjacency[w][x]==1)
                            q.append(x);
				}
				q.serve( );
			}
		}

}
int main()
{
    Digraph graph;
    int m,n;
    cin>>m>>n;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        graph.insert(a,b);
    }
    graph.depth_first(m,print);
    cout<<endl;
    graph.breadth_first(m,print);
    return 0;
}
