#include <bits/stdc++.h>
using namespace std;
int main(){
	int x,p,n;
	cin>>x>>p>>n;
	x=x>>(p-n+1);
	int t=(1<<n)-1;
	x=x&t;
	cout<<x;
	return 0;	
}
