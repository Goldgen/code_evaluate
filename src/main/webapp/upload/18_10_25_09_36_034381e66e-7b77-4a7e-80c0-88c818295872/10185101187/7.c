#include <stdio.h>

int main()
{
    int n, r, l;
    scanf("%d", &n);

    for(l = 1; l < n; l+=2)
    {
        for(r = 1; r <= n; r++)
        {
            if(r == (n + l)/2 || r == (n - l)/2 + 1)
                printf("*");
            else if(r < (n + l)/2)
                printf(" ");
        }
        printf("\n");
    }

    for(l = n, r = 1; r <= n; r++)
        printf("*");
}
