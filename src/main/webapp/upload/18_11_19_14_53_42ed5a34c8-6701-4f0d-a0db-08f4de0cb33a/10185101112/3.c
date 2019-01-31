#include <stdio.h>

int main(){
	int num;
	scanf("%d",&num);
	if (num>0)
	NX();
	printf("%d",num);
	return 0;
}
void NX(){
	int n;
	scanf(" %d",&n);
	if (n>0)
	{
		NX();
		printf("%d ",n);
	}
}