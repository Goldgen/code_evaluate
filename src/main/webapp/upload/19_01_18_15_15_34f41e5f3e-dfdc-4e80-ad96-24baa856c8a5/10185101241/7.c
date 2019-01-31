#include<stdio.h> 
#include<math.h>

int main()
{
	int a,b=0,c,d=0;
	scanf("%d",&a);
	while(pow(2,b)<a)
	{
		b++;
	}
	for(c=b;c>=0;c--)
	{
		if((a-pow(2,c))>=0) 
		{
			a=a-pow(2,c);
			d=d+1;
		}
		else continue;
	}
	printf("%d",d);
	return 0;
}