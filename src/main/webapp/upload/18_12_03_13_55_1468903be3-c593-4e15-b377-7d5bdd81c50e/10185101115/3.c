#include<stdio.h>
#include <string.h>

int main()
{
	char s1[81],s2[81];
    scanf("%s %s",s1,s2);
	int a=strlen(s1);
	int b=strlen(s2);
	char s3[a+b];
	if(a>=b)
	{
		for(int i=0;i<b;i++)
	{
		s3[2*i]=s1[i];
	}
	    for(int i=0;i<b;i++)
	{
		s3[2*i+1]=s2[i];
	}
	    for(int i=2*b;i<a+b;i++)
	{
		s3[i]=s1[i-b];
	}
	}
	else
	{
		for(int i=0;i<a;i++)
	{
		s3[2*i]=s1[i];
	}
		for(int i=0;i<a;i++)
	{
		s3[2*i+1]=s2[i];
	}
	    for(int i=2*a;i<a+b;i++)
	{
		s3[i]=s2[i-a];
    }
	}
	for(int i=0;i<a+b;i++)
	{
		printf("%c",s3[i]);
	}
} 