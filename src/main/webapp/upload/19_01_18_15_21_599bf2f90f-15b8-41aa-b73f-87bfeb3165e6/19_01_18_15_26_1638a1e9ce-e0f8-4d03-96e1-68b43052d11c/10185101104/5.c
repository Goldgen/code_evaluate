#include <stdio.h>

int main()
{
	int a1,a2,a3,a4,a5,a6,a7,a8,sum=0;
	scanf("%d %d %d",&a1,&a2,&a3);
	scanf("%d %d %d",&a4,&a5,&a6);
	scanf("%d %d",&a7,&a8);
	sum=a1+a2+a3+a4+a5+a6+a7+a8;
	printf("%d\n",sum);
	scanf("%d,%d,%d",&a1,&a2,&a3);
	scanf("%d,%d,%d",&a4,&a5,&a6);
	scanf("%d,%d",&a7,&a8);
	sum=a1+a2+a3+a4+a5+a6+a7+a8;
	printf("%d",sum);
	return 0;
}