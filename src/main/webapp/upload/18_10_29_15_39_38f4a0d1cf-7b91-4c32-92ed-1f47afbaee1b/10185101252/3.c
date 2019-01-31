#include <stdio.h>
int isPrime[1005];
int n;

int main(int argc, char* argv[]){
	for(int i = 1; i <= 1000; i++)
		isPrime[i] = 1;
	for(int i  = 2; i <= 1000; i++)
		for(int j = i*2; j <= 1000; j+=i)
			isPrime[j] = 0;
	scanf("%d", &n);
	printf("%d", n);
	for(int i = 2; i <= n/2; i++){
		if(isPrime[i] && isPrime[n-i])
			printf("=%d+%d", i, n-i);
	}

}