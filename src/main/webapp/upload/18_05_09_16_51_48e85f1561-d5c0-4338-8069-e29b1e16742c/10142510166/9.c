#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*编写一个程序，对输入的正整数n，输出{0,1,⋯,n-1}的所有子集。
例如用户输入3时，程序输出：{}，{0}，{1}，{0，1}，{2}，{0，2}，{1，2}，{0，1，2} (思考后完成)*/

int main() {
    int n, m, i, j, k;
    scanf("%d", &n);
    m = pow(2, n) - 1; //总子集个数
    for (i = 0; i <= m; i++) {
        printf("{");
        j = i;
        k = 0;
        while (j != 0) {
            if (j % 2 == 1)//对应位2进制为1，则输出数字
            {
                printf("%d", k);
                if (j != 1)
                    printf(",");
            }
            k++;
            j /= 2;
        }
        printf("}");
        if (i != m)
            printf(",");
    }
}