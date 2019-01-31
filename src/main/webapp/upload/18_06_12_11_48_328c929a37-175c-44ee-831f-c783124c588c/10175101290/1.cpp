#include <iostream>
#include <queue>
using namespace std;

typedef int vertex;
#define max_size 30

class Diagraph{
private:
    int count;//实际顶点数
    bool adjacency[max_size][max_size];
    //add for dfs
    void traverse(vertex v,bool visited[],void (*visit)(vertex &));//recursive traverse
public:
    Diagraph();
    void readFromKeyboard();
    void depth_first(void (*visit)(vertex &));
    void bread_first(void (*visit)(vertex &));
};
Diagraph::Diagraph(){
    count=0;
    for(int i=0;i<max_size;i++){
        for(int j=0;j<max_size;j++)
            adjacency[i][j]=false;
    }
}
void Diagraph::readFromKeyboard(){
    int n,m;
    cin>>n>>m;
    count=n;
    int i,j;
    for(int k=0;k<m;k++){
        cin>>i>>j;
        adjacency[i][j]=true;
        adjacency[j][i]=true;
    }
}
void Diagraph::depth_first(void (*visit)(vertex &)){
    bool visited[max_size]={false};
    vertex v;
    for(v=0;v<count;v++){
        traverse(v,visited,visit);
    }
}
void Diagraph::traverse(vertex v,bool visited[],void (*visit)(vertex &)){
    if(visited[v])return;
    visited[v]=true;
    (*visit)(v);
    for(int j=0;j<count;j++){
        if((adjacency[v][j]==true)&&(visited[j]==false))traverse(j,visited,visit);
    }
}
void Diagraph::bread_first(void (*visit)(vertex &)){
    queue<vertex> q;
    bool visited[max_size]={false};
    vertex v=0,w;
    for(v=0;v<count;v++){
        if(!visited[v]){
            q.push(v);
            (*visit)(v);
            visited[v]=true;
            while(!q.empty()){
                w=q.front();
                q.pop();
                for(int j=0;j<count;j++){
                    if(adjacency[w][j]&&!visited[j]){
                        q.push(j);
                        (*visit)(j);
                        visited[j]=true;
                    }
                }
            }
        }
    }
}

void print(vertex &x){
    cout<<x<<" ";
}

int main()
{
    Diagraph mygraph;
    mygraph.readFromKeyboard();
    mygraph.depth_first(print);
    cout<<endl;
    mygraph.bread_first(print);
    return 0;
}

