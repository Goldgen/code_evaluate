#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i,j;
    scanf("%d",&i);
    if(i>0)
        j=1;
    else if(i==0)
        j=0;
    else
        j=-1;
    printf("%d",j);
    return 0;
}


