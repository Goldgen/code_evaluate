#include<stdio.h>
#include<string.h>
int main()
{
	char ch1[100], ch2[100], ch[200];
	scanf("%s %s",ch1,ch2);
	int a,b,c;
	a = strlen(ch1);
	b = strlen(ch2);
	if(a>b)
	c=b;
	else
	c=a;
	int i = 0,j = 0;
	for(;i<c;i++,j=j+2)
	{
		ch[j]=ch1[i];
		ch[j+1]=ch2[i];
	}
	if(a>b)
	{
		for(i=c,j=2*c;i<=a;i++,j++)
		ch[j]=ch1[i];
	}
	else
	{
		for(i=c,j=2*c;i<=b;i++,j++)
		ch[j]=ch2[i];
	}
	puts(ch);
	return 0;
	 
}