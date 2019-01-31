#include<iostream>
#include<cmath>
using namespace std;
int gcd(int a,int b)
{
	return b?(gcd(b,a%b)):a;
}
int main()
{
	int a,b,n=0;
	cin>>a;
	b=a;
	while(b)
	{
    if ( b%2 ) n++;  
    b/=2;
	}
	cout<<n;
	return 0;
}