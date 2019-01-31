#include <stdio.h>
int isprime(int a)
{
    if(a==1)
        return 0;
    else if(a==2)
        return 1;
    int i=2;
    for(;i*i<=a;i++)
    {
        if(a%i==0)
            return 0;
    }
    return 1;
}
int main()
{
    int n,i;
    scanf("%d",&n);
    printf("%d",n);
    for(i=1;i<=(n/2);i++)
    {
        if(isprime(i)==1)
        {
            if(isprime(n-i)==1)
                printf("=%d+%d",i,(n-i));
            else
                continue;
        }
        else
            continue;
    }
}