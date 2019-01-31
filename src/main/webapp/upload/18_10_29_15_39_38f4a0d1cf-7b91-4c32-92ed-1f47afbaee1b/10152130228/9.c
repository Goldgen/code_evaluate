#include <stdio.h>
#include <stdlib.h>

/*（循环）输入一个整数n(2≤n≤10),
输出杨辉三角形(又称Pascal’s Triangle)的前n行
(每行都从第一列开始输出，两个数之间有一个空格，
 最后一个数之后没有空格)。
Note: 参考：http://en.wikipedia.org/wiki/Pascal%27s_triangle
样例输入：
6
样例输出：
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
1 5 10 10 5 1*/

int main()
{
    int n, a[11][11];
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        a[i][0]=1;
        a[i][i]=1;
    }
    for(int i=2; i<n; i++){
        for(int j=1; j<i; j++){
            a[i][j]=a[i-1][j-1]+a[i-1][j];
        }
    }
    printf("%d\n", a[0][0]);
    for(int i=1; i<n-1; i++){
        for(int j=0; j<i; j++){
            printf("%d ", a[i][j]);
        }
        printf("%d\n", a[i][i]);
    }
    for(int i=0; i<n-1; i++){
        printf("%d ", a[n-1][i]);
    }
    printf("%d", a[n-1][n-1]);
    return 0;
}
