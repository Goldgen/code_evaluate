#include<stdio.h>
int main(void)
{
    int i,j,n,m;
    scanf("%d",&n);
    m=n*4-1;
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(j<i*4-1)printf(" ");
        }
    }
}