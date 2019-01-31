#include <stdio.h>

int main()
{
    int n, i, x, y, d=0;
    scanf("%d", &n);
    int a[n], b[n+1];
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
    scanf("%d%d", &y, &x);
    for(i=0; i<=n; i++)
    {
        if(i<y)
            b[i] = a[i];
        else if(i==y)
            b[i] = x;
        else
            b[i] = a[i-1];
    }
    for(i=0; i<=n; i++)
    {
        if(d==0)
            d = 1;
        else
            printf(" ");
        printf("%d", b[i]);
    }
}
