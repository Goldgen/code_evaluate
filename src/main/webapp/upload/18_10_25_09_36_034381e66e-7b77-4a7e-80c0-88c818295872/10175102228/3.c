#include<stdio.h>
#include<stdlib.h>
int main()
{ int n,i;
scanf("%d",&n);
 long long  fac=1;
 for( i=1;i<=n;i++)
 { fac=fac*i;

 }
 printf("%lld",fac);
 return 0;
}
