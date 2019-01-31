#include <stdio.h>
#include <stdlib.h>

void furow(int a)
    {
        for(int t = 1;t <= a;t++)
            printf("%2d *%2d =%3d",t,a,a*t);
    }

int main()
{
    int n = 0;
    scanf("%d",&n);
     for(int i=1;i<=n;i++)
    {

        furow(i);
        if(i < n)
            printf("\n");
    }
    return 0;
}