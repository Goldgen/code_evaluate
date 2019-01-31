#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a[5], ans = 0;
    for (int i = 0; i < 5; i++){
        scanf("%lf", &a[i]);
        a[i] = 1.0 / a[i];
        ans += a[i];
        printf("%.2lf", a[i]);
        if (i != 4)
            printf(" ");
    }
    printf("\n%.6lf", ans);
    return 0;
}
