#include<stdio.h>

int main()
{
    int a,i;
    scanf("%d\n",&a);
    int data[a];
    for(i=0;i<=a-1;i++)
    {
        if(i==a-1) scanf("%d\n",&data[i]);
        else scanf("%d ",&data[i]);
    }
    int x,y,b[a+1];
    scanf("%d %d",&x,&y);
    for(i=0;i<x;i++)
    {
        b[i]=data[i];
    }
    b[x]=y;
    for(i=x+1;i<=a+1;i++)
    {
        b[i]=data[i-1];
    }
    for(i=0;i<=a;i++)
    {
        if(i==a) printf("%d",b[i]);
        else printf("%d ",b[i]);
    }
    return 0;
}

