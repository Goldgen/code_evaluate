#include<stdio.h>
int Fibonacci(int n)
{if(n==1||n==2)
		return 1;
		return Fibonacci(n-1)+Fibonacci(n-2);
}
int main()
{int m;
scanf("%d",&m);
if(m==0)
    printf("0");
else
    printf("%d",Fibonacci(m));
}