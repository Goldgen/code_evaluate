#include<stdio.h>

int main()
{
	float a,b=0,c=100;
	scanf("%f",&a);
		while(a>=0)
		{
			if(a>b)
			{
				b=a;
			}
			if(a<c)
			{
				c=a;
			}
			scanf("%f",&a);	
		}
	printf("最高成绩是: %.2f,",b);
	printf(" 最低成绩是: %.2f",c);
	return 0;
 } 