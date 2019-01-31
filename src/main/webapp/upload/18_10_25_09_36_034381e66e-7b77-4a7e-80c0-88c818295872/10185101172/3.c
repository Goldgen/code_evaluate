#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int sum=1;
    int j,N=0;
    int i=1;
    scanf("%d",&N);
    j=N;
    while(i<=j)
       {
        sum*=N;
        i++;
        N--;
       }
    printf("%ld",sum);
    return 0;
}
