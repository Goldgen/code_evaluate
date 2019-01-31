#include <stdio.h>
#include <stdlib.h>
int main()
{
    int s = 1, n;                    
    int i, j;                
    scanf("%d", &n);              
    printf("1");                   
    for (i = 2; i <= n; s = 1, i++)  
    {
        printf("\n1 ");               
        for (j = 1; j <= i - 2; j++) 
        printf("%d ", (s = (i - j) * s / j));
	    printf("1");
	}
    return 0;
}
