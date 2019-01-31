#include <stdio.h>
#include <stdlib.h>
long long A(int n){
if((n==1)||(n==2)) return 1;
if(n>2) return A(n-1)+A(n-2);
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%lld",A(n));
    return 0;
}

