#include<stdio.h>
#include<string.h>
#define len 105
int main()
{
	char a[len], b[len];int c[len];
	int i,j,t = 0;
	gets(a);
	for (i = 0; i < strlen(a); i++)
	{
		if (a[i] != ' ')
		{
			int key = 0;
			for ( j = 0; j < t; j++)
			{
				if (b[j] == a[i])
				{
					c[j]++;
					key = 1;
					break;
				}
			}
			if (!key)
			{
				b[t] = a[i];
				c[t] = 1;
				t++;
			}
		}
	}
	for (i = 0; i < t; i++)
	{
		printf("%c %d; ", b[i], c[i]);
	}

	return 0;
}
