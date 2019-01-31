#include <stdio.h>
#define N 20

int main()
{
    int n,m,i,x,list[20],temp,t[20];
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%d",&list[i]);
    }
    for(i=0;i<n;i++)
    {
        temp=list[i];
        x=i+m;
        if(x>n-1)
        {
            t[x-n]=temp;
        }
        else
        {
            t[x]=temp;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d",t[i]);
        if(i!=n-1)
        {
            printf(" ");
        }
    }
    return 0;
}
