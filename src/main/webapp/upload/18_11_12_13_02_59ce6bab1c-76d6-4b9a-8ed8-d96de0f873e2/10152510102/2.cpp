#include<iostream>
#include<ctype.h>
#include <iomanip>
using namespace std;
int main()
{
	cout.setf(ios::left);
	cout.fill(' ');
	int s,t;
	cin>>s>>t;
	bool mark=true;
	for(int i=s;i<=t;i++)
	{
		if(isgraph(i)){
			cout<<setw(8)<<i;
			cout<<char(i);
			mark=false;
			if(i!=t&&i!=126)
			cout<<endl;
		}
	}
	if(mark)
		cout<<"NONE";
}