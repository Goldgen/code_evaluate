#include<stdio.h>
int main()
{
	float max=0.0,min=100.0;
	float a;
	do
    {
    	scanf("%f",&a);
    	if(a<0)
    	break;
    	if(a>=max)
    	max = a;
    	if(a<=min)
    	min = a;
    	if(a<max&&a>min)
    	{
    		max = max;
    		min = min;
		}
    	
	}while(a>0);
	printf("最高成绩是: %.2f, 最低成绩是: %.2f",max,min);
} 