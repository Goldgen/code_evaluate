#include<stdio.h>
#include<string.h>
int main()
{
	char s[100] ,ex[100];
	gets (s) ;
	gets (ex) ;
	int n , m ;
	n = strlen (s) ;
	m = strlen (ex) ;
	int i = 0 ,j = 0,k[100] ,l;
	for(i = 0 ;i < n ; i++)
	{
		l = strncmp(s+i,ex,m);
		if(l == 0)
		{
			k[j] = i;
			j++;
		}
	}
	if(j == 0)
	k[0] = -1;
	printf("%s: %d time(s), first at %d",ex,j,k[0]);
	
	
}