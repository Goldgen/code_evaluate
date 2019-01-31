#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a,b,c,m;
    scanf("%d",&m);
    for(a=1;a<=m;a++)
    {
        for(b=2;b<=m-a+1;b++)
            printf(" ");
        for(c=1;c<=2*a-1;c++)
            printf("%c",64+a);
        printf("\n");
    }
    for(a=1;a<=m-1;a++)
    {
        for(b=2;b<=a+1;b++)
            printf(" ");
        for(c=1;c<=2*(m-a)-1;c++)
            printf("%c",64+a+m);
    if(a<m-1)
        printf("\n");
    else return 0;
            }
    return 0;
}

