#include <iostream>
#include <queue>

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
  void breadth_first(void (*visit)(Vertex &)) const;
  void traverse(Vertex &v, bool visited[],void (*visit)(Vertex &)) const;
  void readFromKeyboard();
};

Digraph::Digraph()
{
    count = 0;
    for(int i = 0;i <MAX_SIZE;i++)
        for(int j = 0;j < MAX_SIZE;j++)
            adjacency[i][j] = false;
}

void Digraph:: depth_first(void (*visit)(Vertex &)) const
/* Post: The function *visit has been performed at each vertex of the Digraph in depth-first order.
Uses: Method traverse to produce the recursive depth-first order. */
{
	bool visited[MAX_SIZE];
	Vertex v;
	for (v = 0;v < MAX_SIZE;v++)  visited[v] = false;
	for (v = 0;v < MAX_SIZE;v++)  if (!visited[v]) traverse(v, visited, visit);
}

void Digraph:: traverse(Vertex &v, bool visited[],void (*visit)(Vertex &)) const
/* Pre: v is a vertex of the Digraph.
Post: The depth-first traversal, using function *visit, has been completed for v and
for all vertices that can be reached from v.
Uses: traverse recursively. */
{
	Vertex w;
	visited[v] = true;
	(*visit)(v);
	for (w = 0;w < v;w++)
		if (!visited[w]) traverse(w, visited, visit);
}

void Digraph:: breadth_first(void (*visit)(Vertex &)) const
/* Post: The function *visit has been performed at each vertex of the Digraph in
breadth-first order.
Uses: Methods of class Queue. */
{
	queue<int> q;
	bool visited[MAX_SIZE];
	Vertex v, w, x;
	for (v = 0;v < MAX_SIZE;v++) visited[v] = false;
	for (v = 0;v < MAX_SIZE;v++)
		if (!visited[v]) {
			q.push(v);
			while (!q.empty( )){
				q.front();
				if (!visited[w]) {
					visited[w] = true;
					(*visit)(w);
					for (x = 0;x < w;x++) q.push(x);
				}
				q.pop();
			}
		}
}

void Digraph::readFromKeyboard()
//从键盘中读入数据
{
    int a = 0,b = 0;
    while(a != -1 || b != -1){
        cin>>a>>b;
        adjacency[a][b] = 1;
        adjacency[b][a] = 1;
    }
}

void print(Vertex &x)
//输出数据
{
    cout<<x;
}

int main()
{
    Digraph mydigraph;
    mydigraph.readFromKeyboard();
    mydigraph.depth_first(print);
    mydigraph.breadth_first(print);
    return 0;
}
