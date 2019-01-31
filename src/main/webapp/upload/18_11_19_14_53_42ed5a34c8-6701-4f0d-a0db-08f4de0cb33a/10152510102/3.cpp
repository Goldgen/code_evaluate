#include<iostream>
#include<stdio.h>
using namespace std;
int num=0;
void fun()
{
	int n;
	cin>>n;
	if(n<=0)
		return;
	num++;
	fun();
	if(num==1)
		cout<<n;
	else
		cout<<n<<" ";
	num--;
}
int main()
{
	fun();
	return 0;
}