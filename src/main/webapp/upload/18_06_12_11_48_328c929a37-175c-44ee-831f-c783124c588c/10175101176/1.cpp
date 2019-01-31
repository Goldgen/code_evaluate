#include <iostream>
#include<list>
#include<queue>
#define max_size 30
typedef int Vertex;
using namespace std;
void print(Vertex &x)
{
    cout<<x<<' ';
    return ;
}
class Digraph {
public:
   Digraph();
   void  depth_first(void (*visit)(Vertex &))const;
   void  breadth_first(void (*visit)(Vertex &))const;
   void readfrom();
private:
  int count;
  bool adjacency[max_size][max_size];
  void  traverse(Vertex &v, bool visited[],void (*visit)(Vertex &)) const;

};
 Digraph::Digraph()
{
    count=0;
    int i,j;
    for(i=0;i<max_size;i++)
    {
        for(j=0;j<max_size;j++)
            adjacency[i][j]=false;
    }
}
 void Digraph::readfrom()
 {
     int m,n,x,y;
     cin>>n>>m;
     count=n-1;
     while(m--)
     {
            cin>>x>>y;
         if(!adjacency[x][y])
         {
             adjacency[x][y]=true;
             adjacency[y][x]=true;
         }
     }
 }
 void  Digraph::depth_first(void (*visit)(Vertex &))const
 {
     bool visited[max_size];
     int i;
     for(i=0;i<count+1;i++)
        visited[i] = false;
       for(i=0;i<count+1;i++)
        if(!visited[i])
       traverse(i,visited,visit);

 }
 void  Digraph::traverse(Vertex &v, bool visited[],void (*visit)(Vertex &)) const
 {
     Vertex i;
	visited[v] = true;
	(*visit)(v);
	for (i=0;i<count+1;i++)
    {
		if (!visited[i]&&adjacency[i][v])
            traverse(i, visited, visit);

 }
 }
 void Digraph :: breadth_first(void (*visit)(Vertex &)) const
 {
     queue<int> q;
	bool visited[max_size];
	int v, w, x;
	for (v=0;v<count+1;v++) visited[v] = false;
	for (v=0;v<count+1;v++)
		if (!visited[v]) {
			q.push(v);
			while (!q.empty( )){
				w=q.front();
				if (!visited[w]) {
					visited[w] = true;
					(*visit)(w);
					for (x=0;x<count+1;x++)
                    {
                        if(adjacency[x][w])
                        q.push(x);}
				}
				q.pop( );
			}

 }
 }
int main()
{
    Digraph  mygraph;
    mygraph.readfrom();
     mygraph.depth_first(print);
     cout<<endl;
       mygraph.breadth_first(print);

}
