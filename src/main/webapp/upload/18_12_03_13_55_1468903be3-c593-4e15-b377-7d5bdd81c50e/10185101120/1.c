#include<stdio.h>
char s[]=" 22233344455566677778889999";
int main()
{
	int i;
	char a[100];
	scanf ("%s",&a);
	for (i=0;i<8;++i)
		putchar (s[a[i]-0x60]);
}