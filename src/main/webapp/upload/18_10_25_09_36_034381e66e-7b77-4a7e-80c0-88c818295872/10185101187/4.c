#include <stdio.h>

int main()
{
    int n, r, l;
    scanf("%d", &n);

    for(l = 1, r = 1; r <= n; r++)
            printf("*");
    printf("\n");

    for(l = 2; l < n; l++)
    {
      for(r = 1; r <= n; r++)
        {
        if(r == 1 || r == n)
            printf("*");
        else
            printf(" ");
        }
        printf("\n");
    }

    for(l = n, r = 1; r <= n; r++)
            printf("*");
}
