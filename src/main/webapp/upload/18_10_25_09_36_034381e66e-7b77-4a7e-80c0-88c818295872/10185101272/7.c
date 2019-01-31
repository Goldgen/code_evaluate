#include<stdio.h>
int main(){
	int n,i,j;
	scanf("%d",&n);
	for(i=1;i<=n/2+1;i++){
		for(j=1;j<=n/2+i;j++)\
			if(j==n/2+2-i||j==n/2+i||i==n/2+1)
				printf("*");
			else
				printf(" ");
		if(i<=n/2)
			printf("\n");
	}
return 0;
}