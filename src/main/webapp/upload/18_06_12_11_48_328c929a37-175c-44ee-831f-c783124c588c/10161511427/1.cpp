#include <iostream>
#include <string.h>
#include <list>
#include <queue>
#define max_size 30

using namespace std;

typedef int Vertex;

class Digraph {
private:
	int count;
	bool adjacency[max_size][max_size];
public:
    Digraph();
    void readFromKeyboard();
    void depth_first(void (*visit)(Vertex &)) const;
    void breadth_first(void (*visit)(Vertex &)) const;
    void traverse(Vertex &v, bool visited[], void(*visit)(Vertex &)) const;
};

Digraph::Digraph(){
    count = 0;
    memset(adjacency, false, sizeof(adjacency));
}

void Digraph::readFromKeyboard(){
    int n, m;
    cin >> n >> m;
    count = n;
    while(m--){
        int a, b;
        cin >> a >> b;
        adjacency[a][b] = adjacency[b][a] = true;
    }
}

void Digraph::depth_first(void (*visit)(Vertex &)) const{
    bool visited[max_size];
    Vertex v;
    for(v = 0; v < count; v++)
        visited[v] = false;
    for(v = 0; v < count; v++)
        if(!visited[v])traverse(v, visited, visit);
}

void Digraph::traverse(Vertex &v, bool visited[], void(*visit)(Vertex &)) const{
    Vertex w;
    visited[v] = true;
    (*visit)(v);
    for(w = 0; w < count; w++){
        if(adjacency[v][w] == true){
            if(!visited[w])
                traverse(w, visited, visit);
        }
    }
}

void Digraph::breadth_first(void (*visit)(Vertex &)) const{
    queue<Vertex> q;
    bool visited[max_size];
    Vertex v, w, x;
    for(v = 0; v < count; v++)
        visited[v] = false;
    for(v = 0; v < count; v++){
        if(!visited[v]){
            q.push(v);
            while(!q.empty()){
                w = q.front();
                if(!visited[w]){
                    visited[w] = true;
                    (*visit)(w);
                    for(x  = 0; x < count; x++){
                        if(adjacency[w][x] == true)
                            q.push(x);
                    }
                }
                q.pop();
            }
        }
    }
}

void print(Vertex &v){
    cout << v << " ";
}

int main()
{
    Digraph MyGraph;
    MyGraph.readFromKeyboard();
    MyGraph.depth_first(print);
    cout << endl;
    MyGraph.breadth_first(print);
    return 0;
}
