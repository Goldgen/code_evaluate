#include<stdio.h>
int f(int a)
{
    if(a/10==0)
        return a;
   
        return f(a/10)+a%10;
}
int main(void)
{
	int a;
	scanf("%d",&a);
	printf("%d",f(a));
	return 0;
}