#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/*请编程输出char类型和int型的最大值和最小值。
输出格式要求：每行输出一个值，其顺序是char的最大值，char的最小值，int的最大值，int的最小值。*/

int main()
{
    int a,b,c,d;
    a=CHAR_MAX;
    b=CHAR_MIN;
    c=INT_MAX;
    d=INT_MIN;
    printf("%d\n%d\n%d\n%d", a,b,c,d);
    return 0;
}
