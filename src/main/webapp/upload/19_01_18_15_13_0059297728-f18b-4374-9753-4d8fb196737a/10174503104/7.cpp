#include <bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	int mm=0;
	mm=max(b,a);
	mm=max(mm,c);
	mm=max(mm,d);
	cout<<mm;
	return 0;
}