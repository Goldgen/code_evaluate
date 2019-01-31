#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,x,j,z,a=0,k;
    scanf("%d",&n);
    int num[n];
    for(i=0;i<n;i++)
    {
        if(i!=n-1)
            scanf("%d ",&num[i]);
        else
            scanf("%d",&num[i]);
    }
    scanf("%d",&x);
    for(j=0;j<n;j++)
    {
        if(num[j]==x)
        {
            z=j;
            a=1;
            break;
        }
    }
    if(a==0)
        printf("ERROR");
    else
    {
        for(k=0;k<n;k++)
        {
            if(k==z)
                continue;
            else if(z==n-1)
            {
                if(k==z-1)
                    printf("%d",num[k]);
                else
                    printf("%d ",num[k]);
            }
            else
            {
                if(k==n-1)
                    printf("%d",num[k]);
                else
                    printf("%d ",num[k]);
            }
        }
    }
    return 0;
}
