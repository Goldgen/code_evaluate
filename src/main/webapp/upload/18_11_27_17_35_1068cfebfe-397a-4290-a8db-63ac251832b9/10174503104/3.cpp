#include <bits/stdc++.h>
using namespace std;
int main(){
	float a[5];
	for(int i=0;i<5;i++){
			cin>>a[i];
	}
	for(int i=0;i<5;i++){
		a[i]=a[i]*100;
		a[i]=(int)a[i];
		if(i==4)
			printf("$%.2lf\n",a[i]/100);
		else
			printf("$%.2lf ",a[i]/100);
	}
	return 0;
}
