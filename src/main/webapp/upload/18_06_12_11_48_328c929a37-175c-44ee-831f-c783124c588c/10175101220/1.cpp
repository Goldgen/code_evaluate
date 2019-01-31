#include <iostream>
#include <queue>
#define max_size 30
using namespace std;
typedef int Vertex;

class Digraph {
private:
  int count;
  bool adjacency[max_size][max_size];
public:
    Digraph();
    void readFromKeyboard();
    void input(const int &i,const int &j);
    void depth_first(void (*visit)(Vertex &)) const;
    void traverse(Vertex &v, bool visited[],void (*visit)(Vertex &)) const;
    void breadth_first(void (*visit)(Vertex &)) const;
};

Digraph::Digraph()
{
    count=0;
    for(int i=0;i<max_size;i++)
        for(int j=0;j<max_size;j++)
            adjacency[i][j]=false;
}

void Digraph::readFromKeyboard()
{
    int edge_num;
    cin>>count>>edge_num ;
    for(int i=0;i<edge_num;i++)
    {
        int x=0,y=0;
        cin>>x;
        cin>>y;
        adjacency[x][y]=true;
        adjacency[y][x]=true;
    }
}

void Digraph :: depth_first(void (*visit)(Vertex &)) const
{
	bool visited[count];
	Vertex v;
	for (int i=0;i<count;i++)
        visited[i] = false;
	for (int i=0;i<count;i++)
        if (!visited[i])
        {
            v=i;
            traverse(v, visited, visit);
        }
}

void Digraph:: traverse(Vertex &v, bool visited[],void (*visit)(Vertex &)) const
{
	Vertex w;
	visited[v] = true;
	(*visit)(v);
    for(int j=0;j<count;j++) {
        if(adjacency[v][j]==true) {
            w=j;
            if (!visited[w]) traverse(w, visited, visit);
        }
    }
}

void Digraph:: breadth_first(void (*visit)(Vertex &)) const
{
	queue<Vertex> q;
	bool visited[count];
	Vertex v, w, x;
	for (int i=0;i<count;i++)
        visited[i] = false;
	for (int i=0;i<count;i++)
		if (!visited[i]) {
            v=i;
			q.push(v);
			while (!q.empty()) {
				w=q.front();
				if (!visited[w]) {
					visited[w] = true;
					(*visit)(w);
					for (int j=0;j<count;j++)
                        if(adjacency[w][j]==true) {
                            x=j;
                            q.push(x);
                        }
				}
				q.pop();
			}
		}
}

void print(Vertex &x)
{
    cout<<x<<" ";
}

int main()
{
    Digraph test;
    test.readFromKeyboard();
    test.depth_first(print);
    cout<<endl;
    test.breadth_first(print);
    cout<<endl;
    return 0;
}