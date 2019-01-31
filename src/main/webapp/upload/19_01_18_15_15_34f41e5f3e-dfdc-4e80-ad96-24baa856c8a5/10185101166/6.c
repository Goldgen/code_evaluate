#include<stdio.h>
int main()
{
	int a,b,r=1;
	scanf("%d %d",&a,&b);
	if(a<b)
	{
		r = a;
		a = b;
		b = r;
	}
	
	while(r != 0)
	{
		r = a % b;
		a = b;
	    b = r;
	}
	printf("最大公约数是: %d",a);  
	return 0;
}
