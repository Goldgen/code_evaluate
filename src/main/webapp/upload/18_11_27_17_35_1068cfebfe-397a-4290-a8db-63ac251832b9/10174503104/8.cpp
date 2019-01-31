#include <bits/stdc++.h>
using namespace std;
int a[1005];
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	int cnt=1,ans=0;
	for(int i=0;i<n-1;i++){
		if(a[i]==a[i+1])
			cnt++;
		else
			cnt=1;
		ans=max(ans,cnt);
	}
	cout<<ans<<endl;
	return 0;
}
