#include<iostream>
using namespace std;
int main()
{
	int a,b,c,sum=0,i;
	char c1,c2;
	for(i=1;i<=8;i++)
	{
		cin>>a;
		sum+=a;
	}
	cout<<sum<<endl;
	sum=0;
	cin>>a>>c1>>b>>c2>>c;
	sum+=a+b+c;
	cin>>a>>c1>>b>>c2>>c;
	sum+=a+b+c;
	cin>>a>>c1>>b;
	sum+=a+b;
	cout<<sum;
}