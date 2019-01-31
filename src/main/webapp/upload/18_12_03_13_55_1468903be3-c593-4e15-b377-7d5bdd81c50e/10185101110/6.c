#include<stdio.h>
#include<string.h>
int main()
{
	char arr[9]={'\0'};
	gets(arr);
	long long x,sum=0;

	for(int i=0;arr[i]!='\0';i++)
	{
		switch(arr[i])
		{
			case '0': x=0;break;
			case '1': x=1;break;
			case '2': x=2;break;
			case '3': x=3;break;
			case '4': x=4;break;
			case '5': x=5;break;
			case '6': x=6;break;
			case '7': x=7;break;
			case '8': x=8;break;
			case '9': x=9;break;
			case 'a':case 'A': x=10;break;
			case 'b':case 'B': x=11 ;break;
			case 'd': case 'D':x=13;break;
			case 'c': case 'C':x=12;break;
			case 'e': case 'E':x=14;break;
			case 'f': case 'F':x=15;break;
			default:break;

		}

     sum=sum*16+x;
		
	}
	printf("%lld",sum);
	return 0;
 } 