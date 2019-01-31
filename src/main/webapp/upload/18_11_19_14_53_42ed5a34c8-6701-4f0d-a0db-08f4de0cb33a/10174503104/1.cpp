#include <bits/stdc++.h>
using namespace std;
float RunningAvg(float x){
	static float sum=0;
	static int n=0;
	n++;
	sum+=x;
	return sum*1.0/n;
}
int main(){
	float x;
	while(cin>>x){
		if(x==-1) break;
		printf("%.2f\n",RunningAvg(x));
	}
	return 0;
}
