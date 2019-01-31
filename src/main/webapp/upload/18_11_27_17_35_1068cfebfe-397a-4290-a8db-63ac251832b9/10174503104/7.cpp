#include <bits/stdc++.h>
using namespace std;
int main(){
	vector <int> arr;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		arr.push_back(x);
	}
	int k;
	cin>>k;
	vector <int> res;
	for(int i=0;i<n;i++)
		if(arr[i]==k)
			res.push_back(i);
	for(int i=0;i<res.size();i++)
		if(i==res.size()-1)
			cout<<res[i]<<endl;
	else
		cout<<res[i]<<' ';
	if(res.size()==0)
		cout<<"ERROR";
	return 0;
}
