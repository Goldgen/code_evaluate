#include <bits/stdc++.h>
using namespace std;
int main(){
	string str;
	getline(cin,str);
	string tmp=str;
	reverse(tmp.begin(),tmp.end());
	if(str==tmp)
	    cout<<"True"<<endl;
	else
	    cout<<"False"<<endl;
	return 0;
}
