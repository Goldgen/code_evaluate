#include <stdio.h>
void plus(int x){
	for(int i=1;i<=x;i++){
		printf(" %d * %d = %2.d",i,x,i*x);
	}
}
int main(){
	int n=0;
	scanf("%d",&n);
	for(int x=1;x<=n;x++){
		plus(x);
		if(x!=n)
		printf("\n");
	}
	return 0;
} 