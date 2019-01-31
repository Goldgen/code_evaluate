#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long n,i,x,j,z=0,k,a=0;
    scanf("%lld",&n);
    long long num[n],rec[n];
    for(i=0;i<n;i++)
    {
        if(i!=n-1)
            scanf("%lld ",&num[i]);
        else
            scanf("%lld",&num[i]);
    }
    scanf("%lld",&x);
    for(j=0;j<n;j++)
    {
        if(num[j]==x)
        {
            rec[a]=j;
            z+=1;
            a++;
        }
    }
    if(z==0)
        printf("ERROR");
    else
    {
        for(k=0;k<z;k++)
        {
            if(k==z)
                printf("%lld",rec[k]);
            else
                printf("%lld ",rec[k]);
        }
    }
    return 0;
}

