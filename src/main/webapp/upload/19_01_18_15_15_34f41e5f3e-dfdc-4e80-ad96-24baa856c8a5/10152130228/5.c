#include <stdio.h>
#include <stdlib.h>

/*（循环）编写程序求解100以内（包括100）的奇数之和及偶数之和。
输出两个数，用一个空格隔开。*/

int main()
{
    int odd=0, even=0;
    for(int i=1; i<=100; i++){
        if(i%2==0) even+=i;
        else odd+=i;
    }
    printf("%d %d", odd, even);
    return 0;
}
