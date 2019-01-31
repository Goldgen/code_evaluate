#include <stdio.h>
#include <math.h>
int main()
{
    int n,m,q;
    scanf("%d",&n);
    q=n;
    int arry[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arry[i]);
    }
    for(int j=0;j<n-1;j++)
    {

    for(int i=0;i<n-1;i++)
    {
        if(arry[i]>arry[i+1])
        {
            m=arry[i+1];
            arry[i+1]=arry[i];
            arry[i]=m;
        }

    }
    }
    for(int i=0;i<q;i++)
    {
        printf("%d",arry[i]);
        if(i<n-1)
            printf(" ");
    }
    return 0;
}
