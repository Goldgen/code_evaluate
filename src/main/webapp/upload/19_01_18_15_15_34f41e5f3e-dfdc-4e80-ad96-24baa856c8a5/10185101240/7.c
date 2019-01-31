#include<stdio.h> 
#include<math.h>
int main()
{
	unsigned int a;
	int b=0;
	scanf("%d",&a);
	while (a)
	{
		if (a%2==1)
			b++;
		a=a/2;
	}
	printf("%d",b);
	return 0;
}
