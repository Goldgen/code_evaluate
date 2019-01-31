#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
int b[]={0,1,2,3,4,5,6,7,8,9,0,0,0,0,0,0,0,10,11,12,13,14,15};
int main()
{
	long long a=0,ls;
	char s[8];
	scanf ("%s",&s);
	ls=strlen(s);
	for (int i=0;i<ls;i++){
		a=a*16+b[toupper(s[i])-48];
	}
	printf ("%lld",a);
}