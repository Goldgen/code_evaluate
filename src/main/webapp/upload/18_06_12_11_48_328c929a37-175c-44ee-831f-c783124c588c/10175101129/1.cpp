#include<bits/stdc++.h>
#define max_size 50

using namespace std;
typedef int Vertex;

class Digraph {
private:
  int count; // number of vertices, at most max size
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
    int  i,j;
    count=0;
    for(i=0;i<max_size;i++){
        for(j=0;j<max_size;j++){
            adjacency[i][j]=false;
        }
    }
}
void print(Vertex &x)
{
    cout<<x<<' ';
}
void Digraph::initialize(int a)
{
    count=a;
}
void Digraph::insert(int x,int y)
{
    adjacency[x][y]=1;
    adjacency[y][x]=1;
}
void Digraph::depth_first(void (*visit)(Vertex &)) const
{
    int i;
	bool visited[count];
	for(i=0;i<count;i++){
         visited[i] = false;
	}
	for (i=0;i<count;i++){
            if (!visited[i]){
            traverse(i, visited, visit);
            }
	}
}
void Digraph::traverse(Vertex &v, bool visited[],void (*visit)(Vertex &)) const
{
    int i;
	visited[v] = true;
	(*visit)(v);
	for (i=0;i<count;i++){
        if(adjacency[v][i]){
		if (!visited[i]){
        traverse(i, visited, visit);
		}
    }
	}
}
void Digraph::breadth_first(void(*visit)(Vertex &)) const
{
    int i,j;
    queue<Vertex> q;
    Vertex w;
    bool visited[count];

    for(i=0;i<count;i++){
            visited[i]=false;
    }
    for(i=0;i<count;i++){
        if(!visited[i])
    {
        q.push(i);
        while(!q.empty()){
            w=q.front();
            if(!visited[w]){
                visited[w]=1;
                (*visit)(w);
                for(j=0;j<count;j++)
                {
                    if(adjacency[w][j]){
                        q.push(j);
                    }
                }
            }
            q.pop();
        }
    }
}
}

int main()
{
    int i=0;
    Digraph Mydegraph;
    int a,b,x,y;
    cin>>a;
    Mydegraph.initialize(a);
    cin>>b;
    for(i=0;i<b;i++)
    {
        cin>>x>>y;
        Mydegraph.insert(x,y);
    }
    Mydegraph.depth_first(print);
    cout<<endl;
    Mydegraph.breadth_first(print);
}
