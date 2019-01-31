#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int i;
	double a=100,sum=0;
	for(i=1;i<=10;i++)
	{
		sum+=a*2;
		a=a/2;
		//cout<<a<<" ";
	}
	sum-=100;
	printf("%.3lf %.3lf",sum,a);
	//double s=100+100+50+25+12.5+6.25+3.125+1.5625+0.78125+0.390625;
	//cout<<s<<" ";
	return 0;
}
