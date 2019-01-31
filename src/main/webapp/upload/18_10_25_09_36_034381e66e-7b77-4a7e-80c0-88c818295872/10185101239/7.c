#include <stdio.h>
int main() {
	int n,m,i,j;
	scanf("%d",&n);
	m=(n + 1) /2;
	for(i = 1; i< m;++i){
       for( j = 1; j<= n;++j){
	       if(j==m+i-1){
		     printf("*");
		      break;
	      }else if(j==m-i+1){
			printf("*");
		   } else {
			 printf(" ");
		   }
	 }
	 printf("\n");
   }
	for(i = 0;i<n;++i){
        printf("*");
	}
	return 0;
}