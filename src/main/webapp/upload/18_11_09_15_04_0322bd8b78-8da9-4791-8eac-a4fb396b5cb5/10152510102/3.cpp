#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	bool mark=false;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='a'||s[i]=='i'||s[i]=='o'||s[i]=='e'||s[i]=='u')
        mark=true;
	}
	if(mark)
        printf("yes");
    else
        printf("no");
	return 0;
}