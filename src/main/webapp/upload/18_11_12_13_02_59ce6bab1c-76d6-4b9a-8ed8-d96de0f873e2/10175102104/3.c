#include<stdio.h>
#include<stdlib.h>

int GCD(int n)
{
    int x;
    for(x=2;x<n;x++)
    {
        if(n%x==0)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int n,result;
    scanf("%d",&n);
    if(n==1&&n==2)
    {
        printf("It's not a prime number.");
    }
    result=GCD(n);
    if(result==1)
    {
        printf("It's not a prime number.");
    }
    else
    {
        printf("It is a prime number.");
    }
    return 0;
}
