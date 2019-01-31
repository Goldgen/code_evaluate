#include <stdio.h>
#include <math.h>

int n;

int main(int argc,char* argv[]){
	
	scanf("%d", &n);
	int num = pow(2, n);
	for(int i = 0; i < num ; i ++){
		printf("{");
		for(int j = 0; i >> j != 0; j++){
			int a = (i>>j) & 1;
			if(a){
				printf("%d", j);
				a = i >> (j+1);
				if(a)
					printf(",");
			}
		}
		printf("}");
		if(i != num - 1)
			printf("\n"); 
	}
	
	return 0;
} 