#include <iostream>
#include <queue>
#define MAX_SIZE 500
using namespace std;

typedef long long Vertex;

class Diagraph {
private:
    long long count;
    bool adjacency[MAX_SIZE][MAX_SIZE];
    void traverse(Vertex &v, bool visited[], void (*visit)(Vertex &)) const;
public:
    Diagraph();
    void depth_first(void(*visit)(Vertex &)) const;
    void breadth_first(void(*visit)(Vertex &)) const;
    void readFromKeyboard();
};

Diagraph::Diagraph()
{
    for (long long i=0; i<MAX_SIZE; i++) {
        for (long long j=0; j<MAX_SIZE; j++) {
            adjacency[i][j] = false;
        }
    }
    count = 0;
}

void Diagraph::readFromKeyboard()
{
    long long v, e;
    cin >> v;
    cin >> e;
    count = v;
    for (long long i=0; i<e; i++) {
        long long x,y;
        cin >> x >> y;
        adjacency[x][y] = true;
        adjacency[y][x] = true;
    }
}

void Diagraph::breadth_first(void(*visit)(Vertex &)) const
{
    queue<Vertex> q;
    bool *visited = new bool[count];
    for (long long i=0; i<count; i++) {
        visited[i] = false;
    }
    for (long long i=0; i<count; i++) {
        if (!visited[i]) {
            q.push(i);
            while (!q.empty()) {
                Vertex to_visit = q.front();
                if (!visited[to_visit]) {
                    visited[to_visit] = true;
                    visit(to_visit);
                }
                for (long long j=0; j<count; j++) {
                    if (adjacency[to_visit][j]&&!visited[j]) q.push(j);
                }
                q.pop();
            }
        }
    }
    delete[] visited;
}

void Diagraph::depth_first(void(*visit)(Vertex &)) const
{
    bool *visited = new bool[count];
    for (long long i=0; i<count; i++) visited[i] = false;
    for (long long i=0; i<count; i++) {
        if (!visited[i]) {
            traverse(i, visited, visit);
        }
    }
    delete[] visited;
}

void Diagraph::traverse(Vertex &v, bool visited[], void (*visit)(Vertex &)) const
{
    visited[v] = true;
    visit(v);
    for (long long i=0; i<count; i++) {
        if (adjacency[v][i]&&!visited[i]) {
            traverse(i, visited, visit);
        }
    }
}

void visit(Vertex &v)
{
    cout << v << ' ';
}

int main()
{
    Diagraph d;
    d.readFromKeyboard();
    d.depth_first(visit);
    cout << endl;
    d.breadth_first(visit);
    cout << endl;
    return 0;
}
