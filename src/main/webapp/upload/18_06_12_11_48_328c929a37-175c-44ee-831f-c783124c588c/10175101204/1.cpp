#include <bits/stdc++.h>
using namespace std;
const int MAX_SIZE = 30;
typedef int Vertex;
class Digraph {
private:
  int count;
  bool adjacency[MAX_SIZE][MAX_SIZE];
  bool visited[MAX_SIZE];
  void renew(){
      for(int i=0;i<MAX_SIZE;i++){
         visited[i]=false;
      }
  }
  void dep(int,void (*visit)(Vertex &));
  void bre(int,void (*visit)(Vertex &));
public:
  Digraph();
  void show();
  void depth_first(void (*visit)(Vertex &)) ;
  void breadth_first(void (*visit)(Vertex &)) ;
  void readFromKeyboard(int);
  void insert(int starts,int ends);
};
void Digraph::show(){
    for(int i=0;i<MAX_SIZE;i++){
        for(int j=0;j<MAX_SIZE;j++){
            if(adjacency[i][j]==true)cout<<1<<" ";
            else cout<<0<<" ";
        }
        cout<<endl;
    }
}
void print(Vertex & a){
    cout<<a<<" ";
}
Digraph::Digraph(){
    renew();
    for(int i=0;i<MAX_SIZE;i++){
        for(int j=0;j<MAX_SIZE;j++)
            adjacency[i][j]=false;
    }
}
void Digraph::insert(int starts,int ends){
    adjacency[starts][ends]=true;
    adjacency[ends][starts]=true;
}
void Digraph::readFromKeyboard(int t){
    int a,b;
    while(t--){
        cin>>a>>b;insert(a,b);
    }
}
void Digraph::depth_first(void (*visit)(Vertex &)){
    for(int i=0;i<MAX_SIZE;i++){
        for(int j=0;j<MAX_SIZE;j++)
        if(adjacency[i][j]){
            if(visited[i]==false){(* visit)(i);visited[i]=true;}
            if(visited[j]==false){
            visited[j]=true;
            dep(j,visit);
            }
        }

    }
    cout<<endl;
    renew();
}
void Digraph::dep(int a,void (*visit)(Vertex &)){
    (* visit)(a);
    for(int i=0;i<MAX_SIZE;i++){
        if(adjacency[a][i]==true){
            if(visited[i]==false){
                visited[i]=true;
                dep(i,visit);}
        }
    }
}
void Digraph::breadth_first(void (*visit)(Vertex &)){
    for(int i=0;i<MAX_SIZE;i++){
        for(int j=0;j<MAX_SIZE;j++)
        if(adjacency[i][j]){
            if(visited[i]==false){
                visited[i]=true;
                bre(i,visit);
            }
        }

    }
    cout<<endl;
    renew();
}
void Digraph::bre(int a,void (*visit)(Vertex &)){
    queue<int>q;
    q.push(a);
    while(!q.empty()){
        a=q.front();
        (* visit)(a);
        q.pop();
        for(int i=0;i<MAX_SIZE;i++){
            if(adjacency[a][i]){
                if(visited[i]==false)
                {visited[i]=true;
                q.push(i);}
            }
        }
    }

}
int main()
{
    int a,b;
    Digraph d=Digraph();
    cin>>a>>b;
    d.readFromKeyboard(b);
    d.depth_first(print);
    d.breadth_first(print);

    return 0;
}
