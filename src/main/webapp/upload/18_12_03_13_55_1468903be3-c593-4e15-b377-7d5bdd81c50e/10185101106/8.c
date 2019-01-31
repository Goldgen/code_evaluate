#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	gets(s);
	int n,i = 0,j = 0;
	n=strlen(s);
	for(i=0;i<n/2;i++)
	{
		if(s[i]==s[n-i-1])
		j++;
		else
		{
			j=0;break;
		}
	}
	if(j!=0||n==1)
	printf("True");
	else
	printf("False");
	return 0;
	
}