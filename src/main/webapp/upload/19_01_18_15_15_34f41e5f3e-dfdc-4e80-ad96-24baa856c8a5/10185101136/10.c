#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n = 0, k, a[10];
    bool notFirst = false;
    for (int i = 0; i <= 10; ++i)
        a[i] = i;
    scanf("%d", &n);
    for (int i = 0; i < (1 << n); ++i){
        printf("{");
        k = 0;
        notFirst = false;
        for (int j = i; j > 0; j >>= 1){
            if (j & 1){
                if (notFirst)
                    printf(",");
                else
                    notFirst = true;
                printf("%d", a[k]);
            }
            ++k;
        }
        printf("}");
        if (i != (1 << n) - 1)
            printf("\n");
    }
    return 0;
}
