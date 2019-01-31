#include <stdio.h>
int main()
{
	int a=1,b=1,c=3;
	for(;a<10;a++)
	{
		for(;b<20;b++)
		{
			for(;c<=99;c+=3)
			{
			if((a+b+c==100)&&(7*a+5*b+c/3==100))
			printf("%d %d %d",a,b,c);
		    }
		    c=3;
		}
		b=1;
	}
	return 0;
 } 