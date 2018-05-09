#include<stdio.h>

void main() {
    int a[12] = {31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365};
    int b[12] = {31, 60, 91, 121, 152, 182, 213, 244, 274, 305, 335, 366};
    int y1 = 0, y2 = 0, m1 = 0, m2 = 0, d1 = 0, d2 = 0;
    int i = 0;
    int sum = 0;
    scanf("%d %d %d %d %d %d", &y1, &m1, &d1, &y2, &m2, &d2);
    for (i = y1 + 1; i < y2; i++) {
        if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
            sum = sum + 366;
        else sum = sum + 365;
    }

    if ((y1 % 4 == 0 && y1 % 100 != 0) || (y1 % 400 == 0))
        sum = sum + b[11] - b[m1 - 2] - d1;
    else sum = sum + a[11] - a[m1 - 2] - d1;

    if ((y2 % 4 == 0 && y2 % 100 != 0) || (y2 % 400 == 0))
        sum = sum + b[m2 - 2] + d2;
    else sum = sum + a[m2 - 2] + d2;
    printf("%d", sum);

}