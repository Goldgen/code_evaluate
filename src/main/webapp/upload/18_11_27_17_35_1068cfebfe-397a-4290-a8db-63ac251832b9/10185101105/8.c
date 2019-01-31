#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,max,a=1,l,b=0;
    scanf("%d",&n);
    int num[n],exa[n];
    for(i=0;i<n;i++)
    {
        if(i!=n-1)
            scanf("%d ",&num[i]);
        else
            scanf("%d",&num[i]);
    }
    for(j=1;j<n;j++)
    {
        if(num[j-1]==num[j])
            a++;
        else
        {
            exa[b]=a;
            b++;
            a=1;
        }
    }
    max=exa[0];
    for(l=1;l<=b;l++)
    {
        if(exa[l]>max)
            max=exa[l];
    }
    printf("%d",max);
    return 0;
}
