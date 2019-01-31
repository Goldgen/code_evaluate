#include <stdio.h>
#include <string.h>
int main()
{
	char a[1001],b[1001];
	char c;
	int i=0,n=0,l1=0,l2=0;
	while(1)
	{
		scanf("%s%s",a,b);
		l1=strlen(a);
		l2=strlen(b);
		for(i=0;i<l1;)
		{
			if(strncmp(a+i,b,l2) == 0)
			{
				n++;
				i+=l2;
			}
			else
				i++;
		}
		printf("%d\n",n);
		if((c= getchar())=='#')
			break;
	}
	return 0;
}
