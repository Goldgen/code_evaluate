#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	float n;
	float min=10000,max=0;
	cin>>n;
	while(n>=0)
	{
		if(min>n)
			min=n;
		if(max<n)
			max=n;

		cin>>n;
	}
	printf("最高成绩是: %.2f, 最低成绩是: %.2f",max,min);
	return 0;
}