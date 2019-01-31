#include <stdio.h>
int main(){
	double ans=100,height=50;
	for(int i=1;i<=9;i++){
		ans+=height*2;
		height/=2;
	}
	printf("%.3lf %.3lf",ans,height);
	return 0;
}
