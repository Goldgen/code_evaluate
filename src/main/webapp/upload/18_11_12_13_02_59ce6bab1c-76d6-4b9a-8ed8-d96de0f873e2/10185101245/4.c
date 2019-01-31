#include <stdio.h>
#include <stdlib.h>
#include<math.h>
long long int f(long long int x)
{

 long long int i=0;
 long long int j=0;
 long long int sum=0;
 while(x>0)
{
    i=x%10;
    sum+=i*pow(8,j);
    j++;
    x/=10;

}
  return sum;
 }


int main()
{
     long long int n;
    scanf("%lld",&n);
    printf("%lld",f(n));
}