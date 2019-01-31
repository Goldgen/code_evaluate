#include <stdio.h>
#include <math.h>
int test(int n)
{
        for(int t=2;t<=sqrt(n); ++t){
        if(n%t==0)
        return 0;
        }
        return 1;
}
int main()
{
    int a;
    scanf("%d",&a);
    if(test(a)||a==2)
    printf("It is a prime number.");
    else
    printf("It's not a prime number.");
    return 0;
}