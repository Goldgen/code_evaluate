#include <stdio.h>

int mul(int i,int k){
	return i*k;
}
int main() {
	int n;
	scanf("%d",&n);
	int i,k;
	printf(" 1 * 1 =  1");
	for (k=2;k<=n;k++){
		printf("\n");
	for (i=1;i<=k;i++)
	{
		printf(" %d * %d =%3d",i,k,mul(i,k));
	}
}
	return 0;
}