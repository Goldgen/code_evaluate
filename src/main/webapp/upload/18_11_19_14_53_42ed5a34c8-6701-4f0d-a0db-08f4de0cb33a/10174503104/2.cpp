#include <bits/stdc++.h>
using namespace std;
int f(int x){
	if(!x) return 0;
	return f(x/10)+x%10;
}
int main(){
	int n;
	cin>>n;
	cout<<f(n)<<endl;
	return 0;
}
