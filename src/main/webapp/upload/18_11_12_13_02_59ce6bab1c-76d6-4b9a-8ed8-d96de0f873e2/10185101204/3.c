#include <stdio.h>
#include <math.h>
int prime(int);
int main()
{int n;
scanf("%d",&n);
if(n==1)
printf("It's not a prime number.");
 else if(prime(n))
    printf("It is a prime number.");
else  printf("It's not a prime number.");
}
prime(int m)
{for(int j=2;j<sqrt(m);j++)
    {if(m%j==0)
    {return 0;}}
return 1;}