#include<stdio.h>
int main(int argc, char* argv[]){
	
	for(int i = 1; i <= 100/7; i++){
		for(int j = 1; j <= (100-7*i)/5; j++){
			int k = 100-i-j;
			if(k%3 == 0 && i*7+j*5+k/3 == 100){
				printf("%d %d %d", i, j, k);
				return 0;
			}
		}
	} 
	
	return 0;
} 