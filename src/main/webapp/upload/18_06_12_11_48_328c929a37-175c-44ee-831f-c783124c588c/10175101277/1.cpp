#include <bits/stdc++.h>
using namespace std;
const int max_size = 30;
typedef int Vertex;
class Digraph
{
private:
	int count;
	bool adjacency[max_size][max_size];
public:
    Digraph();
	void depth_first(void (*visit)(Vertex &)) const;
	void breadth_first (void(*visit)(Vertex&))const;
	void traverse(Vertex &v, bool visited[],void (*visit)(Vertex &)) const;
	void ReadFromKeyBoard();
};

Digraph::Digraph()
{
    count = 0;
    for(int i =0;i<max_size;i++)
        for(int j=0;j<max_size;j++)
        adjacency[i][j] = 0;
}

void Digraph ::depth_first(void (*visit)(Vertex &)) const
{
	bool visited[count];
	Vertex v;
	for(v = 0;v<count;v++)
        visited[v] = false;
	for(v = 0;v<count;v++)
        if (!visited[v])
            traverse(v, visited, visit);
}

void Digraph :: traverse(Vertex &v, bool visited[],void (*visit)(Vertex &)) const
{
	Vertex w;
	visited[v] = true;
	(*visit)(v);
	for (w=0;w<count;w++)
		if (!visited[w]&&adjacency[v][w])
            traverse(w, visited, visit);
}
void Digraph:: breadth_first(void (*visit)(Vertex &)) const
{
	queue<Vertex> q;
	bool visited[count];
	Vertex v, w, x;
	for (v=0;v<count;v++)
        visited[v] = false;
	for (v=0;v<count;v++)
		if (!visited[v])
		{
			q.push(v);
			while (!q.empty( ))
			{
				w=q.front();
				if (!visited[w])
				 {
					visited[w] = true;
					(*visit)(w);
					for (x=0;x<count;x++)
                        if (!visited[x]&&adjacency[w][x])
                            q.push(x);
				 }
				q.pop();
			}
		}
}
void Digraph ::ReadFromKeyBoard()
{
    int n,m;
    cin>>n>>m;
    count=n;
    for(int i=0;i<m;i++)
    {
        Vertex a,b;
        cin>>a>>b;
        adjacency[a][b]=1;
        adjacency[b][a]=1;
    }
}
void print(Vertex & v)
{
    cout<<v<<" ";
}
int main()
{
    Digraph mygraph;
    mygraph.ReadFromKeyBoard();
    mygraph.depth_first(print);
    cout<<endl;
    mygraph.breadth_first(print);
    cout<<endl;
}
