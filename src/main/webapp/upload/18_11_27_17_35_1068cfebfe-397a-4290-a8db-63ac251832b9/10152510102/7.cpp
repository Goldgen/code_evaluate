#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int i,n,a[1001];
	cin>>n;
	for(i=0;i<n;i++)
		cin>>a[i];
	int m,sum=0,s[1001];
	cin>>m;
	for(i=0;i<n;i++)
		if(a[i]==m)
		{
			sum++;
			s[sum]=i;
		}
	if(sum==0)
		cout<<"ERROR";
	else
	for(i=1;i<=sum;i++)
		if(i==sum)
			cout<<s[i];
		else
			cout<<s[i]<<" ";
	return 0;
}