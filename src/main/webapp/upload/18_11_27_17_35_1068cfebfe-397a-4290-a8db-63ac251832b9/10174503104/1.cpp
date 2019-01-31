#include <bits/stdc++.h>
using namespace std;
int main(){
	double sum=0;
	for(int i=0;i<5;i++){
		double x;
		cin>>x;
		printf("%.2lf",1.0/x);
		if(i==4) cout<<endl;
		else cout<<' ';
		sum+=1/x;
	}
	printf("%.6lf\n",sum);
	return 0;
}
