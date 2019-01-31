#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n;
	unsigned long long x=1;
	cin>>n;
	for(int i=1;i<=n;i++)
        x*=i;
    cout<<x;
	return 0;
}
