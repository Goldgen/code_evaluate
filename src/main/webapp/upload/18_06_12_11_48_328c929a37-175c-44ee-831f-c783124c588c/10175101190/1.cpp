#include <bits/stdc++.h>
#define max_size 50
using namespace std;

class graph {
public:
    void initi();
    void depth_first() ;
    graph();
    void breadth_first();
private:
  int count=0; // number of vertices, at most max size
  bool adjacency[max_size][max_size];
  void tans(int loc);
   bool visited[max_size];
};

void graph::initi()
{
    int num,tim;
    cin>>num>>tim;
    count=num;
    int x,y;
    for(int i=0;i<tim;i++)
    {
        cin>>x>>y;
        adjacency[x][y]=true;
        adjacency[y][x]=true;
    }
}
graph::graph()
{
     for(int i=0;i<max_size;i++)
        for(int j=0;j<max_size;j++)
               adjacency[i][j]=false;
}
void graph :: depth_first()
{

	for(int i=0;i<count;i++)
        visited[i]=false;

	for(int i=0;i<count;i++)
    {
        if(!visited[i])
        {
            visited[i]=true;
            tans(i);
        }

    }
    cout<<endl;
}
void graph::tans(int loc){
    cout<<loc<<" ";
    for(int i=0;i<count;i++)
    {

            if((!visited[i])&&(adjacency[loc][i]==true))
            {
                visited[i]=true;
                tans(i);
            }

    }

}
void graph:: breadth_first()
{
	queue<int> q;
	for(int i=0;i<count;i++)
        visited[i]=false;
	for (int i=0;i<count;i++)
		if (!visited[i]) {
            visited[i]=true;
			q.push(i);
			while (!q.empty()){
				int fro=q.front();
                cout<<fro<<" ";
                for(int i=0;i<count;i++)
                {
                    if((!visited[i])&&(adjacency[fro][i]==true))
                        {
                            visited[i]=true;
                            q.push(i);
                        }

                }
				q.pop();
			}
		}
}

int main()
{
    graph g;
    g.initi();
    g.depth_first();
    g.breadth_first();
    return 0;
}
