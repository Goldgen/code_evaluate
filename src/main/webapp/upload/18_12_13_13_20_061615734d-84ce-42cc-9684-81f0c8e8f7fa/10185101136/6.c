#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void rotate(int *p, int n, int m);

int main()
{
    int m, n;
    int a[15];
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; ++i)
        scanf("%d", &a[i]);
    rotate(a, n, m);
    for (int i = 0; i < n; ++i){
        printf("%d", a[i]);
        if (i != n - 1){
            printf(" ");
        }
    }
    return 0;
}
void rotate(int *p, int n, int m)
{
    int *pa;
    int copy[15];
    int *pcopy = copy;
    for (pa = p; pa < p + n; ++pa){
        *pcopy = *pa;
        ++pcopy;
    }
    pcopy = &copy[n - m];
    for (pa = p ; pa < p + m; ++pa){
        *pa = *pcopy;
        ++pcopy;
    }
    pcopy = &copy;
    for ( ; pa < p + n; ++pa){
        *pa = *pcopy;
        ++pcopy;
    }
    return;
}
