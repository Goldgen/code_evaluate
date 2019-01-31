#include <stdio.h>
#include <string.h>

int main()
{
    int data[100], f[100];
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i){
        scanf("%d", &data[i]);
        f[i] = 1;
        if (i > 0 && data[i] == data[i - 1])
            f[i] = f[i - 1] + 1;
    }
    int ans = 0;
    for (int i = 0; i < n; ++i)
        if (f[i] > ans)
            ans = f[i];
    printf("%d", ans);
    return 0;
}
