#include<stdio.h>
#include<stdlib.h>
int gcd(int a,int b)
{ return b>0?gcd(b,a%b):a;
}
int main()
{ int m,n;
scanf("%d%d",&m,&n);
printf("%d",gcd(m,n));
return 0;
}
