#include <stdio.h>
#include <stdlib.h>

int main()
{
    int b,i,j;
    scanf("%d",&b);
    for(i=1;i<=b;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(" %d * %d = %2d",j,i,j*i);
        }
        if(i!=b)
            printf("\n");
    }
    return 0;
}

