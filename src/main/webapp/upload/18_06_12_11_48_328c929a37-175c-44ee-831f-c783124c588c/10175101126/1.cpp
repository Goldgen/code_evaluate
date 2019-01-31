#include <bits/stdc++.h>
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
  void readFromKeyboard(Vertex a, Vertex b, Vertex c);
  void traverse(Vertex &v,bool visited[ ], void(*visit)(Vertex &))const;
};
Digraph::Digraph()
{
    count=0;
    for(int i=0;i<MAX_SIZE;i++)
        for(int j=0;j<MAX_SIZE;j++)
            adjacency[i][j]=0;
}
void Digraph::readFromKeyboard(Vertex a, Vertex b,Vertex c)
{
    adjacency[a][b]=true;
    adjacency[b][a]=true;
    count=c;
}
void print(Vertex &x)
{
    cout<<x<<" ";
}
void Digraph::traverse(Vertex &v,bool visited[ ], void(*visit)(Vertex &))const
{
    Vertex w;
    visited[v]=true;
    (*visit)(v);
    for(w=0;w<count;w++)
    {
        if(adjacency[w][v])
        {
            if(!visited[w])
            {
                traverse(w,visited,visit);
            }
        }
        else continue;
    }
}
void Digraph::depth_first(void (*visit)(Vertex &)) const
{
  bool visited[MAX_SIZE];
  Vertex v;
  for(v=0;v<count;v++)
  {
      visited[v]=false;
  }
  for(v=0;v<count;v++)
  {
      if(!visited[v])
        traverse(v,visited,visit);
  }
  cout<<endl;
}
void Digraph::breadth_first(void (*visit)(Vertex &)) const
{
    queue<Vertex> t;
    bool visited[MAX_SIZE];
    Vertex v,w,x;
    for(v=0;v<count;v++)
    {
        visited[v]=false;
    }
    for(v=0;v<count;v++)
    {
        if(!visited[v])
        {
            t.push(v);
            while(!(t.empty()))
                  {
                      w=t.front();
                      if(!visited[w])
                        {
                            visited[w]=true;
                            (*visit)(w);
                            for(x=0;x<count;x++)
                            {
                                if(adjacency[x][w])
                                    t.push(x);
                            }
                        }
                        t.pop();
                  }
        }
    }
    cout<<endl;
}
int main()
{
    int m, n;
    Digraph pf;
    cin>>m;cin>>n;
    int p,f;
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&p,&f);
        pf.readFromKeyboard(p,f,m);
    }
    pf.depth_first(print);
    pf.breadth_first(print);
    return 0;
}
