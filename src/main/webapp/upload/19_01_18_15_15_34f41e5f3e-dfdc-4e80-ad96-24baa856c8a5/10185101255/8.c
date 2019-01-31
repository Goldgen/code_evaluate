#include<stdio.h>
#include<string.h>
char a[10];
int main()
{
	int i,n,len;
	
	scanf("%s %d",a,&n);
	len=strlen(a);
	n=len-n%len;
	printf("%d ",len);
	if(n==len)
		for(i=0;i<len;i++)
		printf("%c",a[i]);
	else
	{
		for(i=n;i<len;i++)
		printf("%c",a[i]);
		for(i=0;i<n;i++)
		printf("%c",a[i]);
	}
	return 0;
}
