#include<iostream>
using namespace std;
int doing(int a)
{
	int n=1,sum=0;
	while(a>0)
	{
		sum+=a%10*n;
		a/=10;
		n*=8;
	}
	return sum;
}
int main()
{
	int n;
	cin>>n;
	cout<<doing(n);
	return 0;
}