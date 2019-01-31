#include<stdio.h>
#include<stdlib.h>
int main()
{ int a,b;
  int sum1=0,sum2=0;
 for(a=2,b=1;a<=100&&b<101;a+=2,b+=2)
 { sum1=sum1+a;//偶数和
  sum2=sum2+b;//奇数和
 }
 printf("%d %d",sum2,sum1);
 return 0;
}