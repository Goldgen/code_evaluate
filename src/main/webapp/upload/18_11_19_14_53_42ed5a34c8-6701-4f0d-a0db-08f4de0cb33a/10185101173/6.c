#include <stdio.h>
#include <stdlib.h>

long int fibonacci(int n)
{
    static int a=1,b=1,i=0;

    if(n<=2)
        return(i?a:b);
    else
    {if(i)
        {
            b+=a;
            --i;
        }
    else
        {
            a+=b;
            ++i;
        }
        return fibonacci(n-1);}
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("%ld",n?fibonacci(n):0);
    return 0;
}


