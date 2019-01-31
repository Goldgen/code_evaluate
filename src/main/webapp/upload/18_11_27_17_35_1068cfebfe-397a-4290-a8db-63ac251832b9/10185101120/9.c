#include<stdio.h>
#include<string.h>
int main()
{
	int l=0,la,lb,a[100]={0},b[100]={0},c[100]={0},x=0,i;
	char s[100];
	scanf ("%s",&s);
	la=strlen(s);
	for(i=0;i<la;i++){
		a[i]=s[la-i-1]-'0';
	}
	scanf ("%s",&s);
	lb=strlen(s);
	for(i=0;i<lb;i++){
		b[i]=s[lb-i-1]-'0';
	}
	for (i=0;i<100;i++){
		c[i]=a[i]+b[i]+x;
		x=c[i]/10;
		c[i]=c[i]%10;
		if (c[i]){
			l=i;
		}
	}
	for (i=l;i>=0;--i){
		printf ("%d",c[i]);
	}
}