#include <bits/stdc++.h>
using namespace std;
int Sum (int arr [ ], int n){
	if(n==1)
		return arr[0];
		return arr[0]+Sum(arr+1,n-1);
}
int Min (int arr[ ], int n){
	if(n==1)
		return arr[0];
		return min(arr[0],Min(arr+1,n-1));
}
int main() {
    int n,a[105];
    cin>>n;
    for(int i=0;i<n;i++)
    	cin>>a[i];
    cout<<Min(a,n)<<' '<<Sum(a,n);
    return 0;
}