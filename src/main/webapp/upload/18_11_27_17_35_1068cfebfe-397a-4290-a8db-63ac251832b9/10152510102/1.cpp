#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	double a[6];
	cin>>a[1]>>a[2]>>a[3]>>a[4]>>a[5];
	int i;
	double sum=0;
	for(i=1;i<=5;i++)
	{
		a[i]=1.000000/a[i];
		if(i==5)
			printf("%.2lf",a[i]);
		else
			printf("%.2lf ",a[i]);
		sum+=a[i];
	}
	cout<<endl;
	printf("%.6lf",sum);
	return 0;
}