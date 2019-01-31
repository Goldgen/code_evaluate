#include <bits/stdc++.h>
using namespace std;
int main(){
	int sum=0;
	for(int i=1;i<=8;i++){
		int x;
		cin>>x;
		sum+=x;
	}
	cout<<sum<<endl;
	sum=0;
	int x;
	for(int i=1;i<8;i++){
		scanf("%d,",&x);
		sum+=x;
	}
	scanf("%d",&x);
	sum+=x;
	cout<<sum;
	return 0;	
}
