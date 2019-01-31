#include <stdio.h>
#include <string.h>
int main()
{int t;
char ph[10][30],ch[30];
scanf("%d",&t);
getchar();
for(int i=0;i<t;i++)
{gets(ph[i]);}
for(int i=0;i<t-1;i++)
{for(int j=0;j<t-i-1;j++)
{if(strcmp(ph[j+1],ph[j])>0)
{strcpy(ch,ph[j+1]);
strcpy(ph[j+1],ph[j]);
strcpy(ph[j],ch);}}}
for(int k=0;k<t;k++)
puts(ph[k]);
return 0;}
