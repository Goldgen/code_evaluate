#include <bits/stdc++.h>
using namespace std;
int a[1005];
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
			if(a[i]>a[j])
				swap(a[i],a[j]);
	for(int i=0;i<n;i++)
		if(i==n-1)
			cout<<a[i]<<endl;
		else
			cout<<a[i]<<' ';
	return 0;
}
