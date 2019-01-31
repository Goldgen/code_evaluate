#include<stdio.h>
#include<math.h>

int tran(long long int);

int main (void)
{
    long long int n = 0;
    scanf("%lld",&n);
    printf("%d",tran(n));

}

int tran(long long int a)
{
    int b = 0;
    int i = 0;
    for(;a>0;i++)
    {
        b += a%10 * pow(8,i);
        a /= 10;
    }
    return b;
}
