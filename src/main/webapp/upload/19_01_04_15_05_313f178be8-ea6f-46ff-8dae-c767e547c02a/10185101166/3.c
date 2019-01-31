#include<stdio.h>
#include<string.h>



int main()
{
	char A[10][1050];
	char B[10][1050];
	
	int i = 0 ;
	int p[10] = {0};
	char t,y,e;
	
	for(;;)
	{
		
		scanf("%s %s",A[i],B[i]);
		if(getchar() == '\n')
		i++;
		if(getchar() == '#')
		break;
	}
	
	
	for(int m = 0;m < i;m++)
	{
		for(int n = 0,q = 0;n < strlen(A[m]);)
		{
			if( A[m][n] == B[m][q])
			{
				if(B[m][q+1] != '\0')
				q = 0,n++,p[m]++;
				else
				q++,n++;
			}
			
			
		}
		
	}
	
	for(int u = 0;u < i;u++)
	{
		printf("%d",p[u]);
		if(u < i - 1)
		printf("\n");
	}
}