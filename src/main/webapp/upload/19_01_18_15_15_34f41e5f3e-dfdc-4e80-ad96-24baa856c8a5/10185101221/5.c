#include <stdio.h>
#include <stdlib.h>
/*（循环）编写程序求解100以内（包括100）
的奇数之和及偶数之和。输出两个数，用一个空格隔开。*/
int main()
{
    int even = 0, odd = 0;
    for(int i = 2;i <= 100;i+=2)
        even += i;
    for(int j = 1;j < 100;j+=2)
        odd += j;
    printf("%d %d",odd,even);
    return 0;
}
