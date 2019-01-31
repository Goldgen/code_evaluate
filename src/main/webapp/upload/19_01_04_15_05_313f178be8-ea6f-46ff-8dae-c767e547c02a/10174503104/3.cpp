#include <bits/stdc++.h>
using namespace std;
int main(){
	string a,b;
	while(cin>>a){
		if(a=="#")
			break;
		cin>>b;
		int pos=0,ans=0;
		while(pos!=string::npos){
			pos=a.find(b,pos);
			if(pos!=string::npos)
				ans++;
			else
				break;
			pos+=b.size();
		} 
		cout<<ans<<endl;
	}	
	return 0;
}
