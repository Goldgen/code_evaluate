#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, a[100], index, element;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i)
        scanf("%d", &a[i]);
    scanf("%d %d", &index, &element);
    for (int i = n; i > index; --i)
        a[i] = a[i - 1];
    a[index] = element;
    for (int i = 0; i <= n; ++i){
        if (i != 0)
            printf(" ");
        printf("%d", a[i]);
    }
    return 0;
}
