#include <stdio.h>
#include <math.h>
int main()
{
    int n,i,j,k;
    scanf ("%d", &n);
    for(k=0;k<n-1;k++)
           putchar(' ');
           putchar('A');
        for (i = 0; i < n-1; i++)
        {
            putchar('\n');
            for (j = 0; j < n - i - 2; j++)
                putchar(' ');
            for (j = 0; j < i * 2 + 3; j++)
                putchar('A' + i+1);

        }
        for (i = n - 2; i >= 0; i--)
        {
            putchar('\n');
            for (j = 0; j < n - i - 1; j++)
                putchar(' ');
            for (j = 0; j < i * 2+1 ; j++)
                 putchar('A'-i + n + n-2);
        }

    return 0;
}
