#include <iostream>
#include <queue>
using namespace std;
typedef int Vertex;
const int max_size = 30;

class Digraph{
private:
    int count;
    bool adjacency[max_size][max_size];
public:
    Digraph();
    void depth_first(void (*visit)(Vertex &)) const;
    void breadth_first(void (*visit)(Vertex &)) const;
    void traverse(Vertex &v, bool visited[], void(*visit)(Vertex &)) const;
    void readData();
    void type();
};

Digraph::Digraph()
{
    count = 0;
    int i, j;
    for(i = 0; i < max_size; i++)
        for(j = 0; j < max_size; j++) adjacency[i][j] = false;
}

void Digraph::depth_first(void (*visit)(Vertex &)) const
{
    bool visited[max_size] = {0};
    Vertex v;
    for(v = 0; v < count; v++)
        if(!visited[v]) traverse(v, visited, visit);
}

void Digraph::traverse(Vertex &v, bool visited[], void(*visit)(Vertex &)) const
{
    Vertex w;
    visited[v] = true;
    (*visit)(v);
    for(w = 0; w < count; w++)
        if(adjacency[v][w] && (!visited[w])) traverse(w, visited, visit);
}

void Digraph::breadth_first(void (*visit)(Vertex &)) const
{
    queue<int> q;
    bool visited[max_size] = {0};
    Vertex v, w, x;
    for(v = 0; v < count; v++)
        if(!visited[v]){
            q.push(v);
            while(!q.empty()){
                w = q.front();
                if(!visited[w]){
                    visited[w] = true;
                    (*visit)(w);
                    for(x = 0; x < count; x++)
                        if(adjacency[w][x] && !visited[x]) q.push(x);
                }
                q.pop();
            }
        }
}

void Digraph::readData()
{
    int e, x, i, v;
    cin >> count >> e;
    for(i = 0; i < e; i++){
        cin >> v >> x;
        adjacency[v][x] = adjacency[x][v] = true;
    }
}

void print(Vertex &x)
{
    cout << x << " ";
}

int main()
{
    Digraph mygraph;
    mygraph.readData();
    mygraph.depth_first(print);
    cout << endl;
    mygraph.breadth_first(print);
    cout << endl;
    return 0;
}