#include<stdio.h>
#include<stdlib.h>
int main(){
	int a,sum,i;
	char x;
	scanf("%d",&sum);
	for(i=0;i<7;i++){
		x=getchar();
		scanf("%d",&a);
		sum+=a;
	}
	printf("%d\n",sum);
	scanf("%d",&sum);
	for(i=0;i<7;i++){
		x=getchar();
		scanf("%d",&a);
		sum+=a;
	}
	printf("%d",sum);
	return 0;
} 