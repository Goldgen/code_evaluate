#include <stdio.h>

int main()
{
    int a, ans = 0;
    char ch;

    for (int i = 1; i <= 8; ++i){
        scanf("%d", &a);
        ans += a;
    }
    printf("%d\n", ans);
    ans = 0;
    for (int i = 1; i <= 16; ++i){
        if (i % 2 == 1){
            scanf("%d", &a);
            ans += a;
        }
        else
            scanf("%c", &ch);
    }
    printf("%d", ans);
    return 0;
}
