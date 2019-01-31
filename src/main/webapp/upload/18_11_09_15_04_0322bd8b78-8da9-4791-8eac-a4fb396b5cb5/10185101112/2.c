#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i=1;
    for (;i<n;i++)
    {
        int k=1,j;
        for (k=1;k<=(n-i)*2;k++)
            printf(" ");
        printf("1");
        for (j=2;j<=i;j++)
            printf("+%d",j);
        printf("=");
        for (j=i;j>=2;j--)
            printf("%d+",j);
        printf ("1\n");
    }
    int j;
        printf("1");
        for (j=2;j<=n;j++)
            printf("+%d",j);
        printf("=");
        for (j=n;j>=2;j--)
            printf("%d+",j);
        printf ("1");
}
