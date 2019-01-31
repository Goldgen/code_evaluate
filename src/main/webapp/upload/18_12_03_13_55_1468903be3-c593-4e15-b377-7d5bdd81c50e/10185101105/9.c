
#include<stdio.h>
#include<string.h>
int main()
{
	char a[80]={},b[80]={};
	int i,j,l,k=0,t=0,x;
	gets(a);
	scanf("%s",b);
	l=strlen(b);
	for(i=0;i<80;i++)
	{
		for(j=0;j<l;j++)
		{
			if(a[i+j]==b[j])
			{
				k=1;
			}
			else k=2;
			if(k==2)break;
		}
		if(k==1)++t;
		if(t==1)x=i,t++;
	}
	printf("%s: %d time(s), first at %d",b,--t,x);
	return 0;
}
