#include<stdio.h>
float x(float,float);
int main()
{
	float a,i=0,sum=0;
	while(scanf("%f",&a))
	{
		if(a==-1)
		break;
		else
		sum=x(sum,a);
		i++ ;
		printf("%.2f\n",sum/i);

	}
		
	
	return 0;
	
	
 } 
 float x(float sum,float a)
 {
 	return sum+a;
 }