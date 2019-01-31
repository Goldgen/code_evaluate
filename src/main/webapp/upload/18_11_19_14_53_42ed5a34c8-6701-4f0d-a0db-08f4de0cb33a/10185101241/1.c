#include<stdio.h>
float Hei(float X)
{
	static float a=0.0,b=0.0;
	a+=X;
	b++;
	return a/b;
}

int main()
{
	float A;
	scanf("%f",&A);
	while(A!=-1)
	{
		printf("%.2f\n",Hei(A));
		scanf("%f",&A);
	}
	return 0;
}