#include <stdio.h>
#include <string.h>
char* i2a(char p[],int n);
int main()
{
	char s[50];
	int m = 0,j = 0,len = 0; 
	scanf("%d",&m);
	i2a(s,m);
	len = strlen(s);
	for(j = len-1;j >= 0;j --)
		printf("%c",s[j]);
	return 0;
}
char* i2a(char p[],int n)
{
	int rem = 0,i = 0,x = 0;	
	rem = n % 10;
	p[i] = rem + '0';
	i++;
	x = n/10;
	if(x>0)
		i2a(p+1,n/10);
	else
	{
		p[i]='\0';
	}
	return p;
}
