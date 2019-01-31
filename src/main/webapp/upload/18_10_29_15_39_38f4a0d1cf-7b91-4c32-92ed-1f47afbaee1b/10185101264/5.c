#include <stdio.h>
int main()
{
	int odd=0,even=0;
	int i;
	for(i=1;i<=100;i++)
	{
		if(i%2==0)
			even+=i;
		else
			odd+=i;
	}
	printf("%d %d",odd,even);
}