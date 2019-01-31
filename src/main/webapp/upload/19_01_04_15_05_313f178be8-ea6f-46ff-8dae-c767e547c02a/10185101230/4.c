#include<stdio.h>
#include<string.h>
int main()
{
char str[120];
gets(str);
int l,j,i;
l=strlen(str);
int num[120]={0};
for(i=0;i<120;i++)
{
    for(j=1;j<120;j++)
if(str[i]==str[j]) num[i]++;
}
for(i=0;i<=l;i++)
    printf(" %c %c;",str[i],num[i]);
return 0;
}
