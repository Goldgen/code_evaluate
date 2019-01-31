#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
	int n,i,sum,j,f;
	scanf("%d",&n);
	sum=pow(2,n);
	for(i=0;i<sum;i++){
		printf("{");
		f=0;
		for(j=0,n=i;n;j++){
			if(n%2){
				if(f) printf(",");
				printf("%d",j);
				f=1;
			}
			n>>=1; 
		}
		printf("}");
		if(i<sum-1) printf("\n");
	}
	return 0;
} 