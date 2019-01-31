#include <stdio.h>

int main()
{
    int n, i, j, x, d=0;
    scanf("%d", &n);
    int a[n];
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);

    for(i=0; i<n; i++)
        for(j=n-1; j>i; j--)
            if(a[j]<a[j-1])
            {
                x = a[j];
                a[j] = a[j-1];
                a[j-1] = x;
            }

    for(i=0; i<n; i++)
    {
        if(d==0)
            d = 1;
        else
            printf(" ");
        printf("%d", a[i]);
    }
}
