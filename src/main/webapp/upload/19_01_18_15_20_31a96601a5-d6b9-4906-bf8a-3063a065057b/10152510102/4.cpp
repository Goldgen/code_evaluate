#include<iostream>
using namespace std;
int main()
{
	char ch;
	cin>>ch;
	if(ch>='A'&&ch<='Z')
		cout<<char(ch+'a'-'A');
	else
		cout<<"ERROR";
	return 0;
}