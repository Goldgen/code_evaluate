#include <iostream>
#include <queue>
#include <list>
#include <cstring>
using namespace std;
const int max_size=101;
int vis[max_size];
class graph{
public:
    void depth_first() const;
    void breadth_first() const;
    void read();
    graph();
private:
    int cnt;
    bool adjacency[max_size][max_size];
    
};
graph:: graph()
{
    cnt=0;
    memset(adjacency, 0, sizeof(adjacency));
}
void graph:: read()
{
    int n,m,a,b;
    cin>>n>>m;
    cnt=n;
    for(int i=0;i<m;i++){
        cin>>a>>b;
        adjacency[a][b]=adjacency[b][a]=1;
    }
}
void graph:: depth_first() const
{
    for(int i=0;i<cnt;i++){
        if(!vis[i]){
            vis[i]=1;
            cout<<i<<' ';
            for(int j=0;j<cnt;j++)
                if(adjacency[i][j]&&!vis[j]){
                    depth_first();
                }
        }
    }
}
void graph:: breadth_first() const
{
    queue<int> q;
    memset(vis, 0, sizeof(vis));
    for(int i=0;i<cnt;i++){
        if(!vis[i]){
            q.push(i);
            vis[i]=1;
            while(!q.empty()){
                int cur=q.front();
                vis[cur]=1;
                for(int j=0;j<cnt;j++)
                    if(adjacency[cur][j]&&!vis[j]){
                        q.push(j);
                        vis[j]=1;
                    }
                cout<<q.front()<<' ';
                q.pop();
            }
        }
    }
}
int main()
{
    graph g;
    g.read();
    g.depth_first();
    cout<<endl;
    g.breadth_first();
    cout<<endl;
    return 0;
}
