
#include <stdio.h>
 
int main()
{
	int a;
	scanf("%d",&a);
    int count = 0;
	while (a)
	{
		if ((a % 2) == 1)
			count++;
		a = a / 2;
	}
	printf("%d",count);
	return 0;
}
