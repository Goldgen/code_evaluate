#include <stdio.h>
#include <stdlib.h>

long long int transmission(long long int num);
int main()
{
    long long int num;
    scanf("%lld",&num);
    printf("%lld",transmission(num));
    return 0;
}
long long int transmission(long long int num){
    int i,j;long long n; long long int result=0;
    result+=(num%10)*1;
    num/=10;
    for(i=1,n=1;num>0;i++){
        for(j=1;j<=i;j++){
            n*=8;
        }
        result+=n*(num%10);
        num/=10;
        n=1;
    }
    return result;
}
