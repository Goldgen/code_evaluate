#include<iostream>
#include<stdio.h>
using namespace std;
float RunningAvg(float value)
{
	static float sum=0;
	static int n=0;
	sum+=value;
	n++;
	return sum/n;
}
int main()
{
	float a;
	while(cin>>a)
	{
		if(a==-1)
			break;
		printf("%.2f\n",RunningAvg(a));
	}
	return 0;
}