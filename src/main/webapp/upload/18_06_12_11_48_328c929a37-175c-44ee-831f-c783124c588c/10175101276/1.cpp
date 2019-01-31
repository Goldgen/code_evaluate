
#include<iostream>
#include<queue>
using namespace std;

typedef int Vertex;
#define max_size 30

class Digraph
{
public:
    Digraph();
    void depth_first(void(*visit)(Vertex &)) const;
    void traverse(Vertex &v,bool visited[],void(*visit)(Vertex &)) const;
    void breadth_first(void (*visit)(Vertex &)) const;
    void write();
private:
    int count;                      //number of vertices
    bool adjacency[max_size][max_size];

};

Digraph::Digraph()
{
    count=0;
    for(int i=0;i<max_size;i++)
        for(int j=0;j<max_size;j++)
        adjacency[i][j]=0;

}

void Digraph::depth_first(void(*visit)(Vertex &)) const
{
    bool visited[max_size];
    Vertex v;
    for(int i=0;i<count;i++)
        visited[i]=0;
    for(v=0;v<count;v++)
    {
        if(!visited[v])
        {
            traverse(v,visited,visit);
        }
    }
    cout<<endl;
}

void Digraph::traverse(Vertex &v,bool visited[],void (*visit)(Vertex &)) const
{
    Vertex w;
    visited[v]=true;
    (*visit)(v);
    for(w=0;w<max_size;w++)
    {
        if(adjacency[v][w]&&!visited[w])
            traverse(w,visited,visit);
    }

}

void Digraph::breadth_first(void(*visit)(Vertex &)) const
{
    queue<int> q;
    bool visited[max_size];
    Vertex v,w,x;
    for(v=0;v<count;v++)
        visited[v]=false;
    for(v=0;v<count;v++)
    {
        if(!visited[v])
        {
            q.push(v);
            while(!q.empty())
            {
                w=q.front();
                if(!visited[w])
                {
                    visited[w]=true;
                    (*visit)(w);
                    for(x=0;x<max_size;x++)
                    {
                        if(adjacency[w][x]&&!visited[x])
                            q.push(x);
                    }
                    q.pop();
                }
            }
        }
    }
    cout<<endl;

}

void Digraph::write()
{
    int m,n;
    cin>>n>>m;
    count=n;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        adjacency[a][b]=true;
        adjacency[b][a]=true;
    }

}

void print(Vertex &x)
{
    cout<<x<<' ';
}
int main()
{
    Digraph G;
    G.write();
    G.depth_first(print);
    G.breadth_first(print);


}

