#include <stdio.h>
#include <stdlib.h>

int main() {
    /*43.	从键盘输入若干学生的成绩，统计并输出最高成绩和最低成绩，当输入负数时结束输入；

 */
    double a, b, c, t;
    scanf("%lf", &a);
    b = a;//max
    c = a;//min
    while (a >= 0) {
        if (a > b) {
            t = a;
            a = b;
            b = t;
        } else if (a < c) {
            t = a;
            a = c;
            c = t;
        } else;
        scanf("%lf", &a);
    }
    printf("%llf is the biggest number\n%llf is the smallest number", b, c);
    return 0;
}