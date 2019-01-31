#include<stdio.h>
int fibonacci(int n)
{
    int num=0;
    if(n>1)
    {
        num=fibonacci(n-1)+fibonacci(n-2);
    }
    else if(n==1)
        num+=1;
    else if(n==0)
    {
        num+=0;
    }
    return num;
}
int main()
{
	int n;
	scanf("%d",&n);
	if(n==0)
        printf("0");
    else if(n==1)
        printf("1");
    else
        printf("%d",fibonacci(n));
	return 0;
}
