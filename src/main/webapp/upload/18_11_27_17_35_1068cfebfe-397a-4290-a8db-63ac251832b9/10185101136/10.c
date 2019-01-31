#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int a[100];
    scanf("%d", &n);
    for (int i = 0; i < n; ++i)
        scanf("%d", &a[i]);
    for (int i = n - 1; i > 0; --i)
        for (int j = n - 1; j > n - i - 1; --j)
            if (a[j] < a[j - 1]){
                int temp;
                temp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = temp;
            }
    for (int i = 0; i < n; ++i){
        if (i != 0)
            printf(" ");
        printf("%d", a[i]);
    }
    return 0;
}
