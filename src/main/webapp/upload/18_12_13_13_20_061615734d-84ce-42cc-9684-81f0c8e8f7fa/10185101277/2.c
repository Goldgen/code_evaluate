#include <stdio.h>
#include <string.h>
#include<ctype.h>
#define SIZE 81

char* strmcpy(char* t, char* s, int m);
int main()
{
    char str[SIZE],strOut[SIZE]={0};
    int n;
    gets(str);
    scanf("%d",&n);
    strmcpy(strOut,str,n);
    printf("%s",strOut);
    return 0;
}
char* strmcpy(char* t, char* s, int m)
{
    char *p=s+m;
    while (*p) {
		*t++ = *p++;
	}
	*t = '\0';
}