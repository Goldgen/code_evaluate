#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*47.	输入两个正整数n（保证不会以0开头）和m，输出n的位数以及n经过循环右移m位后的数(两者以一个空格分隔) 。
例如: 输入：1 1，输出：1 1
     输入：123 2，输出：3 231
     输入：1001234 5，输出：7 123410
     输入：2100012345 55，输出：10 1234521000

*/

int main() {
    int n, m, a, b, c, d;
    scanf("%d %d", &n, &m);
    a = floor(log10(n)) + 1;//位数
    m %= a;//确保移位小于位数
    b = n % (int) (floor(pow(10, m)));//原低位
    c = floor(n / pow(10, m));//原高位
    d = b * floor(pow(10, a - m)) + c;
    printf("%d %d", a, d);
    return 0;
}