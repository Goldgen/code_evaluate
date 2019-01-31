#include <iostream>
#include <queue>
using namespace std;
const int MAX_SIZE = 30;
typedef int Vertex;
class Digraph {
private:
  int count; // number of vertices, at most max size
  bool adjacency[MAX_SIZE][MAX_SIZE];
  void traverse(Vertex &v,bool visited[],void(*visit)(Vertex &))const;
public:
  Digraph();
  void depth_first(void (*visit)(Vertex &)) const;
  void breadth_first(void (*visit)(Vertex &)) const;
  void readFromKeyboard();
};

Digraph::Digraph()
{
    int n,m;
    cin>>n>>m;
    count = n;
    for(int i = 0;i<n;i++)
    for(int j = 0;j<n;j++)
    {
        adjacency[i][j] = 0;
    }
    int v1,v2;
    for(int i = 0;i<m;i++)
    {
    cin>>v1>>v2;
    adjacency[v1][v2] = 1;
    adjacency[v2][v1] = 1;
    }
}

void Digraph::depth_first(void (*visit)(Vertex &)) const
{
    bool visited[count];
	for(int i = 0;i<count;i++)
    visited[i] = false;
	for(int i = 0;i<count;i++)
    if (!visited[i])
    traverse(i, visited, visit);
}

void Digraph::traverse(Vertex &v, bool visited[],void (*visit)(Vertex &)) const
/* Pre: v is a vertex of the Digraph.
Post: The depth-first traversal, using function *visit, has been completed for v and
for all vertices that can be reached from v.
Uses: traverse recursively. */
{
	visited[v] = true;
	(*visit)(v);
	//for (all w adjacent to v)
    for(int i  =0;i<count;i++)
    if(adjacency[v][i]!=0)
    if (!visited[i])
    traverse(i, visited, visit);
}

void Digraph::breadth_first(void (*visit)(Vertex &)) const
{
	queue<int>q;
	bool visited[count];
	Vertex v,w,x;
	for(int i = 0;i<count;i++)
    visited[i] = false;
	for(v = 0;v<count;v++)
		if (!visited[v]) {
			q.push(v);
			while (!q.empty()){
                w = q.front();
				if (!visited[w]) {
					visited[w] = true;
					(*visit)(w);
                    for(int i  =0;i<count;i++)
                    if(adjacency[w][i]!=0)
                    q.push(i);
			}
			q.pop();
		}
}
}

void print(Vertex& n)
{
    cout<<n<<" ";
}

int main()
{
    Digraph mygraph;
    mygraph.depth_first(print);
    cout<<endl;
    mygraph.breadth_first(print);
    return 0;
}
