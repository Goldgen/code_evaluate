#include<stdio.h>
int f(int a)
{
    int b;
    if((b=a/2)>0)
            f(b);
    printf("%d",a%2);
}
int main(void)
{
	int a;
	scanf("%d",&a);
	f(a);
	return 0;
}