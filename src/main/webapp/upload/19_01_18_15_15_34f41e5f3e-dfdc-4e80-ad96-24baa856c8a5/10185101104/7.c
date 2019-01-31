#include <stdio.h>

int main()
{
	int num=0,place;
	long long int a;
	scanf("%lld",&a);
	while(a>0)
	{
		place=a%2;
		a=a/2;
		if(place==1)
			num++;
	}
	printf("%d",num);
	return 0;
}
