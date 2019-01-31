#include <stdio.h>
#include <string.h>
int main()
{
char a[81],b[81],c[81],ch;
int j=1;
scanf("%s %s",a,b);
strcpy(c,a);
for(int i=0;c[i]!='\0';i++)
{if(strcmp(c,b)==0)
{printf("\"%s\" is a rotation of \"%s\"",a,b);
return 0;}
ch=c[0];
for(j=1;c[j]!='\0';j++)
c[j-1]=c[j];
c[j-1]=ch;
}
printf("\"%s\" is NOT a rotation of \"%s\"",a,b);
return 0;}
