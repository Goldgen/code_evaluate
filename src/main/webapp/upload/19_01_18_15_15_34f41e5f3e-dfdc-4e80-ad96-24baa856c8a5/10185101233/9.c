#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a=1;
    int j=1;
    printf("1");
    for (int i=2; i<=n; a=1, i++)
    {
        printf("\n1 ");
        for (j = 1; j <= i - 2; j++)
        printf("%d ", (a = (i - j) * a / j));
        printf("1");
    }
    return 0;
}
