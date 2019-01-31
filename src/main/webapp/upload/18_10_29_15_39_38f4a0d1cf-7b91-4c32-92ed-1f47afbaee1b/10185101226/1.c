#include <stdio.h>
#include <stdlib.h>

int main()
{
	int cock;
	int hen;
	int chick;
	for(cock=1;cock<=14;cock++)
	{
		for(hen=1;hen<=20;hen++)
		{
			chick=100-cock-hen;
			if(7*cock+5*hen+chick/3==100&&chick%3==0)
			{
				printf("%d %d %d",cock,hen,chick);
			}
		}
	}
	 return 0;
}

