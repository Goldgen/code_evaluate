#include <ctype.h>
#include <stdio.h>
int main(void)
{
int n;
char s[100];
scanf("%d",&n);
itoa (n,s);
return 0;
}
void itoa (int n,char s[])
{
int i,j,sign;
if((sign=n)<0)
n=-n;
i=0;
do{
       s[i++]=n%10+'0';
}
while ((n/=10)>0);
if(sign<0)
s[i++]='-';
for(j=i-1;j>=0;j--)
       printf("%c",s[j]);
}
