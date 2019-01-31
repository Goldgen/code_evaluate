#include <stdio.h>
#include <stdlib.h>

int main()
{
    int f[1001],n=1,i;
    while(1)
    {
        scanf("%d",&f[n]);
        if(f[n]==0)
        {
            n--;
            break;
        }
        n++;
    }
    for(i=n;i>=1;i--)
    {
        printf("%d",f[i]);
        if(i!=1)
        {
            printf(" ");
        }
    }
    return 0;
}