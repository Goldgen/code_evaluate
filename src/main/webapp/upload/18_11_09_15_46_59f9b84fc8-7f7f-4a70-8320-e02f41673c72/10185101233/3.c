#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n;
    int i=1;
    char a;
    scanf("%d",&n);
    while(i<2*n-1)
    {
        if(i<=n)
        {
            for(int j=1;j<=n-i;j++)
            printf(" ");
            for(int k=0;k<2*i-1;k++)
                {
                    a=64+i;
                    printf("%c",a);
                }
        }
        if(i>n)
        {
            for(int j=1;j<=i-n;j++)
            printf(" ");
            for(int k=1;k<4*n-2*i;k++)
                {
                    a=64+i;
                    printf("%c",a);
                }
        }
        printf("\n");
        i++;
    }
    for(int j=1;j<=n-1;j++)
        printf(" ");
        a=64+i;
        printf("%c",a);
    return 0;
}
