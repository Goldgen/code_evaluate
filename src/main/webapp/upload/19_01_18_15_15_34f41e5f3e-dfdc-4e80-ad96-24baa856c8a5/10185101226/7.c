#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
char a[10000];
memset(a,'\0',10000*sizeof(char));
int n,temp=0;
scanf("%d",&n);
itoa(n,a,2);
for(n=0;n<strlen(a);n++)
{
	if(a[n]=='1')
	temp++;
}
printf("%d\n",temp);
return 0;
}
