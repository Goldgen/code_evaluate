#include<stdio.h>
int main()
{
int n;
long long m=1;
scanf("%d",&n);
for(;n>0&&n<20;n--)
    m=m*n;
printf("%lld",m);

  return 0;

  }
