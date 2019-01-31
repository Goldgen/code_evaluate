#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*（循环）（辗转相除法）在一行中输入2个正整数，
计算并输出它们的最大公约数。
2个正整数之间用一个空格分隔。
样例输入：
12 18
样例输出：
最大公约数是: 6*/

int main()
{
    int m, n, k;
    scanf("%d%d", &m, &n);
    if(m>n) k=n;
    else k=m;
    for(int i=k; i>=1; i--){
        if(m%i==0 && n%i==0){
            printf("最大公约数是: %d", i);
            break;
        }
    }
    return 0;
}
