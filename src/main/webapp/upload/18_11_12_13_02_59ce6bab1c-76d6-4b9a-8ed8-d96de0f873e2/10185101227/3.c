#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
 int su (int a)
 {
     int i,n=0;
     bool s;
     for (i=2;i<=(int)sqrt(a);++i)
        if (a%i==0) ++n;
     if (n==0&&a!=1) s=1;
     else s=0;
     return s;
 }
int main()
{
 int n;
 scanf("%d",&n);
  if (su(n)==1) printf("It is a prime number.");
  else printf("It's not a prime number.");
 return 0;
}
