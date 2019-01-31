#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int i,sum=0;
	for(i=1;i<=100;i+=2)
		sum+=i;
	cout<<sum<<" ";
	sum=0;
	for(i=2;i<=100;i+=2)
		sum+=i;
	cout<<sum;
	return 0;
}