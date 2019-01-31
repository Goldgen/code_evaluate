#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*用户输入(1-100)之间的数num，请写程序输出num的个位和十位数的值。
输入：1-100之间的整数；输出：个位数 十位数
输入：29
输出：9 2*/

int main()
{
    int num, a, b; //a为个位，b为十位
    scanf("%d", &num);
    a = num%10;
    b = num/10;
    printf("%d %d", a,b);
    return 0;
}
