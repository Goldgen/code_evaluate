#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    long long sum=1;
    while(n>0){
        sum = sum*n;
        n--;
    }
    printf("%lld",sum);
    return 0;
}
