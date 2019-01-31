#include<stdio.h>
void print()
{
	int result;
	scanf("%d",&result);
	if(result>0){
		print();
		printf("%d ",result);
	}
}
int main()
{
	print();
	return 0;
}
