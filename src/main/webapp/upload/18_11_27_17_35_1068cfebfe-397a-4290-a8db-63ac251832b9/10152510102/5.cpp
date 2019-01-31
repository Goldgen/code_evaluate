#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int i,n,a[1001],x,y;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>a[i];
	cin>>x>>y;
	for(i=0;i<n;i++)
	{
		if(i==x)
			cout<<y<<" ";
		if(i==n-1)
			cout<<a[i];
		else
		cout<<a[i]<<" ";
	}
	return 0;
}