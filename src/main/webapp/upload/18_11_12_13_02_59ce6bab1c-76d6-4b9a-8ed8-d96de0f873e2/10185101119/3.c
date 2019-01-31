#include <stdio.h>
#include <math.h> 
int main(){
	int n,a=0;
	scanf("%d",&n);
	for(int i=1;i<sqrt(n)+1;i++){
		if(n%i==0)
		a++;
		if(a>1)
		break;
	}
	if(a==1&&n!=1||n==2)
	printf("It is a prime number.");
	else
	printf("It's not a prime number.");
	return 0;
}