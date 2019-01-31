#include<stdio.h>

int main()
{
	char str1[80];
	char str2[80];
	scanf("%s %s",str1,str2);
	
	int m = 0, n = 0;
	for(int i = 0;str1[i] != '\0';i++)
	{
		m++;
	}
	for(int i = 0;str2[i] != '\0';i++)
	{
		n++;
	}
	int y = (n > m)?m:n , u;
    
	if(n>m)
	u = 1;
	else
	u = 0;
	
	for(int p = 0;p < n;p++)
	{
		printf("%c%c",str1[p],str2[p]);
	}
	
	switch(u)
	{
		case 1:
			for(int i = m;i < n;i++)
			{
				printf("%c",str2[i]);
			}
			break;
		case 0:
			for(int i = n;i < m;i++)
			{
				printf("%c",str1[i]);
			}break;
			
	}
}