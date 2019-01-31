#include<stdio.h>

int main()
{
	char type;
	int height,width,length,num;
	double price,sum=0,b;
	char* a;
	do
	{
		scanf(" %c",&type);
		if(type=='T')
		break;
		scanf(" %d %d %d %d",&num,&height,&width,&length);
		switch(type)
		{
			case 'P':
				price=0.89;a="Pine";
				break;
			case 'F':
				price=1.09;a="Fire";
				break;
			case 'C':
				price=2.26;a="Cedar";
				break;
			case 'M':
				price=4.50;a="Maple";
				break;
			case 'O':
				price=3.10;a="Oak";
				break;
			default:
				break;

		}
		b=num*height*width*length*price/12;
		
		sum+=b;
		
		printf("%d %d*%d*%d %s, Cost: $%.2f\n",num,height,width,length,a,b);
	}while(num);
	printf("Total cost: $%.2lf",sum);
	return 0;
}