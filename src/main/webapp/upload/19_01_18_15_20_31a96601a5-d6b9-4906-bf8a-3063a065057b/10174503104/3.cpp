#include <bits/stdc++.h>
using namespace std;
int main(){
	unsigned long long x,p,n;
	cin>>x>>p>>n;
	unsigned long long t=0;
	for(unsigned i=p-n+1;i<=p;i++){
		t+=(1<<i);
	}
	cout<<(t^x);
	return 0;	
}
