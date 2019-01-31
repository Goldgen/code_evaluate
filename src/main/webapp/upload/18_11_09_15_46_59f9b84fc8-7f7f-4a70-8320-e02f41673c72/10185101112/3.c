#include <stdio.h>


int main() {
	int n,i,k=2;
    scanf("%d",&n);
    
	
    for (i=1;i<=n-1;i++)
    putchar(' ');
	printf("%c",'A');
	
    for(;k<=n;k++)
    {
		printf("\n");
    	for (i=1;i<=n-k;i++)
    	putchar(' ');
    	for (i=1;i<=2*k-1;i=i+1)
		printf("%c",'A'+k-1);
	
	}
	for (int p=1;p<=n-1;p++)
	{
		printf("\n");
		for (i=1;i<=p;i++)
		putchar(' ');
		for (i=2*n-2*p-1;i>=1;i=i-1)
		printf("%c",'A'+n-1+p);
	}
}