#include <stdio.h>

int main()
{
    int l, r, n;
    scanf("%d", &n);

    printf("*\n**\n");

    for(l = 3; l < n; l++)
    {
       for(r = 1; r <= l; r++)
       {
           if(r == 1 || r == l)
              printf("*");
           else
              printf(" ");
       }
       printf("\n");
    }

    for(l = n, r = 1; r <= n; r++)
        printf("*");
}
