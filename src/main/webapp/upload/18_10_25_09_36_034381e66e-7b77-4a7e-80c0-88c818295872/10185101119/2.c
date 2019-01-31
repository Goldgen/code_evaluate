#include <stdio.h>
int main()
{
	float all=0.0f;
	float a;
	for(int i=1;i<=5;i++)
	{
		scanf("%f",&a);
		all=all+a;
	}
	printf("%.1f",all/5.0);
	return 0;
}