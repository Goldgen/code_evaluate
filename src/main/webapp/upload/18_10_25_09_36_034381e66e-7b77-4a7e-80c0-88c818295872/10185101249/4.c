#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a,b;
    scanf("%d",&n);
    if(n>=4&&n<=10)
    {
    for(a=1;a<=n;a++)
    {
        if(a==1)
        {
            for(b=1;b<=n;b++)
                printf("*");
            printf("\n");
        }
        else if(a==n)
        {
             for(b=1;b<=n;b++)
                printf("*");
        }
        else
        {
            printf("*");
            for(b=1;b<=n-2;b++)
                printf(" ");
            printf("*\n");
         }
    }
    }
    return 0;
}
