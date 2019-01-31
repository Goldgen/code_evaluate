#include <stdio.h>
int main()
{int n;
char num[51];
char *spr=num;
scanf("%d",&n);
getchar();
for(int k=0;k<n;k++)
{gets(num);
printf("case #%d: ",k);
for(int i=0;num[i]!='\0';i++)
{if(num[i]=='Z')
{printf("A");
continue;}
printf("%c",*(spr+i)+1);}
if(k!=n-1)
printf("\n");}
return 0;}
