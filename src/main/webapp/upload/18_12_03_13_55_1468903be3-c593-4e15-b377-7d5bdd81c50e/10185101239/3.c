#include<stdio.h>
#include<string.h>
int main()
{
char st1[81],st2[81];
int j,i;
scanf("%s%s",st1,st2);
int m,n,max;
	m=strlen(st1);
	n=strlen(st2);
if(m>n) max=m;
else max=n;
for(j=0;j<max;j++){
	if(st2[j]=='\0'&&st1[j]!='\0'){
		for(i=j;st1[i]!='\0';i++)
			printf("%c",st1[i]);
		break;}
	else if(st1[j]=='\0'&&st2[j]!='\0'){
		for(i=j;st2[i]!='\0';i++)
			printf("%c",st2[i]);
		break;}
	else
			printf("%c%c",st1[j],st2[j]);
}
return 0;
}
