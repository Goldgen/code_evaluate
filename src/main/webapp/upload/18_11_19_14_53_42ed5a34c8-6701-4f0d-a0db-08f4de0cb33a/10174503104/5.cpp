#include <bits/stdc++.h>
using namespace std;
int GDB(int a,int b){
	if(!b) return a;
	if(b>0)
	return GDB(b,a%b);
}
int main(){
	int a,b;
	cin>>a>>b;
	cout<<GDB(a,b)<<endl;
	return 0;
}
