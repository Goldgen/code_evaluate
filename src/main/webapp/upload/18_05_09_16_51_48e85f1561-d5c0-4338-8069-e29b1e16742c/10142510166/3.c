#include <stdio.h>
#include <stdlib.h>

int main() {
    /*37.	用户输入n（n>=4）,你的程序输出直角三角形
*
**
***
**** */

    int n, i, j;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }

        if (i != n)
            printf("\n");
    }
    return 0;

}