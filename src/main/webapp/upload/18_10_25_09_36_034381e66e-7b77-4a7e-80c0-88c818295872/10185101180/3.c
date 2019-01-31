#include <stdio.h>
int main()
{
    long n,N;
    scanf("%ld",&n);
    if(n<20)
    {
    N=n;
    while(n>1L)
    {
        n=n-1L;
        N=N*n;
    }
    printf("%ld",N);
    }
    else
        printf("ERROR");
    return 0;
}
