#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
long long  hex2int(char s[])
{
	long long  n;
	n=strlen(s);
	for(int i=0;i<n;i++)
	{
		int b;
		b=isalpha(s[i]);
		if(b)
		  {
		    s[i]=toupper(s[i]);
		s[i]=s[i]-'0'-7;}
		else
		s[i]=s[i]-'0';
	}
	long long sum=0;
	for(int i=0;i<n;i++)
	{
		sum=sum+s[i]*pow(16,n-1-i);
	}
	return sum;
};
int main() 
{
	char s[100];
	scanf("%s",s);
	long long  a;
	a=hex2int(s);
	printf("%lld",a);
	return 0;
}