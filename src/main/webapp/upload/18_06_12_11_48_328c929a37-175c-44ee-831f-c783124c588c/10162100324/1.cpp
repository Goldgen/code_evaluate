#include <iostream>
#include <queue>
#include <list>
#include <cstring>
using namespace std;
const int max_size=30;
bool visit[max_size];
class Digraph{
public:
    Digraph();
    void depth_first() const;
    void breadth_first() const;
    void read();
private:
    int count;
    bool adjacency[max_size][max_size];
};

Digraph::Digraph()
{
    count=0;
    memset(adjacency,0,sizeof(adjacency));
}

void Digraph::read()
{
    int i,n,m,s,t;
    cin>>n>>m;
    count=n;
    for(i=0;i<m;i++)
    {cin>>s>>t;
    adjacency[s][t]=adjacency[t][s]=true;
    }

}

void Digraph::depth_first() const
{
    for(int i=0;i<count;i++)
    {
        if(!visit[i])
        {
            visit[i]=true;
            cout<<i<<" ";
            for(int j=0;j<count;j++)
                if(adjacency[i][j]&&!visit[j])
                depth_first();
        }

    }
}

void Digraph::breadth_first() const
{
    memset(visit,0,sizeof(visit));
    queue<int> s;
    for(int i=0;i<count;i++)
    {
        if(!visit[i])
        {

            s.push(i);
            while(!s.empty())
            {
                int t=s.front();
                visit[t]=true;
                for(int j=0;j<count;j++)
                    if(adjacency[t][j]&&!visit[j])
                {
                    s.push(j);
                    visit[j]=true;
                }
                cout<<s.front()<<" ";
                s.pop();
            }

        }
    }

}
int main()
{
    Digraph mygraph;
    mygraph.read();

    mygraph.depth_first();
    cout<<endl;
    mygraph.breadth_first();
    cout<<endl;
    return 0;
}
