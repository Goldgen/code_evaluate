#include <stdio.h>
int i=0,time=0,x=0;
int fibonacci(int n)
{ long t;
if(n==0)
return 0;
if (n==2)
{ t=1;
return t;
}
if (n==1)
{ t=1;
return t;
}
t=fibonacci(n-1)+fibonacci(n-2);
return t;
}

void main()
{
    int a;
    scanf("%d",&a);
   printf("%d",fibonacci(a));
}
