#include <stdio.h>
#include <math.h>

void prime(int a){
    int i,j;
    j=0;
    for(i=1;i<=sqrt(a);++i)
    {
        if(a%i==0)++j;

    }
    if(j==1&&a!=1)
        printf("It is a prime number.");
    else
        printf("It's not a prime number.");
    return;
}
int main()
{
    int b;
    scanf("%d",&b);
    prime(b);
    return 0;
}
