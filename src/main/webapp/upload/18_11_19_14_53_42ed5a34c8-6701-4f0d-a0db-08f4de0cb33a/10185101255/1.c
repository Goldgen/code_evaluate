#include<stdio.h>
int main()
{
	double n;
	static int i=0;
	static double sum=0;
	while(1)
	{
		scanf("%lf",&n);
		if(n==-1) break;
		i++;sum+=n;
		printf("%.2lf\n",sum/i);		
	}	
	return 0;
}


