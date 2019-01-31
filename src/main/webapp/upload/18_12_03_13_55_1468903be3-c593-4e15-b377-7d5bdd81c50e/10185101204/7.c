#include <stdio.h>
int main()
{char data[81];
int k=0,p=0;
gets(data);
for(int i=0,j=0;i<81,data[i]!='\0';i++)
{if(data[i]==' ')
j=0;
else 
{j++;
if(j>k)
{k=j;
p=i;}}}
for(int x=p-k+1;x<=p;x++)
printf("%c",data[x]);
printf("\n");
return 0;}