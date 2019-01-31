#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=0;
    int array[40];
    while(scanf("%d",&array[n])&&(array[n]>0))
    {
        n++;
    }
    for( ; n>0; n--)
    {
        if(n==1)
            printf("%d",array[n-1]);
        else
            printf("%d ",array[n-1]);
    }
}
