#include <stdio.h>


int main() {
	printf("6");
	int i=1,num;
	for (;i<=9;i++)
	{num=i*10+6;
	if (num%3==0)
	printf(" %d",num);
	}
	return 0;
}