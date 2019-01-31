#include<stdio.h>
int main()
{
    int i,j,k,m,n,a,b,c,d;
    scanf("%d",&n);
    k=(n+1)/2;
    a=k-2;
    d=1;
    for(i=0;i<(k-1);i++)
    {
        printf(" ");
    }
    printf("*\n");
    for(j=0;j<(k-2);j++)
    {
        for(m=j;m<a;m++)
        {
            printf(" ");
        }
        printf("*");
        for(b=0;b<d;b++)
        {
            printf(" ");
        }
        d=d+2;
        printf("*\n");
    }
    for(c=0;c<n;c++)
    {printf("*");}
    return 0;
}
