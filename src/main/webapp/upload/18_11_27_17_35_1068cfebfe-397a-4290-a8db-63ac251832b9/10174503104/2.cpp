#include <bits/stdc++.h>
using namespace std;
int main(){
	double a[105];
	long long add=2;
	double ans=0;
	for(int i=0;i<100;i++){
		a[i]=1.0/((add)*(add+1)*(add+2));
		add+=2;	
	}
	for(int i=0;i<100;i++){
		//cout<<a[i]<<endl;
		if(i%2)
			ans-=a[i];
		else
			ans+=a[i];
	}
	ans*=4;
	ans+=3;
	printf("%.4f\n",ans);
	return 0;
}
