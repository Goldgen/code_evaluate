#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int i,j,k,n=0;
	int a[10];
	for(i=1;i<=9;i++)
		for(j=0;j<=9;j++)
			for(k=0;k<=9;k++)
				if(i*100+j*10+k==i*i*i+j*j*j+k*k*k)
				{
					n++;
					a[n]=i*100+j*10+k;
				}
	for(i=1;i<n;i++)
		cout<<a[i]<<" ";
	cout<<a[n];
	return 0;
}