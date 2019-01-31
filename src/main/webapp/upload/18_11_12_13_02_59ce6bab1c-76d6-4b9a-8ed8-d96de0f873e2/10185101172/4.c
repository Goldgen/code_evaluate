#include <stdio.h>
#include <math.h>

long long int change(long long int n)
{
    long long int i,j,sum=0;
for(i=0;n>0;n/=10,i++)
{
    j=n%10;
    sum+=j*pow(8,i);
}
return sum;
}

int main()
{long long int n;
scanf("%lld",&n);
printf("%lld",change(n));
 return 0;
   }
