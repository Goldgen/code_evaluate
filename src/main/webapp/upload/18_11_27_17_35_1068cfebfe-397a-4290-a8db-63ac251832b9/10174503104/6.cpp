#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,a[1005];
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	int key,pos=-1;
	cin>>key;
	for(int i=0;i<n;i++)
		if(a[i]==key){
			pos=i;
			break;
		}
	if(pos==-1)
		cout<<"ERROR";
	else{
		for(int i=pos+1;i<n;i++)
			a[i-1]=a[i];
		for(int i=0;i<n-1;i++)
			if(i==n-2)
				printf("%d\n",a[i]);
			else
				printf("%d ",a[i]);
	}
	return 0;
}
