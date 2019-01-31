#include <stdio.h>

double price(char kind,int a,int b,int c,int d)
{
	double cost;
	cost=a*b*c*d/12.0;
	switch(kind)
	{
		case 'P':cost=cost*0.89;
				printf("%d %d*%d*%d Pine, Cost: $%.2lf\n",a,b,c,d,cost);
				break;
		case 'F':cost=cost*1.09;
				printf("%d %d*%d*%d Fire, Cost: $%.2lf\n",a,b,c,d,cost);
				break;
		case 'C':cost=cost*2.26;
				printf("%d %d*%d*%d Cedar, Cost: $%.2lf\n",a,b,c,d,cost);
				break;
		case 'M':cost=cost*4.50;
				printf("%d %d*%d*%d Maple, Cost: $%.2lf\n",a,b,c,d,cost);
				break;
		default:
			cost=cost*3.10;
			printf("%d %d*%d*%d Oak, Cost: $%.2lf\n",a,b,c,d,cost);
			break;
	}
	return cost;
}

int main()
{
	int a,b,c,d;
	double total=0;
	char type;
	scanf("%c",&type);
	while(type!='T')
	{
		scanf("%d %d %d %d",&a,&b,&c,&d);
		total+=price(type,a,b,c,d);
		scanf(" %c",&type);
	}
	printf("Total cost: $%.2lf",total);
	return 0;
}