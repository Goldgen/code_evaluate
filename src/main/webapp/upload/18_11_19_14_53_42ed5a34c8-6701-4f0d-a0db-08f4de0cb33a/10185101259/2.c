#include <stdio.h>
#include <stdlib.h>
long long sum(long long num){
   if(num<10)
    return num;
    else
    return num%10+sum(num/10);
   }
int main()
{
   long long num;
   scanf("%lld",&num);
   printf("%lld",sum(num));
   return 0;

}
