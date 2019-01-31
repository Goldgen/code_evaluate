#include<stdio.h>

int main()
{
	double a=1.0,b=2.0,c,ans=0.0;
	for (int i=1;i<=50;i++)
	{
		ans+=b/a;
		//printf("%0.2f %0.2f\n",b,a);
		c=b,b=a+c,a=c;
	}
	printf("%0.2f",ans);
	return 0;
}