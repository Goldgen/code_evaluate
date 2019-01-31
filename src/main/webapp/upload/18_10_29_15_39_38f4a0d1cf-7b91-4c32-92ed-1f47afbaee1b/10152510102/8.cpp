#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main()
{
	int i,n,l;
	string s;
	cin>>s>>n;
	l=s.size();
	cout<<l<<" ";
	if(n==0)
		cout<<s;
	for(i=l-n%l;i<l-n%l+l;i++)
		cout<<s[i%l];
	return 0;
}