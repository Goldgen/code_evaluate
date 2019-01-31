#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int max(int a,int b)
{
	return a>b?a:b;
}
int main()
{
	int data[10001];
	data[0]=0;
	int i,n;
	cin>>n;
	int now=1,max=0;
	for(i=1;i<=n;i++)
	{
		if(now>max)
			max=now;
		cin>>data[i];
		if(data[i]==data[i-1])
			now++;
		else
			now=1;
	}
	if(now>max)
		max=now;
	cout<<max;
	return 0;
}
