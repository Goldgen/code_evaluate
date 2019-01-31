#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    int k=2;
    scanf("%d",&n);
    printf("*\n");
    while(k<n)
    {
        printf("*");
        for(int j=2;j<k;++j)
          printf(" ");
        printf("*\n");
        k++;
    }
    for(int i=1;i<=n;i++)
        printf("*");
    return 0;
}