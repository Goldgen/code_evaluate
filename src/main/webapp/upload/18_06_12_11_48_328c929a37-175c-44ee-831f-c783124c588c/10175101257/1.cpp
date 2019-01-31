#include <bits/stdc++.h>

using namespace std;
#define max_size 30

class Digraph{
public:
    Digraph();
    void depth_first(void(*visit)(int))const;
    void traverse(int &v,bool visited[],void(*visit)(int))const;
    void breath_first(void(*visit)(int))const;

    int count;
    bool neighbors[max_size][max_size];
};

Digraph::Digraph(){
    count=0;
    for(int i=0;i<max_size;++i)
        for(int j=0;j<max_size;++j)
            neighbors[i][j]=false;
}

void Digraph::depth_first(void(*visit)(int))const{
    bool visited[count];
    int v;
    for(v=0;v<count;++v)
        visited[v]=false;
    for(v=0;v<count;++v)
        if(!visited[v])
            traverse(v,visited,visit);
}
void Digraph::traverse(int &v,bool visited[],void(*visit)(int))const{
    int w;
    visited[v]=true;
    visit(v);
    for(w=0;w<count;++w)
        if(!visited[w])
            if(neighbors[v][w])
                traverse(w,visited,visit);
}
void Digraph::breath_first(void(*visit)(int ))const{
    queue<int> q;
    bool visited[count];
    int v,w,x;
    for(v=0;v<count;++v)
        visited[v]=false;
    for(v=0;v<count;++v){
        if(!visited[v]){
            q.push(v);
            while(!q.empty()){
                w=q.front();
                if(!visited[w]){
                    visited[w]=true;
                    visit(w);
                    for(x=w;x<count;++x)
                        if(neighbors[w][x])
                            q.push(x);
                }
                q.pop();
            }
        }
    }
}

void visit(int a){
    printf("%d ",a);
}

int main()
{
    int m,n;
    scanf("%d %d",&n,&m);
    Digraph mygraph;
    mygraph.count=n;
    //printf("%d\n",mygraph.count);
    int a,b;
    for(int i=0;i<m;++i){
        scanf("%d %d",&a,&b);
        mygraph.neighbors[a][b]=true;
        mygraph.neighbors[b][a]=true;
    }
    mygraph.depth_first(visit);
    printf("\n");
    mygraph.breath_first(visit);
    return 0;
}
