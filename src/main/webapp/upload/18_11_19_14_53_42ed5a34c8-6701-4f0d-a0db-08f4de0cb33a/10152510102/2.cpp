#include<iostream>
#include<stdio.h>
using namespace std;
int fun(int n)
{
	if(n==0)
		return 0;
	return n%10+fun(n/10);
}
int main()
{
	int a;
	cin>>a;
	cout<<fun(a);
	return 0;
}