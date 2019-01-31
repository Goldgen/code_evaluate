#include <iostream>
#include <queue>
#define max_size 30

using namespace std;

typedef int Vertex;

class Digraph {
private:
  int count; // number of vertices, at most max size
  bool adjacency[max_size][max_size];
public:
    Digraph();
    void get_information(const int &count_num,const int &edge_num);
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

void Digraph::input(const int &i,const int &j)
{
    adjacency[i][j]=true;
    adjacency[j][i]=true;
}

void Digraph::get_information(const int &count_num,const int &edge_num)
{
    count = count_num;
    for(int i=0;i<edge_num;i++)
    {
        int x=0,y=0;
        cin>>x;
        cin>>y;
        input(x,y);
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
    for(int j=0;j<count;j++)
    {
        if(adjacency[v][j]==true)
        {
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
		if (!visited[i])
        {
            v=i;
			q.push(v);
			while (!q.empty())
			{
				w=q.front();
				if (!visited[w])
				{
					visited[w] = true;
					(*visit)(w);
					for (int j=0;j<count;j++)
                        if(adjacency[w][j]==true)
                        {
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
    int n=0,m=0;
    cin>>n;
    cin>>m;
    test.get_information(n,m);
    test.depth_first(print);
    cout<<endl;
    test.breadth_first(print);
    return 0;
}
