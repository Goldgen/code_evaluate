#include <stdio.h>
#include <string.h>
int main()
{
    int n, m, i;
    scanf("%d %d", &n, &m);
    int num[n], temp[n];
    for(i = 0; i < n; i++)
        scanf("%d", &num[i]);
    for(i = m; i < n; i++)
        temp[i] = num[i - m];
    for(i = 0; i < m; i++)
        temp[i] = num[n - m + i];
    for(i = 0; i < n - 1; i++)
        printf("%d ", temp[i]);
    printf("%d", temp[n - 1]);
}
