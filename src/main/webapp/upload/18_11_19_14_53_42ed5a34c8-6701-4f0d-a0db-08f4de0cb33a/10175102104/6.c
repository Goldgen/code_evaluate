#include<stdio.h>

int main()
{
    int n,list[10000],i;
    scanf("%d",&n);
    list[1]=1;list[2]=1;
    if(n==1||n==2)
    {
        printf("1");
    }
    else
    {
        for(i=3;i<=n;i++)
        {
            list[i]=list[i-1]+list[i-2];
        }
    }
    printf("%d",list[n]);
    return 0;
}