#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m, p[11], q[11];
    scanf("%d%d", &n, &m);
    for(int i=0; i<n; i++)
        scanf("%d", &p[i]);
    for(int i=0; i<n; i++){
        q[i]=p[(n-m+i)%n];
    }
    for(int i=0; i<n-1; i++)
        printf("%d ", q[i]);
    printf("%d", q[n-1]);
    return 0;
}
