#include <stdio.h>
#include <limits.h>

int main()
{
    double score, max_s = 0, min_s = INT_MAX / 1.0;
    scanf("%lf", &score);
    while (score >= 0){
        if (score - max_s > 1e-5)
            max_s = score;
        if (min_s - score > 1e-5)
            min_s = score;
        scanf("%lf", &score);
    }
    printf("最高成绩是: %.2lf, 最低成绩是: %.2lf", max_s, min_s);
    return 0;
}

