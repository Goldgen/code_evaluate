/*
 * 92: ??? strmcpy ????
 */
#include <stdio.h>

char *strmcpy(char* t, const char* s, int m)
{
	const char *p = s + m;
	while (*p) {
		*t++ = *p++;
	}
	*t = '\0';
	return t;
}

int main(void)
{
	char dest[81], src[81];
	int m;
	gets(src);
	scanf("%d",&m);
	strmcpy(dest, src, m);
	printf("%s\n", dest);
	return 0;
}
