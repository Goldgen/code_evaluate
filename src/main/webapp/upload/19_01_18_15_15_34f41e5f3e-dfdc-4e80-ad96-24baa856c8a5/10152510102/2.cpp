#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int i,sum=1;	
	double e=0;
	for(i=1;i<=10;i++)
	{
		e+=1.0000/sum;
		sum*=i;
	}
	printf("%.6lf",e);
	return 0;
}