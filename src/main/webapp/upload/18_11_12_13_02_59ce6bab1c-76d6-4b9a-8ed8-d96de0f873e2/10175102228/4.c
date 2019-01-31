#include<stdio.h>
#include<stdlib.h>
long int todecimal(long int x )
{ long int sum=0;
   long int i,d=1;
 while(x!=0)
 { i=x%10;
   x=(x-i)/10;
  sum=sum+i*d;
   d*=8;
 }
return sum;
}
int main()
{long int n;
 scanf("%ld",&n);
 printf("%ld",todecimal(n));
 return 0;
}