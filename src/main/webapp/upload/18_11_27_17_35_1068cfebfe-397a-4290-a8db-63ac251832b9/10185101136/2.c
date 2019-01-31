#include <stdio.h>

int main()
{
    double data[101] = {0}, ans = 0;
    for (int i = 0; i < 100; ++i){
        int a = 2 * (i + 1);
        data[i] = 1.0 / a / (a + 1) / (a + 2);
        if (i % 2 == 0)
            ans += data[i];
        else
            ans -= data[i];
    }
    printf("%.4lf", ans * 4.0 + 3.0);
    return 0;
}
