#include<stdio.h>
int Shuai(int a)
{
	if(a<10) return a;
	return a%10+Shuai(a/10); 
}

int main()
{
	int x;
	scanf("%d",&x);
	printf("%d",Shuai(x));
	return 0;
}