#include <stdio.h>
int main(){
	int i=0,n=0,change=0;
	scanf("%d",&i);
	getchar();
	int a[100000]={0};
	for(int k=0;k<=i-1;k++){
		scanf("%d",&a[k]);
	}
	getchar();
	scanf("%d %d",&n,&change);
	for(int j=0;j<=i;j++){
		if(j<n)
		printf("%d ",a[j]);
		else if(j==n&&j!=i)
		printf("%d ",change);
		else if(j>n&&j!=i)
		printf("%d ",a[j-1]);
		else if(j>n&&j==i)
		printf("%d",a[j-1]);
		else
		printf("%d",change);
	}
	return 0;
}