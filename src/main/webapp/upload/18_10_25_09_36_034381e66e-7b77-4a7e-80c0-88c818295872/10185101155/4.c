#include <stdio.h>
int main()
{
    int m,n;
    m = 1;
    scanf("%d",&n);
    while (m<=n*n)
    {
        if(m<=n||m>=n*n-n||m%n==1||m%n==0)
            printf("*");
            else
                printf(" ");
        if(m%n==0&&m!=n*n)
        {
            printf("\n");
        }
        m++;
    }
    return 0;
}