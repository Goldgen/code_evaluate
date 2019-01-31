#include<stdio.h>
#include<string.h>
int main()
{
	char s[1000], ch1[1000], ch2[1000];
	gets(s);
	int n ;
	n = strlen (s) ;
	int i = 0, j = 0;
	while(s[i] == ' ')
		
	{
			i++;
	}
	
	for( ; s[i] != ' ' ;i++,j++)
	{
		ch1[j] = s[i];
	}
	
	int k = i;
	while( i < n)
	{
		while(s[i] == ' ')
		
		{
			i++;
		}
		 j = 0 ;
		while( s[i] != ' ')
		{
			ch2[j] = s[i];
			i++ ;j++ ;
		}
		k = i;
		int a, b ;
		a = strlen (ch1);
		b = strlen (ch2);
		if(a < b)
	
		strcpy(ch1 , ch2);
	}
		
	puts(ch1);
	return 0;
 } 
 