#include <stdio.h>
int main()
{
	int a,b,rem;
	scanf("%d%d",&a,&b);
	rem=a%b;
	while(rem>0)
		{
			a=b;
			b=rem;
			rem=a%b;		
		}
	printf("最大公约数是: %d",b);
	return 0;	
}
		