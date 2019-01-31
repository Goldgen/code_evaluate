#include <stdio.h>
#include <stdlib.h>
int main()
{
    int s=1,h;
    int i,j;
    scanf("%d",&h);
    printf("1\n");
    for (i = 2; i <= h; s = 1, i++)
    {
        printf("1 ");
        for (j = 1; j <= i - 2; j++)
            if(j==i)
				printf("%d", (s = (i - j) * s / j));
			else
				printf("%d ", (s = (i - j) * s / j));
        if(i!=h)
            printf("1\n");
        else
            printf("1");
    }
    return 0;
}
