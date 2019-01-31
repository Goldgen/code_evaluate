#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int i;
    scanf("%d",&n);
    printf("*\n");
    for (i=1;i<=(n-2);++i)
    {
    printf("*");
    for (int j=1;j<=(i-1);++j)
    printf(" ");
    printf("*\n");
    }
    for (int k=1;k<=n;++k)
    printf("*");
	
    return 0;
}
