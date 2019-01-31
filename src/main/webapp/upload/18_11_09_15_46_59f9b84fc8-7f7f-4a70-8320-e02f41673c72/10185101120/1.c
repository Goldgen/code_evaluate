#include<stdio.h>
int main()
{
	int i=6;
	for (;i<=96;i++)
	{
		if (i%3==0&&i%10==6)
		{
			printf ("%d",i);
			if (i<96)
		    {
			    printf (" ");
		    }
		}
	}
}