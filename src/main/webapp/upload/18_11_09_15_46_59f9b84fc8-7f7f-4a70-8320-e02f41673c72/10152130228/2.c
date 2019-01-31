#include <stdio.h>
#include <stdlib.h>

/*（循环）编写程序，
求分数序列2/1，3/2，5/3，8/5，13/8，21/13….的前50项之和。
结果保留2位小数。*/

int main()
{
    double a, sum=0;
    double numerator=2, denominator=1;
    for(int i=0; i<50; i++){
        a = numerator/denominator;
        sum += a;
        double x;
        x = numerator;
        numerator = numerator+denominator;
        denominator = x;
    }
    printf("%.2f", sum);
    return 0;
}
