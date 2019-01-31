#include <stdio.h>
#include <math.h>
int main()
{
    int n,m,num;
    scanf("%d",&n);
    int arry[n+1];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arry[i]);
    }
    scanf("%d %d",&m,&num);
    for(int i=n+1;i>m;i--)
    {
        arry[i]=arry[i-1];
    }
    arry[m]=num;
    for(int i=0;i<n+1;i++)
    {
        printf("%d",arry[i]);
        if (i!=n)
        printf(" ");
    }

    return 0;
}