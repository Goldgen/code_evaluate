#include <iostream>

using namespace std;

const int max_size = 30;
typedef int Vertex;

class Digraph
{
private:
    int count;
    bool adjacency[max_size][max_size];
public:
    Digraph();
    void depth_first(void (*visit)(Vertex &)) const;
    void breadth_first(void (*visit)(Vertex &)) const;
    void readFromKeyboard();
};

void Digraph::depth_first(void (*visit)(Vertex &)) const
{
    bool visited[max_size];
    Vertex v;
    for() visited[v]=false;
    for() if(!visit[v]) traverse(v,visited,visit);
}

void Digraph :: traverse(Vertex &v, bool visited[],void (*visit)(Vertex &)) const
{
	Vertex w;
	visited[v] = true;
	(*visit)(v);
	for (all w adjacent to v)
		if (!visited[w]) traverse(w, visited, visit);
}

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
