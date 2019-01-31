#include <bits/stdc++.h>
using namespace std;
vector <int> ans;
void f(){
	int x;
	cin>>x;
	if(x==0||x<0) return ;
	f();
	ans.push_back(x);
}
int main(){
	f();
	for(int i=0;i<ans.size();i++)
		if(i!=ans.size()-1)
			cout<<ans[i]<<' ';
		else
			cout<<ans[i]<<endl;
	return 0;
}
