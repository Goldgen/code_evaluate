#include<stdio.h>
int su(int n)
{      int i,b;
       int flag=0;
       for(int i = 2; i <= sqrt(n); i++) {
		if(n % i == 0) {
			printf("It's not a prime number.");
			flag =flag+1;
		}
	}
	if(flag == 0) {
		printf("It is a prime number.");
	}
	return ;
}
   int main()
{
    int n;
    scanf("%d", &n);
    su(n);
    return 0;}


