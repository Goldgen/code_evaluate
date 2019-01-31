#include <stdio.h>
#include <stdlib.h>

void sell(char type,int num,int w,int h,int l);

void main()
{   char type;
    int num,w,h,l;
    scanf("%c %d %d %d %d",&type,&num,&w,&h,&l);
    sell(char type,int num,int w,int h,int l);
    return ;
}

void sell(char type,int num,int w,int h,int l)
{double cost;
while ((type==getchar())!='T')
{
    if(type=='P')
    {
        cost=0.89*num*w*h*l;
        printf("%d %d*%d*%d Pine,Cost:$%d",num,w,h,l,cost);
    }
    if(type=='F')
    {
        cost=1.09*num*w*h*l;
        printf("%d %d*%d*%d Fire,Cost:$%d",num,w,h,l,cost);
    }
    if(type=='C')
    {
        cost=2.26*num*w*h*l;
        printf("%d %d*%d*%d Cedar,Cost:$%d",num,w,h,l,cost);
    }
    if(type=='M')
    {
        cost=4.50*num*w*h*l;
        printf("%d %d*%d*%d Maple,Cost:$%d",num,w,h,l,cost);
    }
    if(type=='O')
    {
        cost=3.10*num*w*h*l;
        printf("%d %d*%d*%d Oak,Cost:$%d",num,w,h,l,cost);
    }
    return ;
}
}
