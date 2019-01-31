#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n,b=2;
	scanf("%d",&n);
	printf("{}\n");
	for(int i=0;i<n-1;++i)
       b*=2;
	for(int i=1;i<b;++i)
     {  printf("{");
		int m=0;
		int a=i;
		while(a!=0)
		{if(a%2!=0&&a!=1)
            printf("%d,",m);
         else if(a%2!=0&&a==1)
            printf("%d",m);
         a/=2;
         ++m;}
		printf("}");
		if(i!=b-1)
		printf("\n");
	}
}

