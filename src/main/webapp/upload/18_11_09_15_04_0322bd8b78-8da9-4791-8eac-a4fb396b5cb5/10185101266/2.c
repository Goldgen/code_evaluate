#include<stdio.h>
int main()
{
	int N,n,i;
	scanf("%d",&N);
	for(n=1;n<=N;n++)
	{
	
		for(i=1;i<=(N-n)*2;i++)
	    printf(" ");
	    printf("1");
	
		for(i=2;i<=n;i++)
	    printf("+%d",i);
	    printf("=");
	    printf("%d",n);
    
		for(i=n-1;i>=1;i--)
        printf("+%d",i);
    
		if(n!=N)
        printf("\n");
	}
    return 0;
}
	  
	    
	
		
	
	