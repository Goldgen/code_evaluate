#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a = 0;
    int i = 0, j = 0;
    while (1) {
        scanf("%lf", &a);
        if (a >= 4 && a <= 10 && a == (int)a)
            break;
    }
    for (i = 1; i <= a; i++) {
        for (j = 1; j <= a; j++)
            if(i == 1 || i == a)
                printf("*");
            else if(j == 1 || j == a)
                printf("*");
            else
                printf(" ");
        printf("\n");
    }
    return 0;
}

