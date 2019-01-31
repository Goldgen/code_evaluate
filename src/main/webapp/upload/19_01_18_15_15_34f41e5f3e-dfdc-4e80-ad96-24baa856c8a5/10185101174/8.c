#include <stdio.h>
#include <stdlib.h>

int main()
{
      int n;//n表示这个数
 int m=0;
 int a=0;
 int M=0;
 int sum=0;
 int d=0;
 int c=1;
 int e=0;

 scanf("%d %d",&n,&m);
 e=n;
 while(e!=0)
 {
     e=e/10;
     a++;
 }
 M=m%a;
 for(int b=0;b<M;b++)
 {
     d=n%10;
     n=n/10;
     sum+=(d*c);
     c*=10;
 }
 for(int i=0;i<a-M;i++)
 {
     sum*=10;
 }
 sum+=n;
 printf("%d %d",a,sum);
}