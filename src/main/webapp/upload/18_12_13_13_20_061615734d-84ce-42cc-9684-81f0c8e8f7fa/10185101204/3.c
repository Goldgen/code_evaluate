#include <stdio.h>
int main()
{int n,i;
char num[10];
scanf("%d",&n);
for(i=0;n!=0;i++)
{num[i]=n%10+'0';
n=n/10;}
for(int j=i-1;j>=0;j--)
    printf("%c",num[j]);
return 0;}