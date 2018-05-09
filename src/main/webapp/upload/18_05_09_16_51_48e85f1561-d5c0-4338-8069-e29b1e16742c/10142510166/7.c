#include <stdio.h>
#include <stdlib.h>

/*在一行中输入2个正整数，计算并输出它们的最大公约数。
注意：2个正整数之间用一个空格分隔。
例如：输入：12 18，输出：6。


*/
int gcd(int a, int b);

int main() {
    int c, d, e, out, i, j;
    scanf("%d %d", &c, &d);
    printf("%d", gcd(c, d));
    return 0;
}

int gcd(int a, int b) {
    int r = a % b;
    return r == 0 ? b : gcd(b, r);
}