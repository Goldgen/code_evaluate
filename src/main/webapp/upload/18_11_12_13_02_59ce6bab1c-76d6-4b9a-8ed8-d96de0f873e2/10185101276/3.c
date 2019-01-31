#include <stdio.h>
#include <stdlib.h>
int a();
int main()
{
     int b;
     scanf("%d",&b);
     b=a(b);
     if(b==1)
     printf("It's not a prime number.");
     else printf("It is a prime number.");
     return 0;
}
int a(int b)
{
    long long int i=2;
    int co=0;
    for (;i*i<=b;i++)
    {
        int c;
        c=b/i;
        if(b-c*i==0)co=1;
    }
    return co;
}
