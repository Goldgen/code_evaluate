#include<stdio.h>

int main()
{
	int a;
	for(a=0;a<=100;a++)
	{
		if(a%3==0&&a%10==6&&a!=96) printf("%d ",a);
		if(a==96) printf("%d",a);
	}
	return 0;
}