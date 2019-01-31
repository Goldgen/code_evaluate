#include <iostream>
#include <stdio.h>
#include <string.h>
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
  void traverse(Vertex &v, bool visited[],void (*visit)(Vertex &)) const;
  void breadth_first(void (*visit)(Vertex &)) const;
  void readFromKeyboard();
};

Digraph::Digraph(){
    count=0;
    adjacency[MAX_SIZE][MAX_SIZE]={0};
}
void Digraph::readFromKeyboard(){
    int i,n,m;
    scanf("%d %d",&n,&m);
    count=n;
    for(i=0;i<m;i++){
        int s,t;
        scanf("%d %d",&s,&t);
        adjacency[s][t]=true;
        adjacency[t][s]=true;
    }
}
void Digraph:: depth_first(void (*visit)(Vertex &)) const
{
	bool visited[MAX_SIZE];
	Vertex v;
	for (v=0;v<count;v++)
    visited[v] = false;
	for (v=0;v<count;v++)
	if (!visited[v])
	traverse(v, visited, visit);
}

void Digraph:: traverse(Vertex &v, bool visited[],void (*visit)(Vertex &)) const
{
	Vertex w;
	visited[v] = true;
	(*visit)(v);
	for (w=0;w<count;w++)
    if(adjacency[w][v]){
        if (!visited[w])
            traverse(w, visited, visit);
    }
}

void Digraph:: breadth_first(void (*visit)(Vertex &)) const
{
	int queue[MAX_SIZE],cnt=0,head=0;
	bool visited[MAX_SIZE];
	Vertex v, w, x;
	for (v=0;v<count;v++) visited[v] = false;
	for (v=0;v<count;v++)
		if (!visited[v]) {
			queue[cnt]=v;
			cnt++;
			while ((cnt-head)!=0){
				w=queue[head];
				head++;
				if (!visited[w]) {
					visited[w] = true;
					(*visit)(w);
					for (x=0;x<count;x++)
                        if(adjacency[x][w])
							if(!visited[x]){
                            queue[cnt]=x;
                            cnt++;
							}
				}
			}
		}
}
void print(Vertex &x){
    cout<<x<<endl;
}
int main()
{
	//应该是对的呀？
    Digraph myGraph;
    myGraph.readFromKeyboard();
    myGraph.depth_first(print);
    myGraph.breadth_first(print);
    return 0;
}
