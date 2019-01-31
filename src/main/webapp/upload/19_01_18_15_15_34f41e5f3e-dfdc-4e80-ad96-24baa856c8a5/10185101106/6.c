#include<stdio.h>
int main()
{
	int a,b,c,d;
	scanf("%d %d",&a,&b);
	if(a<b)
	{
	c=a;a=b;b=c;
}	d=a%b;
	for(int i=1;d!=0;i++)
	{
		a=b;b=d;d=a%b;
	}
	printf("最大公约数是: %d",b);
	return 0;
}