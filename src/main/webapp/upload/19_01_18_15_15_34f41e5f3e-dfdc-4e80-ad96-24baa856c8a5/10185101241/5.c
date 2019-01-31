#include<stdio.h>

int main()
{
	int x,y=0,z=0;
	for(x=1;x<=100;x++)
	{
		if((x%2)!=0) y+=x;
		else z+=x;
	}
	printf("%d %d",y,z);
	return 0;
 } 