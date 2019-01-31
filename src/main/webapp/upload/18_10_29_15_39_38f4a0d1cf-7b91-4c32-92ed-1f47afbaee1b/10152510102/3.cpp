#include<iostream>
#include<cmath>
using namespace std;
bool prime(int n)
{
	int i;
	bool mark=true;
	for(i=2;i<=sqrt(n);i++)
		if(n%i==0)
		{
			mark=false;
			break;
		}
	return mark;
}
int main()
{
	int i,n;
	cin>>n;
	cout<<n;
	for(i=2;i<=n/2;i++)
	{
		if(prime(i)&&prime(n-i))
			cout<<"="<<i<<"+"<<n-i;
	}
	return 0;
}