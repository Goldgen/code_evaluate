#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int n;

int check(int x)
{
	int i;
	if (x<2) return 0;
	for (i=2;i<=(int)sqrt((double)x);i++)
		if (x%i==0) return 0;
	return 1;
}

int main()
{
	scanf("%d",&n);
	int i;
	printf("%d",n);
	for(i=1;i<=n/2;i++)
		if (check(i)&&check(n-i))
			printf("=%d+%d",i,n-i);
    return 0;
}
