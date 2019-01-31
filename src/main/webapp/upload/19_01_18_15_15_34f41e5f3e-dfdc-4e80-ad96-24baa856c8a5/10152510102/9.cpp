#include<iostream>
#include<cmath>
#include<string>
#include<cstring>
using namespace std;
int main()
{
	int i,j,n,a[11][11];
	
	cin>>n;
	memset(a,0,sizeof(a));
	a[1][1]=1;
	for(i=2;i<=n;i++)
		for(j=1;j<=i;j++)
			a[i][j]=a[i-1][j]+a[i-1][j-1];
	for(i=1;i<n;i++)
	{
		for(j=1;j<i;j++)
			cout<<a[i][j]<<" ";
		cout<<a[i][i];
		cout<<endl;
	}
	for(i=1;i<n;i++)
		cout<<a[n][i]<<" ";
	cout<<a[n][n];
	return 0;
}