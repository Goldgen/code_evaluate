#include <stdio.h>
#include <string.h>
char *i2a(char *p, int num)
{
	static char *t[] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};
	if (num>=0&&num<=9)
		return strcat(p, t[num]);
	return strcat(i2a(p, num/10), t[num%10]);
}
int main(void)
{
	int num;
	char p[20]={"\0"};
	scanf("%d", &num);
    printf("%s\n", i2a(p, num));
	return 0;
}