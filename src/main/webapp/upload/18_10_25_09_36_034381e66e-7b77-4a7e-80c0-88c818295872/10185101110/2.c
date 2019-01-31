#include<stdio.h>
int main()
{
	int a,i=0;
	float b=0;
	while(i<5)
	{
		scanf("%d",&a);
		b=b+a;
		i++;
	}
	b=b/5;
	printf("%.1f",b);
	return 0;
 } 