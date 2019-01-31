#include <stdio.h>
#include <stdlib.h>

#define Maxvertex 30
#define False 0
#define True 1
int count = 1;
typedef struct node
{
    int adjvertex; //序号，存放定点下标
    int info;
    struct node *next;
}Node;

typedef struct vnode //顶点节点
{
    char vertex[3];
    Node *firstedge;
}Vnode;
typedef struct
{
    Vnode adjlist[Maxvertex]; //邻接表
    int vnum,egnum; //定点数和边数
}Algragh;
Algragh Creat()
{
    Algragh G;
    int i,j,k;
    Node *p;
    printf("Input vnum and egnum:\n");
    scanf("%d %d",&(G.vnum),&(G.egnum));
    for(i=0;j<G.vnum;i++)
    {
        getchar();
        printf("Input:\n");
        scanf("%s",&G.adjlist[i].vertex);
        G.adjlist[i].firstedge = NULL; //表节点 头节点均设为空

    }
    for(k=0;k<G.egnum;k++)
    {
        getchar();
        printf("Input edge:\n");
        scanf("%d %d",&i,&j);
        p = (Node*)malloc(sizeof(Node));
        p->adjvertex = j; //邻接点的序号为j
        p->next = G.adjlist[i].firstedge;
        G.adjlist[i].firstedge = p;
    }
    return (G);

}

int visited[Maxvertex];
void DFS(Algragh G,int x) //深度
{
    Node *p;
    int w;
    count++;
    visited[x] = True;  //访问第v个顶点，并把位置标志为0
    for(p=G.adjlist[x].firstedge;p!=NULL;p = p->next)
    {
        w=p->adjvertex;
        if(visited[x]!=1)
            DFS(G,w);
    }
}

void Dfstrave(Algragh G)
{
    int v;
    for(v=0;v<G.vnum;v++)
        if(visited[v]!=1)
        DFS(G,v);
}




int main()
{
    Algragh A;
    A = Creat();
    Dfstrave(A);
    getch();

        return 0;
}
