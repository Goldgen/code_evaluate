#include<stdio.h>
double F(double b,double c,double d)
{
	double total;
	total=b*d*c/12.0;
	return total;
}

int main(void)
{
	char Wood;
	double Number,height,length;
	double Width,Cost,Total=0.0;
	scanf("%c",&Wood);
	while(Wood!='T')
	{
		scanf("%lf%lf%lf%lf",&Number,&Width,&height,&length);
		if(Wood=='P')
		{
			Cost=Number*F(Width,height,length)*0.89;
			printf("%.0f %.0f*%.0f*%.0f Pine, Cost: $%.2f\n",Number,Width,height,length,Cost);
			Total=Total+Cost;
		}
		else if(Wood=='F')
		{
			Cost=Number*F(Width,height,length)*1.09;
			printf("%.0f %.0f*%.0f*%.0f Fire, Cost: $%.2f\n",Number,Width,height,length,Cost);
			Total=Total+Cost;
		}
		else if(Wood=='C')
		{
			Cost=Number*F(Width,height,length)*2.26;
			printf("%.0f %.0f*%.0f*%.0f Cedar, Cost: $%.2f\n",Number,Width,height,length,Cost);
			Total=Total+Cost;
		}
		else if(Wood=='M')
		{
			Cost=Number*F(Width,height,length)*4.50;
			printf("%.0f %.0f*%.0f*%.0f Maple, Cost: $%.2f\n",Number,Width,height,length,Cost);
			Total=Total+Cost;
		}
		else if(Wood=='O')
		{
			Cost=Number*F(Width,height,length)*3.10;
			printf("%.0f %.0f*%.0f*%.0f Oak, Cost: $%.2f\n",Number,Width,height,length,Cost);
			Total=Total+Cost;
		}
		scanf("%c",&Wood);
	}
	printf("Total cost: $%.2f",Total);
	return 0;
} 