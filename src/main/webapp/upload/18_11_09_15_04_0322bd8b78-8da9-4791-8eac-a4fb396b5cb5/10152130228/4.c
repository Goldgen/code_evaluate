#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*（循环）求n的阶乘mod 20181111的结果。
输入n范围是（0<=n<=100），
输出n！mod 20181111之后的数字。
（即对20181111取余数）

样例输入：
5
样例输出：
120*/

int main()
{
    int n;
    scanf("%d", &n);
    long long m=1;
	int res;
    for(int i=1; i<=n; i++){
        m=(long long)m*i;
    }
    res = m%20181111;
    printf("%d", res);
    return 0;
}
