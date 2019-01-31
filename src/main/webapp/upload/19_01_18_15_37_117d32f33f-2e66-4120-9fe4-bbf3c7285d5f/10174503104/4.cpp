#include <bits/stdc++.h>
using namespace std;
int main(){
	char ch;
	cin>>ch;
	if(ch>='A'&&ch<='Z'){
		printf("%c",ch-'A'+'a');
	}
	else{
		cout<<"ERROR";
	}
	return 0;
}
