#include<iostream>
#include<cmath>
using namespace std;
int gcd(int a,int b)
{
	return b?(gcd(b,a%b)):a;
}
int main()
{
	int a,b;
	cin>>a>>b;
	cout<<"最大公约数是: "<<gcd(a,b);
	return 0;
}