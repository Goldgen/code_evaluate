#include<stdio.h>
int main()
{
	char arr[80],brr[80],a;
	int b=0,c=0;
	for(int i=0;i<80;i++)
	{
		a=getchar();
		if(a==' ')
		break;
		else
		arr[i]=a;
		b++;
	}
	for(int i=0;i<80;i++)
	{
		a=getchar();
		if(a=='\n')
		break;
		else
		brr[i]=a;
		c++;
	}
	for(int i=0;i<80;i++)
	{if(i<b)
		printf("%c",arr[i]);
		if(i<c)
		printf("%c",brr[i]);
	}

	return 0;
}