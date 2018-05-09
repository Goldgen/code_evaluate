#include<stdio.h>

void main() {
    int max = 0, min = 0, t;
    scanf("%d %d", &max, &min);
    if (max < min) {
        t = max;
        max = min;
        min = t;
    }

    for (t = min; t > 0;) {
        if (t > max)
            max = t;
        if (t < min) min = t;
        scanf("%d", &t);
    }
    printf("最大值%d 最小值%d", max, min);

}