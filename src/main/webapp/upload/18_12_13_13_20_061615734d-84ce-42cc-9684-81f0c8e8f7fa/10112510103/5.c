/*
 * 95: ????????????????
 */

#include <stdio.h>
#include <string.h>

void Number2Alpha(int n , char* mptr)
{
	static const char *month[] = {
		"January",
		"February",
		"March",
		"April",
		"May",
		"June",
		"July",
		"August",
		"September",
		"October" ,
		"November" ,
		"December",
	};

	strcpy(mptr, month[n-1]);
}

int main(void)
{
	int n;

	while (~scanf("%d", &n))
	{
		char str[10];
		Number2Alpha(n, str);
		printf("%s\n", str);
	}

	return 0;
}
