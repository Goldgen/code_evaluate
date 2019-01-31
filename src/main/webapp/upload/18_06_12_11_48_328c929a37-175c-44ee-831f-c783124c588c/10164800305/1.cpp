#include <iostream>
#include <queue>

using namespace std;
const int MAX_SIZE = 100;
typedef int Vertex;

class Digraph
{
private:
  int count; // number of vertices, at most max size
  bool adjacency[MAX_SIZE][MAX_SIZE];
  void traverse(Vertex &v,bool visited[],void(*visit)(Vertex &))const ;

public:
  Digraph();
  void depth_first(void (*visit)(Vertex &)) const;
  void breadth_first(void (*visit)(Vertex &)) const;
  void readFromKeyboard();

};

Digraph::Digraph()
{
    int i,j;
    for(i=0;i<MAX_SIZE;i++)
    {
        for(j=0;j<MAX_SIZE;j++)
        {
            adjacency[i][j]=false;
        }
    }
}

void Digraph::readFromKeyboard()
{
    int m,n;
    int i;
    cin>>n;
    cin>>m;
    count=n;
    for(i=0;i<m;i++)
    {
        int x,y;
        cin>>x;
        cin>>y;
        adjacency[x][y]=true;
        adjacency[y][x]=true;
    }
}

void Digraph::depth_first(void (*visit)(Vertex &)) const
{
    bool visited[MAX_SIZE];
    int i;
    for(i=0;i<count;i++)
        visited[i]=false;
    for(i=0;i<count;i++)
    {
        if(!visited[i])
            traverse(i,visited,visit);
    }
}

void Digraph::traverse(Vertex &v,bool visited[],void(*visit)(Vertex &))const
{
    Vertex i;
    visited[v]=true;
    (*visit)(v);
    for(i=0;i<count;i++)
    {
        if(adjacency[v][i]==true)
        {
            if(!visit[i])
                traverse(i,visited,visit);
        }
    }
}

void Digraph::breadth_first(void (*visit)(Vertex &)) const
{
    queue <int> q;
    bool visited[MAX_SIZE];

    int i,j,w;
    for(i=0;i<count;i++)
    {
        visited[i]=false;
    }

    for(i=0;i<count;i++)
    {
        if(visited[i]==false)
        {
            q.push(i);
            while(!q.empty())
            {
              w=q.front();
              if(!visited[w])
              {
                  visited[w]=true;
                  (*visit)(w);
                  for(j=0;j<count;j++)
                  {
                      if(adjacency[w][j]==true)
                      {
                                q.push(j);
                      }
                  }
              }
              q.pop();
            }
        }
    }

}




void visit(Vertex &x)
{
    cout<<x<<" ";
}






int main()
{
    Digraph x;
    x.readFromKeyboard();
    x.depth_first(visit);
    cout<<endl;
    x.breadth_first(visit);
    cout<<endl;
}
