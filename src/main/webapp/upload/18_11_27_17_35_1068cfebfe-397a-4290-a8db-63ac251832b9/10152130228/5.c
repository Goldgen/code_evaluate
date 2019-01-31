#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[111], n;
    int m, k;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
        scanf("%d", &a[i]);
    scanf("%d%d", &m, &k);
    for(int j=n-1; j>=m; j--)
        a[j+1]=a[j];
    a[m]=k;
    for(int i=0; i<n; i++)
        printf("%d ", a[i]);
    printf("%d", a[n]);
    return 0;
}
