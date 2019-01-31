#include <bits/stdc++.h>
using namespace std;
int main(){
	long long t;
	cin>>t;
	int ans=0;
	while(t>0){
		ans+=t&1;
		t=t>>1;
	}
	cout<<ans;
	return 0;
}
