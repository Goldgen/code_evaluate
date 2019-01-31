#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    int vis[1000];
    int cnt=0;
    int m=0;
    while(a)
    {
        b=a%2;
        a=a/2;
        vis[++cnt]=b;
    }
    for(int i=1;i<=cnt;i++)
    {
        if(vis[i]==1)
            m++;
    }
    printf("%d",m);
}