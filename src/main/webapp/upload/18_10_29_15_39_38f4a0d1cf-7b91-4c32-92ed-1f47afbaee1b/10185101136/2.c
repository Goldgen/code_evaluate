#include <stdio.h>

int main()
{
    double e = 0, num = 1, E = 1, a;
    while (E >= 1e-6){
        e += E;
        a = 1.0;
        for (int j = 1; j <= num; ++j)
            a *= j;
        E = 1 / a;
        ++num;
    }
    printf("%.6lf", e);
    return 0;
}
