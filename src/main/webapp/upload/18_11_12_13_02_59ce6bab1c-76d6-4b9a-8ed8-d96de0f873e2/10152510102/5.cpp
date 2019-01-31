#include<iostream>
#include<stdio.h>
using namespace std;
double fun(char ch,int a,int b,int c,int d)
{
	double n;
	switch(ch)
	{
	case 'P':
		{
			n=(double)(a*b*c*d)/12*0.89;
			printf("Pine, Cost: $%.2lf\n",n);
			break;
		}
	case 'F':
		{
			n=(double)(a*b*c*d)/12*1.09;
			printf("Fire, Cost: $%.2lf\n",n);
			break;
		}
	case 'C':
		{
			n=(double)(a*b*c*d)/12*2.26;
			printf("Cedar, Cost: $%.2lf\n",n);
			break;
		}
	case 'M':
		{
			n=(double)(a*b*c*d)/12*4.5;
			printf("Maple, Cost: $%.2lf\n",n);
			break;
		}
	case 'O':
		{
			n=(double)(a*b*c*d)/12*3.1;
			printf("Oak, Cost: $%.2lf\n",n);
			break;
		}
	}
	return n;
}
int main()
{
	char ch;
	int a,b,c,d;
	double sum=0;
	while(cin>>ch)
	{
		if(ch=='T'){
			printf("Total cost: $%.2lf",sum);
			break;
		}
		cin>>a>>b>>c>>d;
		printf("%d %d*%d*%d ",a,b,c,d);
		sum+=fun(ch,a,b,c,d);
		
	}
}