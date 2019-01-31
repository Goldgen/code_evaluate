#include <stdio.h>
#include <stdlib.h>
int main()
{char str[101],data[101]={0};
int num[101];
int i=0,j=0,k=0;
gets(str);
for(i=0;str[i]==' ';)
	i++;
data[0]=str[i];
num[0]=1;
i++;
for(;str[i]!='\0';i++)
{if(str[i]!=' ')
{for(j=0;data[j]!='\0';j++)
{if(str[i]==data[j])
{num[j]++;
break;}
else if(data[j+1]=='\0')
{data[j+1]=str[i];
num[j+1]=1;
break;}}}}
for(k=0;data[k]!='\0';k++)
    printf("%c %d; ",data[k],num[k]);
return 0;}