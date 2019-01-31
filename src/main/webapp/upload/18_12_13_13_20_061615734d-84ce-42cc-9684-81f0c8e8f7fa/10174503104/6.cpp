#include<bits/stdc++.h>
using namespace std;
void rotate(int *p,int n,int m){
	int q[100];
	for(int i=0;i<n;i++)
		q[(i+m)%n]=p[i];
	for(int i=0;i<n;i++)
		p[i]=q[i];
}
int main(){
	int n,m,p[100];
	cin>>n>>m;
	for(int i=0;i<n;i++)
		cin>>p[i];
	rotate(p,n,m);
	for(int i=0;i<n;i++){
		printf("%d",p[i]);
		if(i==n-1)
			printf("\n");
		else
			printf(" ");
	}
	return 0;
}
