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
	int p,k;
	cin>>p>>k;
	arr.insert(arr.begin()+p,k);
	n=arr.size();
	for(int i=0;i<n;i++)
		if(i==n-1)
			cout<<arr[i]<<endl;
		else
			cout<<arr[i]<<' ';

	return 0;
}
