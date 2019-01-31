#include <iostream>
#include <queue>

using namespace std;
const int MAX_SIZE = 30;
typedef int Vertex;

void print(Vertex &x){
	cout<<x<<" ";
}

class Digraph {
private: 
  int count; 
  bool adjacency[MAX_SIZE][MAX_SIZE];
public:
  Digraph();
  void depth_first(void (*visit)(Vertex &)) const;
  void breadth_first(void (*visit)(Vertex &)) const;
  void traverse(Vertex &v, bool visited[],void (*visit)(Vertex &)) const;
  void read(const Vertex V,const Vertex E);
};

Digraph :: Digraph()
{
	count = 0;
}

void Digraph :: depth_first(void (*visit)(Vertex &)) const
{
	bool visited[MAX_SIZE];
	Vertex v;
	for (v = 0;v < count;v++ )  visited[v] = false;
	for (v = 0;v < count;v++)  if (!visited[v]) traverse(v, visited, visit);
}

void Digraph :: traverse(Vertex &v, bool visited[],void (*visit)(Vertex &)) const
{
	Vertex w;
	visited[v] = true;
	(*visit)(v);
	for (w = 0;w < count;w++)
		if (adjacency[v][w] && !visited[w]) traverse(w, visited, visit);
}

void Digraph :: breadth_first(void (*visit)(Vertex &)) const
{
	queue<Vertex> q;
	bool visited[MAX_SIZE];
	Vertex v, w;
	for (v = 0;v < count;v++) visited[v] = false;
	for (v = 0;v < count;v++)
	if(!visited[v]) {
			q.push(v);
			visited[v] = true;
			while (!q.empty()){
				w = q.front();
				q.pop();
				(*visit)(w);
				for(w = 0;w < count;w++)
				if (adjacency[v][w] && !visited[w]) {
					visited[w] = true;
					q.push(w);
				}
			}
	}
}

void Digraph :: read(const Vertex V,const Vertex E)
{
	int i,row,col;
    count = V;
    for(i = 0;i < E;i++){
    	cin >> row;
    	cin >> col;
    	adjacency[row][col] = true;
	}
}

int main()
{
    Digraph mygraph;
    int V,E;
    cin >> V >> E;
    mygraph.read(V,E);
	mygraph.depth_first(print);
	cout << endl;
	mygraph.breadth_first(print);
	return 0;
}