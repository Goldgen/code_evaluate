#include <stdio.h>
float i=0.0f;
float all=0.0f;
float RunningAvg(float x){
	i++;
	all+=x;
	return all/i;
}
int main(){
	float a=0.0f;
	scanf("%f",&a);
	while(a!=-1.0){
		getchar();
		printf("%.2f\n",RunningAvg(a));
		scanf("%f",&a);
	}
	return 0;
} 