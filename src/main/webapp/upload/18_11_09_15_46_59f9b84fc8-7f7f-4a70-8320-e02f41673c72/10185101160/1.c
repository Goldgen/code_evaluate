#include <stdio.h>
int main()
{
	int i,rem;
	printf("6");
	for(i=16;i<=96;i+=10)
	{
		rem=i%3;
		if(rem==0)
			printf(" %d",i);
	}
	return 0;
}
