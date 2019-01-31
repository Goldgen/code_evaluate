#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i,j,k;
    scanf("%d %d %d",&i,&j,&k);
    if(j>i)
        i=j;
    if(k>i)
        i=k;
    printf("%d",i);
    return 0;
}