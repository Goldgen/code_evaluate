#include <stdio.h>
#include <math.h>
int main()
{
   int n,m;
   scanf("%d %d",&n,&m);
   int a,b,c;
   a = n;
   b = 0;//b为位数
   while(a!=0)
   {
       a=a/10;
       b++;
   }
   c = m%b;
   int p,q,t;
   p = n/(int)pow(10.0,(double)c);
   q = n - p*(int)pow(10.0,(double)c);
   t = q*(int)pow(10.0,(double)(b-c));
   printf("%d %d",b,p+t);
   return 0;

}