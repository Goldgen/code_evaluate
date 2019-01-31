#include<stdio.h>
#include <string.h>
char *strmcpy(char *t,char *s,int m)
{
    strcpy(t,s+m);
    return t;
}
int main()
{

	char str1[81];
	char newstr1[81];
	int m;
	gets(str1);
	scanf("%d",&m);
	char *pos = str1;
	char *des = newstr1;
    printf("%s",strmcpy(des,pos,m));
    return 0;
}