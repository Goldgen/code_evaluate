#include <stdio.h>

int main()
{
    int n,i=1;
    unsigned long long result=1;
    scanf("%d",&n);
    while(i<=n){
        result*=i;
        i++;
    }
    printf("%llu",result);
    return 0;
}