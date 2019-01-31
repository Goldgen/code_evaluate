#include <stdio.h>
#include <stdlib.h>

int main()
{
     long long int n=0;
    long long int sum=1LL;
    long long int a=0;
    int b=20181111;
    scanf("%lld",&n);
    if((n>0)&&(n<=100))
    {
    for( ; n>0; n--)
    sum*=n;
    a=sum%b;
    printf("%lld",a);
    }
    else if(n==0)
        printf("1");
        

}
