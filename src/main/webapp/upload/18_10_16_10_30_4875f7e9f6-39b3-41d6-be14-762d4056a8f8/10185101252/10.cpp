#include <stdio.h>

char A[10][20]={"","Monday","Tuesday","Wednesday", "Thursday", 
					   "Friday", "Saturday", "Sunday"};

int main(){
	
	int x;
	scanf("%d", &x);
	printf("%s", A[x]);
	return 0;
}