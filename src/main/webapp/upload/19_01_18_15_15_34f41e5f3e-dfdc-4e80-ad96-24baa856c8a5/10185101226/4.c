#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double score, highest, lowest;
    int n;
    highest=-1; lowest=1000000000;
    n=0;
    for(;;++n)
    {
        scanf("%lf", &score);
        if (score < 0.0) break;
        if (highest < score) highest = score;
        if (lowest > score) lowest = score;
    }
    printf("最高成绩是: %.2lf，", highest);
    printf("最低成绩是: %.2lf", lowest);
    return 0;
}
