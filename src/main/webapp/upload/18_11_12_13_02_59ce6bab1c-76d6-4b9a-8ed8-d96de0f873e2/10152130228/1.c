#include <stdio.h>
#include <stdlib.h>

/*（函数）请用函数分解的方法
实现Beginning C的chapter 4-1的练习：
乘法口诀表的输出。
输入正整数1≤n≤9，注意格式，参考样例输出。
样例输入：
5
样例输出：
 1 * 1 =  1
 1 * 2 =  2 2 * 2 =  4
 1 * 3 =  3 2 * 3 =  6 3 * 3 =  9
 1 * 4 =  4 2 * 4 =  8 3 * 4 = 12 4 * 4 = 16
 1 * 5 =  5 2 * 5 = 10 3 * 5 = 15 4 * 5 = 20 5 * 5 = 25
 */

void table(int n){
    for(int i=0; i<n+1; i++){
        printf(" %d * %d = %2d", i+1, n+1, (n+1)*(i+1));
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0; i<n-1; i++){
        table(i);
        printf("\n");
    }
    table(n-1);
    return 0;
}
