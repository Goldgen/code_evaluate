#include <iostream>
#include<string.h>
#include<queue>
#define max_size 30
using namespace std;
typedef int Vertex;
class Digraph {
private:
 int count; // number of vertices, at most max_size
 bool adjacency[max_size][max_size];
public:
    Digraph();
    void depth_first(void (*visit)(Vertex &))const;
    void breadth_first(void (*visit)(Vertex &))const;
    void readFromKeyboard();
    void traverse(int i,bool visited[],void (*visit)(Vertex &))const;
};
Digraph::Digraph()
{
    count=0;
    for(int i=0;i<max_size;i++)
    {
        for(int j=0;j<max_size;j++)
            adjacency[i][j]=false;
    }
}
void Digraph::readFromKeyboard()
{
    int vertex_,edgs_;
    int a1,a2;
    cin>>vertex_;
    cin>>edgs_;
    count=vertex_;
    while(edgs_!=0)
    {
        cin>>a1;
        cin>>a2;
        edgs_--;
        adjacency[a1][a2]=true;
        adjacency[a2][a1]=true;
    }
}
void Digraph::depth_first(void (*visit)(Vertex &)) const
{
 bool visited[max_size];
 for(int i=0;i<count;i++){
        visited[i]=false;
 }
    for(int i=0;i<count;i++)
    {
        if(visited[i]==false)
        {
            traverse(i,visited,visit);
        }
    }
}
 void Digraph::traverse(int i,bool visited[],void (*visit)(Vertex &))const
 {
     visited[i]=true;
     (*visit)(i);
     for(int j=0;j<count;j++)
     {
         if(adjacency[i][j]==true)
            if(visited[j]==false)
            {
                traverse(j,visited,visit);
            }
     }
 }
void Digraph::breadth_first(void (*visit)(Vertex &))const
{
    queue<Vertex> a;
    bool visited[max_size];
    Vertex v,w,x;
    for(int i=0;i<max_size;i++)visited[i]=false;
    for(int i=0;i<count;i++)
    {
        if(visited[i]==false)
        {
            visit(i);
            visited[i]=true;
        }
        for(int j=0;j<count;j++)
        {
            if(adjacency[i][j]==true&&visited[j]==false)
            {
                a.push(j);
            }
        }
        while(!a.empty())
        {
            v=a.front();
            if(!visited[v])
            {
                visited[v]=true;
                visit(v);
                for(int k=0;k<count;k++)
                {
                    if(adjacency[v][k]==true&&visited[k]==false)
                    {
                        a.push(k);
                    }
                }
            }
            a.pop();
        }
    }
}
void print(Vertex &i)
{
    cout<<i<<" ";
}
int main()
{
    Digraph mygraph;
    mygraph.readFromKeyboard();
    mygraph.depth_first(print);
    cout<<endl;
    mygraph.breadth_first(print);
    return 0;
}
