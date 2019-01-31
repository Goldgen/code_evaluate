#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int i,n,a[1001],x;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>a[i];
	cin>>x;
	bool mark=false;
	int ans;
	for(i=0;i<n;i++)
	{
		if(a[i]==x)
		{
			ans=i;
			mark=true;
			break;
		}
	}
	if(mark==false)
		cout<<"ERROR";
	else
		for(i=0;i<n;i++)
			if(i!=ans)
				if(i==n-1||(i==n-2&&ans==n-1))
					cout<<a[i];
				else
					cout<<a[i]<<" ";
	return 0;
}