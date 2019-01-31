#include <bits/stdc++.h>
using namespace std;
int main(){
	char ch;
	cin>>ch;
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
		cout<<"vowel";
	else if(ch<'a'||ch>'z')
		cout<<"ERROR";
	else
		cout<<"consonant";
	return 0;
}
