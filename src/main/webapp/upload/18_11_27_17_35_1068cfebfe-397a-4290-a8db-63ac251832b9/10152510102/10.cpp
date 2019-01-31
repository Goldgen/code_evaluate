#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int  n,a[10001];
	cin>>n;
	int i,j,temp;

	for(i=1;i<=n;i++)
		cin>>a[i];
	for(i=1;i<n;i++)
	{
		temp=a[i];
		if(a[i]>a[i+1])
		{
			a[i]=a[i+1];
			a[i+1]=temp;
		}
		for(j=1;j<n;j++)
		{
			temp=a[j];
			if(a[j]>a[j+1])
			{
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(i=1;i<n;i++)
		cout<<a[i]<<" ";
	cout<<a[n];
	return 0;
}