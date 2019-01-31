#include <stdio.h>
#include <string.h>
int main()
{
char d[81],k[81],ss[81],ch;
int j=1;
scanf("%s %s",d,k);
strcpy(ss,d);
for(int i=0;ss[i]!='\0';i++)
{
	if(strcmp(ss,k)==0)
{
		printf("\"%s\" is a rotation of \"%s\"",d,k);
return 0;
	}
ch=ss[0];
for(j=1;ss[j]!='\0';j++)
ss[j-1]=ss[j];
ss[j-1]=ch;}
printf("\"%s\" is NOT a rotation of \"%s\"",d,k);
return 0;}