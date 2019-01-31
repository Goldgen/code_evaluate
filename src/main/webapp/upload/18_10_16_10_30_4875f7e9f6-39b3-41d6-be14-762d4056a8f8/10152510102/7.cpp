#include<iostream>
#include<stdlib.h>
#include<cstring>
#include <algorithm>
using namespace std;
int max(int a,int b)
{
	return a>b?a:b;
}
int main()
{
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	cout<<max(a,max(b,max(c,d)));
	return 0;
}