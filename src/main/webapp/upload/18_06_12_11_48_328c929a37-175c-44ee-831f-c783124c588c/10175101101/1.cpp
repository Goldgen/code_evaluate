#include <iostream>
#include<queue>
using namespace std;
const int MAX_SIZE = 30;
typedef int Vertex;

void print(Vertex &x)
{
    cout<<x<<' ';
}
class Digraph {
private:
  int count; // number of vertices, at most max size
  bool adjacency[MAX_SIZE][MAX_SIZE];
public:
  Digraph();
  void traverse(Vertex &v,bool visited[],void (*visit)(Vertex &))const;
  void depth_first(void (*visit)(Vertex &)) const;
  void breadth_first(void (*visit)(Vertex &)) const;
  void readFromKeyboard();
};

Digraph::Digraph()
{
    count = 0;
    for(int x=0;x<MAX_SIZE;x++)
        for(int y=0;y<MAX_SIZE;y++)
        adjacency[x][y] = false;
}

void Digraph::readFromKeyboard()
{
    int n,m;
    cin>>n>>m;
    count = n;
    int x,y;
    for(int i=0;i<m;i++)
    {
        cin>>x>>y;
        adjacency[x][y] = true;
        adjacency[y][x] = true;
    }
}
void Digraph::depth_first(void (*visit)(Vertex &))const
{
    bool visited[count];
    Vertex v;
    for(v = 0;v<count;v++)visited[v] = false;
    for(v = 0;v<count;v++)
        if(!visited[v])
        traverse(v,visited,visit);
}

void Digraph::traverse(Vertex &v,bool visited[],void (*visit)(Vertex &))const
{
    Vertex w;
    visited[v] = true;
    (*visit)(v);
    for(w = 0;w<count;w++)
        if(adjacency[v][w]&&!visited[w])
        traverse(w,visited,visit);
}
void Digraph::breadth_first(void (*visit)(Vertex &))const
{
    queue<int>q;
    bool visited[count];
    Vertex v,w,x;
    for(v = 0;v < count;v++)visited[v] = false;
    for(v = 0;v < count;v++)
        if(!visited[v])
    {
        q.push(v);
        while(!q.empty())
        {
            w = q.front();
            if(!visited[w])
            {
                visited[w] = true;
                (*visit)(w);
                x =0;
                while(x<count)
                {
                    if(adjacency[w][x]&&!visited[x])
                        q.push(x);
                    x++;
                }
            }
            q.pop();
        }
    }
}
int main()
{
    Digraph mygraph;
    mygraph.readFromKeyboard();
    mygraph.depth_first(print);
    cout<<endl;
    mygraph.breadth_first(print);
    cout<<endl;
    return 0;
}
