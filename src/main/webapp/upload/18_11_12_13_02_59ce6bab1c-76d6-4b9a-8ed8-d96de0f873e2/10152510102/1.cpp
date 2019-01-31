#include<iostream>
using namespace std;
void doing(int a,int b)
{
	if(a*b<10)
	cout<<" "<<a<<" * "<<b<<" =  "<<a*b;
	else
		cout<<" "<<a<<" * "<<b<<" = "<<a*b;
}
int main()
{
	int i,j,n;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			doing(j,i);
		}
		
		if(i!=n)
			cout<<endl;
	}
	return 0;
}