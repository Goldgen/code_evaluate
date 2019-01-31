#include<stdio.h>
int f(int a)
{
    if(a==1||a==2)
        return 1;
        return f(a-1)+f(a-2);
}
int main(void)
{
	int a;
	scanf("%d",&a);
	if(a>0)
	printf("%d",f(a));
	if(a==0)
		printf("0");	
	return 0;
}