#include <stdio.h>

int main(int argc, char* argv[]){

	int n, result = 0;
	scanf("%d", &n);
	while(n != 0){
		int a = n & 1;
		if(a)
			result++;
		n >>= 1;
	}
	printf("%d", result);

}