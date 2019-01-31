#include <stdio.h>
main()
{
	int a,b,c,d;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	if (a<=b && c<=d)
	{
		if (b<=d)
			printf("%d",d);
		else
			printf("%d",b);
	}
	else if (a>=b && c<=d)
	{
		if (a<=d)
			printf("%d",d);
		else
			printf("%d",a);
	}
	else if (a<=b && c>=d)
	{
		if (b<=c)
			printf("%d",c);
		else
			printf("%d",b);
	}
	else if (a>=b &&c>=d)
	{
		if (a<=c)
			printf("%d",c);
		else
			printf("%d",a);
	}
}