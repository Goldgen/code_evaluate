#include<iostream>
using namespace std;
int fibonacci(int n)
{
	int sum;
	if(n==0)
		sum=0;
	else if(n==1)
		sum=1;
	else
		sum=fibonacci(n-1)+fibonacci(n-2);
	return sum;
}
int main()
{
	int n;
	cin>>n;
	cout<<fibonacci(n);
	return 0;
}