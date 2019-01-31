#include <iostream>
using namespace std;
#include <queue>
const int max_size = 30;
typedef int Vertex;
class Digraph {
private:
  int count;
  bool adjacency[max_size][max_size];
public:
  Digraph();
  void depth_first(void (*visit)(Vertex &)) const;
  void breadth_first(void (*visit)(Vertex &)) const;
  void readFromKeyboard();
  void insert(int x,int y);
  void initialize(int m);
  void traverse(Vertex &v, bool visited[],void (*visit)(Vertex &)) const;
};
Digraph::Digraph()
{
    count=0;
    for(int i=0;i<max_size;i++)
    for(int j=0;j<max_size;j++)
        adjacency[i][j]=false;

}
void Digraph::depth_first(void (*visit)(Vertex &)) const
{
	bool visited[count];
	for (int i=0;i<count;i++)  visited[i] = false;
	for (int i=0;i<count;i++) if (!visited[i]) traverse(i, visited, visit);

}
void Digraph::traverse(Vertex &v, bool visited[],void (*visit)(Vertex &)) const
{
	visited[v] = true;
	(*visit)(v);
	for (int i=0;i<count;i++)
    {
        if(adjacency[v][i])
		if (!visited[i]) traverse(i, visited, visit);
    }
}
void Digraph::initialize(int m)
{
    count=m;
}
void Digraph::insert(int x, int y)
{
    adjacency[x][y]=1;
    adjacency[y][x]=1;
}
void Digraph::breadth_first(void(*visit)(Vertex &)) const
{
    queue<Vertex> q;
    bool visited[count];
    Vertex w;
    for(int i=0;i<count;i++) visited[i]=false;
    for(int i=0;i<count;i++)
        if(!visited[i])
    {
        q.push(i);
        while(!q.empty())
        {
            w=q.front();
            if(!visited[w])
            {
                visited[w]=1;
                (*visit)(w);
                for(int j=0;j<count;j++)
                {
                    if(adjacency[w][j])
                        q.push(j);
                }
            }
            q.pop();
        }
    }
}
void print(Vertex &x)
{
    cout<<x<<' ';
}

int main()
{
    Digraph dg;
    int m,n,x,y;
    cin>>m;
    dg.initialize(m);
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        dg.insert(x,y);
    }
    dg.depth_first(print);
    cout<<endl;
    dg.breadth_first(print);
}
