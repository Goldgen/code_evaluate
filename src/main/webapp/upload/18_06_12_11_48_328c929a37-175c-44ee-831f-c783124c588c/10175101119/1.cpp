#include <iostream>
#include <bits/stdc++.h>
#include <queue>
#define N 30

using namespace std;

typedef int vertex;

class digraph
{
private:
    int count;
    bool adjacency[N][N];
public:
    digraph();
    void depth_first(void (*visit)(vertex &)) const;
    void breadth_first(void (*visit)(vertex &)) const;
    void readFromKeyboard();
    void insert(int x,int y); //插入
    void initialize(int m);  //初始化
    void traverse(vertex &v, bool visited[],void (*visit)(vertex &)) const;
};

digraph::digraph()
{
    count=0;
    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++)
            adjacency[i][j]=false;
}

void digraph::traverse(vertex &v, bool visited[],void (*visit)(vertex &)) const
{
    visited[v] = true;
    (*visit)(v);
    for (int i=0; i<count; i++)
    {
        if(adjacency[v][i])
            if (!visited[i]) traverse(i, visited, visit);
    }
}

void digraph::initialize(int m)
{
    count=m;
}

void digraph::insert(int x, int y)
{
    adjacency[x][y]=1;
    adjacency[y][x]=1;
}
//广度优先
void digraph::breadth_first(void(*visit)(vertex &)) const
{
    queue<vertex> q;
    bool visited[count];
    vertex w;
    for(int i=0; i<count; i++)
        visited[i]=false;
    for(int i=0; i<count; i++)
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
                    for(int j=0; j<count; j++)
                    {
                        if(adjacency[w][j])
                            q.push(j);
                    }
                }
                q.pop();
            }
        }
}
//深度优先
void digraph::depth_first(void (*visit)(vertex &)) const
{
    bool visited[count];
    for (int i=0; i<count; i++)  visited[i] = false;
    for (int i=0; i<count; i++)
        if (!visited[i])
            traverse(i, visited, visit);
}

void print(vertex &x)
{
    cout<<x<<' ';
}

int main()
{
    digraph a;
    int m,n,x,y;
    cin>>m;
    a.initialize(m);
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>x>>y;
        a.insert(x,y);
    }
    a.depth_first(print);
    cout<<endl;
    a.breadth_first(print);
}