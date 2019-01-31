#include <stdio.h>
int fib(int n){
int m;
if(n==0)
 m=0;
else if(n==1)
 m=1;
else
 m=fib(n-1)+fib(n-2);
return m;
}
int main()
{int a;
 scanf("%d",&a);
printf("%d",fib(a));
return 0;
}