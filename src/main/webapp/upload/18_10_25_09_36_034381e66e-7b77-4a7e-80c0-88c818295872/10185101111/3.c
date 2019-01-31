#include <stdio.h>
#include <math.h>
int main()
{
    unsigned long long N,cont=1;
    scanf("%llu",&N);
    for(int n=1;n<=N;n++){
        cont*=n;
    }
    printf("%llu",cont);
}