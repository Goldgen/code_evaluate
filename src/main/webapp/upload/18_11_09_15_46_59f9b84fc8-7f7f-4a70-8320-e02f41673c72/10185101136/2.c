#include <stdio.h>

int main()
{
    double a = 2.0, b = 1.0, ans = 0.0, c;
    int i = 0;
    for (i = 0; i < 50; ++i){
        ans += a / b;
        c = a;
        a = c + b;
        b = c;
    }
    printf("%.2lf", ans);
    return 0;
}
