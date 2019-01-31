#include <stdio.h>
#include <string.h>
int main ()
{
	char str[11];
	char arr[11];
	int m,q,x,y;
	int i=0,j=0,k=0;
		while( (str[i]=getchar())!=' ' )
		i++;
		str[i]='\0';	
		scanf("%d",&m);
		q = m % i ;
		for(j=0;j<i;j++)
			arr[j]=str[j];
		arr[j]='\0';
		for(k=0;k<i;k++)
		{
			x = k + q ;
			y = x % i ;
			str[y]=arr[k];
		}	
		printf("%d %s",i,str);	
	return 0;
}