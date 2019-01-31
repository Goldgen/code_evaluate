#include <stdio.h>
#include <string.h>

int isright(char a[],char b[],int n)
{
    static int mark=0;
    char temp[100];
	memset(temp,0,sizeof(temp));
    if(strcmp(a,b)==0)
        return 1;
    temp[0]=b[n-1];
    strncat(temp,b,n-1);
    mark++;
    if(mark==n)
        return 0;
	return isright(a,temp,n);
}

int main()
{
    char s1[100],s2[100];
    scanf("%s %s",s1,s2);
    if(isright(s1,s2,strlen(s2)))
        printf("\"%s\" is a rotation of \"%s\"",s1,s2);
    else
        printf("\"%s\" is NOT a rotation of \"%s\"",s1,s2);
    return 0;
}