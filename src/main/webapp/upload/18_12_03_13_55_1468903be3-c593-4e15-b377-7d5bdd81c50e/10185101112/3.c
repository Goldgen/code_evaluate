#include <stdio.h>
#include <string.h>
char ch1[100];
char ch2[100];

int main(){
    int i=0,j=0,min=0;  
    scanf("%s %s",ch1,ch2);
    i=strlen(ch1);
	j=strlen(ch2);
	min=(i<j)?i:j;
	for (int k=0;k<min;k++)
	{
		putchar(ch1[k]);
		putchar(ch2[k]);
	}
	if (i<j)
	{
		for (int k=min;k<j;k++)
		{
			putchar(ch2[k]);
		}
	}
	if (i>j)
	{
		for (int k=min;k<i;k++)
		{
			putchar(ch1[k]);
		}
	}	
	return 0;
} 