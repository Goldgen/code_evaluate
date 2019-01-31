#include <stdio.h>

int main()
{
    int n,i;
    unsigned long long result=1UL;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        result*=i;
        result=result%20181111;
    }
    printf("%llu",result);
    return 0;
}
