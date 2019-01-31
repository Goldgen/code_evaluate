#include <stdio.h>

int fun(int n)
{
    int i=2, j=0;
    for(i=2; i<=n-1; i++)
    {
        if(n%i==0)
           j++;
    }
    if(j==0)
        printf("It is a prime number.");
    else
        printf("It's not a prime number.");
}

int main()
{
    int n;
    scanf("%d", &n);
    if(n==1)
       printf("It's not a prime number.");
    else
        fun(n);
}
