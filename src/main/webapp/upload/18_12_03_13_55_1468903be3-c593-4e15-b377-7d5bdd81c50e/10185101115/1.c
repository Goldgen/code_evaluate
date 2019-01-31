#include <stdio.h>
#include <string.h>

int main()
{
	char arr[81];
	for(int i=0;i<8;i++)
	{
		scanf("%c",&arr[i]);
	}
	for(int i=0;i<8;i++)
	{
			if(arr[i]=='a'||arr[i]=='b'||arr[i]=='c')
			{
				printf("2");
			}
			else if(arr[i]=='d'||arr[i]=='e'||arr[i]=='f')
			{
				printf("3");
			}
			else if(arr[i]=='g'||arr[i]=='h'||arr[i]=='i')
			{
				printf("4");
			}
			else if(arr[i]=='j'||arr[i]=='k'||arr[i]=='l')
			{
				printf("5");
			}
			else if(arr[i]=='m'||arr[i]=='n'||arr[i]=='o')
			{
				printf("6");
			}
			else if(arr[i]=='p'||arr[i]=='q'||arr[i]=='r'||arr[i]=='s')
			{
				printf("7");
			}
			else if(arr[i]=='t'||arr[i]=='u'||arr[i]=='v')
			{
				printf("8");
			}
			else if(arr[i]=='w'||arr[i]=='x'||arr[i]=='y'||arr[i]=='z')
			{
				printf("9");
			}
	}
	return 0;	
}