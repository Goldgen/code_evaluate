#include <stdio.h>
#include<string.h>
int main()
{
int n,m;
scanf("%d %d",&n,&m);
int num[n],num1[n],x=0;
for(int i=0;i<n;i++)
    scanf("%d",&num[i]);
for(int j=n-m;j<n;j++)
{
   num1[x]=num[j];
   x++;
}
for(int u=0;u<n-m;u++)
{
    num1[x]=num[u];
    x++;
}
for(int y=0;y<x;y++)
        {
            printf("%d",num1[y]);
            if(y!=x-1)
            printf(" ");
}


    return 0;
}

