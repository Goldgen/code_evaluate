#include<stdio.h>
#include<stdlib.h>
float RunningAvg(float a){
	static float sum=0,i=0;
	sum+=a;
	i++;
	return sum/i; 
}
int main(){
	float a;
	while(~scanf("%f",&a)){
		if(a==-1) break;
		printf("%.2f\n",RunningAvg(a));
	}
	return 0;
} 