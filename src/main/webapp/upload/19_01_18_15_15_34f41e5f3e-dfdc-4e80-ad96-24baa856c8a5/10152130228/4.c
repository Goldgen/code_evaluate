#include <stdio.h>
#include <stdlib.h>

/*（循环）从键盘输入若干学生的成绩，统计并输出最高成绩和最低成绩，
当输入负数时结束输入。输出保留2位小数。
样例输入：
30.5 95 -1
样例输出：
最高成绩是: 95.00, 最低成绩是: 30.50*/

int main()
{
    float a[100]={1};    //max,min：最高、最低分所在的下标
    int max=0,min=0,n;
    for(n=0;;n++){
        scanf("%f", &a[n]);
        if(a[n]<0)  break;
        if(a[n]>a[max]) max=n;
        if(a[n]<a[min]) min=n;
    }        //共有n个有效成绩
    printf("最高成绩是: %.2f, 最低成绩是: %.2f", a[max], a[min]);
    return 0;
}
