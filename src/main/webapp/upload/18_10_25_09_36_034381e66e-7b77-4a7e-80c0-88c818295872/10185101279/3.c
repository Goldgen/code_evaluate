#include <stdio.h>
#include<string.h>

int main()
{


    long long n;
    long long a;
    scanf("%lld",&n);
    a=n;
    if(n==0)
    printf("1");
    else{
    while(n>1)
    {
       n--;
       a=a*n;
    }
    printf("%lld",a);}

















    return 0;
}








