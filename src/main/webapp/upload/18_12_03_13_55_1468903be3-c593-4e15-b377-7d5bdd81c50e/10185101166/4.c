#include<stdio.h>

int main()
{
	int m , n;
	scanf("%d %d",&m,&n);
	int str[m][n];
	for(int i = 0;i < m;i++)
	{
		for(int u = 0;u < n;u++)
		{
			scanf("%d",&str[i][u]);
		}
	}
    
    int msn[n][m];
    for(int x = 0;x < n;x++)
    {
    	for(int y = 0;y < m;y++)
    	{
    		msn[x][y] = str[y][x];
		}
	}
	
	for(int r = 0;r < n;r++)
	{
		for(int e = 0;e < m;e++)
		{
			printf("%d",msn[r][e]);
			if(e < m -1)
			printf(" ");
		}
		if(r < n - 1)
		printf("\n");
	 } 
}