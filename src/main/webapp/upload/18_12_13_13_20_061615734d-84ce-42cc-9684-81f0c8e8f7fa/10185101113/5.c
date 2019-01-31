#include <stdio.h>
#include <string.h>
char *Number2Alpha(char *p, int num)
{
	static char *Alpha[] = {"January","February",
							"March","April","May",
							"June","July","August",
							"September","October",
							"November","December"};
    return strcat(p, Alpha[num-1]);
}

int main(void)
{
	int num;
	char p[20]={"\0"};
	scanf("%d",&num);
    printf("%s\n",Number2Alpha(p,num));
	return 0;
}
