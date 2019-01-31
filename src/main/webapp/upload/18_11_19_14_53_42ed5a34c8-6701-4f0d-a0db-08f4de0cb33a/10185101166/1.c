#include<stdio.h>
int main()
{
	float a[1000];
    int i = 1;
	a[0] = 0.0;
	for(i;;)
	{
		scanf("%f",&a[i]);
		if(a[i] == -1)
		break;
		i++;
	}
	float b = 0.0;
	for(int m = 1;m <= i - 1;)
	{
		b = b + a[m];
		printf("%.2f",b / m);
		if(m < i - 1)
		printf("\n");
		m++;
	}
}