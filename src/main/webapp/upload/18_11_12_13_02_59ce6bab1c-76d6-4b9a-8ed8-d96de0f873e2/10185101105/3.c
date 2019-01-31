#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long b,n,i;
    scanf("%lld",&n);
    if(n<=1)
        printf("It's not a prime number.");
    else if(n==2)
        printf("It is a prime number.");
    else
    {
        for(i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
                b=0;
                break;
            }
            else
                b=1;
        }
        if(b)
            printf("It is a prime number.");
        else
            printf("It's not a prime number.");
    }
    return 0;
}
