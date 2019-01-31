#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void rotate(int* p, int n, int m)
{
    int b,j,k;
    int number[12];
    for(j=m;j<n;j++)
    {
        number[j]=*p;
        p++;
    }
    for(k=0;k<m;k++)
    {
        number[k]=*p;
        p++;
    }
    p--;
    for(b=n-1;b>=0;b--)
    {
        *p=number[b];
        p--;
    }
}
int main()
{
    int n,m,i,a;
    int num[12];
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    {
       scanf("%d",&num[i]);
    }
    rotate(num,n,m);
    for(a=0;a<n;a++)
    {
        if(a==0)
            printf("%d",num[a]);
        else
            printf(" %d",num[a]);
    }
}
