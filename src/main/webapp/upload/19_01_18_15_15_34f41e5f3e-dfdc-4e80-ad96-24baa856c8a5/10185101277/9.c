#include <stdio.h>
#include <stdlib.h>
int main()
{
    int s = 1, h;
    int i, j;
    scanf("%d", &h);
    printf("1");
    for (i = 2; i <= h; s = 1, i++)
    {
        printf("\n1 ");
        for (j = 1; j <= i - 2; j++)
            printf("%d ", (s = (i - j) * s / j));
        printf("1");
    }
    return 0;
}
