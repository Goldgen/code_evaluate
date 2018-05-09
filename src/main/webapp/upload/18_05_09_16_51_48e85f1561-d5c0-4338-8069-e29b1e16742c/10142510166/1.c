#include <stdio.h>
#include <stdlib.h>

int main() {
    /*用户从键盘输入5个数，请求其平均值 */

    double a, b, c, d, e;
    scanf("%lf %lf %lf %lf %lf", &a, &b, &c, &d, &e);
    printf("the average is %.2lf", (a + b + c + d + e) / 5);
    return 0;

}