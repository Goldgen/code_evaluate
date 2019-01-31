#include <stdio.h>
#include <stdlib.h>
int prime(int n)
{
    int a,i;
    a=1;
    if(n==1||n==2)
        a=0;
    else
    {
        for(i=2;i<n;++i)
        {
            if(n%i==0)
                a=0;
        }
    }
    return a;
}
int main()
{
    int m;
    scanf("%d",&m);
    if(prime(m)==0)
        printf("It's not a prime number.");
    else
        printf("It is a prime number.");
    return 0;
}