#include<stdio.h>

int main(void)
  {
   long long a=1;int i,j;
   for(i=2;i<=10;i++){
    a*=i;
   }
   printf("%lld\n",a);
   for(j=11;j<=20;j++){
    a*=j;
   }printf("%lld",a);
  return 0;}