/*
 * 93: ????????i2a
 */
#include <stdio.h>
#include <string.h>

char *i2a(char *p, int n)
{
	static char *t[] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};
	if (n >= 0 && n <=9)
		return strcat(p, t[n]);
	return strcat(i2a(p, n/10), t[n%10]);
}

int main(void)
{
	int n;
	char p[10];

	while (~scanf("%d", &n))
	{
		memset(p, '\0', sizeof(p));
		printf("%s\n", i2a(p, n));
	}

	return 0;
}
