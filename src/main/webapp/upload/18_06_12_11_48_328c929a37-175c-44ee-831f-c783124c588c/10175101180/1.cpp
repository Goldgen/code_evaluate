#include <bits/stdc++.h>
using namespace std;

 #include <stdio.h>    
   #include <conio.h>    
   #include <malloc.h>    
   #define MAX_NUM 20    
   typedef struct ArcNode {    
       int adjvex;    
       struct ArcNode *nextarc;    
   }ArcNode;    
   typedef int VertexType;    
   typedef struct VNode {    
       VertexType data;    
       ArcNode *firstarc;    
   }VNode,AdjList[MAX_NUM];    
   void createDgraph(AdjList &g,int n){    
       ArcNode *p,*q;    
       int i,j;    
       for (i=1;i<=n;i++)    
       {    
           g[i].data=i;    
           g[i].firstarc=NULL;    
       }    
       scanf("%d%d",&i,&j);    
       while (i!=-1)    
       {    
           p=(ArcNode *)malloc(sizeof(ArcNode));    
        q=(ArcNode *)malloc(sizeof(ArcNode));    
           p->adjvex=j;    
           p->nextarc=g[i].firstarc;    
           g[i].firstarc=p;    
         q->adjvex=i;    
           q->nextarc=g[j].firstarc;    
           g[j].firstarc=q;       
           scanf("%d%d",&i,&j);    
       }    
   }    
int visited[MAX_NUM]={0};  
void DFS(AdjList G,int v){  
    ArcNode *p;  
    visited[v]=1;  
    printf("%d ",v);  
    p=G[v].firstarc;  
    while(p!=NULL){  
        if(visited[p->adjvex]==0){//若w=p->adjvex 顶点未访问，递归访问它  
            DFS(G,p->adjvex);  
        }  
        p=p->nextarc;//p指向顶点v的下一个邻接点  
    }  
}  
  
void BFS(AdjList G,int v){  
    ArcNode *p;  
    int Qu[20],front,rear;//定义循环队列  
    int visited[20]={0};  
    int w,i;  
    front=rear=0;//初始化队列  
    printf("%d ",v);  
    visited[v]=1;  
    rear=(rear+1)%20;  
    Qu[rear]=v;//v进队  
    while(front!=rear){  
        front=(front+1)%20;  
        w=Qu[front];//出队并赋给w  
        p=G[w].firstarc;//找与顶点w邻接的第一个顶点  
        while(p){  
            if(visited[p->adjvex]==0){//弱当前顶点未被访问  
                printf("%d ",p->adjvex);//访问邻接顶点  
                visited[p->adjvex]=1;  
                rear=(rear+1)%20;//该顶点进队  
                Qu[rear]=p->adjvex;  
            }  
            p=p->nextarc;  
        }  
    }  
}  
 
   int main()    
   {    
       AdjList g;    
       int num;        
       createDgraph(g,num); 
    DFS(g,num);  
    printf("\n");  
    BFS(g,num);  
    printf("\n");  
       return 0;    
   }    