#include <stdio.h>
int prime(int n)
{
    int flag=1;
    for(int i=2;i<n/2+1;i++)
    {
        if(n%i==0)
        {
            flag=0;
            break;
        }
    }
    return flag;
}
int main()
{
    int n;
    scanf("%d",&n);
    if(prime(n))
        printf("It is a prime number.");
    else
    printf("It's not a prime number.");
}