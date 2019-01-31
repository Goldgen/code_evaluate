#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
char str[1200];
char ss[20];
scanf("%s",str);
scanf("%s",ss);
char *pt;
pt=strstr(str,ss);
if(pt==NULL) printf("0");
}
