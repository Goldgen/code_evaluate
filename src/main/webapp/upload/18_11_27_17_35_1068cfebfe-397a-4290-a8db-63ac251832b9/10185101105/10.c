#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,k,l,max;
    scanf("%d",&n);
    int num[n];
    for(i=0;i<n;i++)
    {
        if(i!=n-1)
            scanf("%d ",&num[i]);
        else
            scanf("%d",&num[i]);
    }
    for(k=n-1;k>0;k--)
    {
    for(j=0;j<k;j++)
    {
        if(num[j]>num[j+1])
        {
            max=num[j];
            num[j]=num[j+1];
            num[j+1]=max;
        }
    }
    }
    for(l=0;l<n;l++)
    {
       if(l==n-1)
           printf("%d",num[n-1]);
       else
           printf("%d ",num[l]);
    }
    return 0;
}
