#include<stdio.h>
double element(int index){
	int n = 1;
	if(index == 0)
		return 1.0;
	for(int i = 1; i <= index; i++)
		n*=i;
	return 1.0/n;
}
int main(int argc, char* argv[]){
	
	double num;
	double result = 0;
	for(int i = 0;(num = element(i)) >= 1e-6;i++){
		result += num;
	}
	printf("%.6lf", result);
	

	return 0;
} 