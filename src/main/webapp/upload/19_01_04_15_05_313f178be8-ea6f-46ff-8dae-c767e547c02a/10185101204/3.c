#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{char a[1001],b[1001];
scanf("%s",a);
while(strcmp(a,"#")!=0)
{scanf("%s",b);
int i=0,j=0,k=0,t=0;
for(i=0;a[i]!='\0';i++)
{for(j=0,k=i;b[j]!='\0';j++,k++)
{if(a[k]!=b[j])
break;
if(b[j+1]=='\0')
{t++;
i=k;}}}
printf("%d\n",t);
scanf("%s",a);}
return 0;}
