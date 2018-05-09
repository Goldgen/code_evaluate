#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int year(int);//判断闰年

int main() {
    /*39.	*用户输入包含年，月，日的日期，请计算两个日期间相隔的天数；(较复杂)
例如：用户输入： 2015 10 30 2016 4 15
      程序输出： 采集时间为168 天

      用户输入： 2011 6 1 2016 11 10
      程序输出： 采集时间为1989天*/

    int y1, m1, d1, y2, m2, d2, y, i, sum1 = 0, sum2 = 0, sum = 0;
    int month[12];
    month[1] = 31, month[2] = 28;
    month[3] = 31;
    month[4] = 30;
    month[5] = 31;
    month[6] = 30;
    month[7] = 31;
    month[8] = 31;
    month[9] = 30;
    month[10] = 31;
    month[11] = 30;
    month[12] = 31;
    scanf("%d %d %d %d %d %d", &y1, &m1, &d1, &y2, &m2, &d2);
    if (y1 > y2)//y是小的那个年份
        y = y2;
    else
        y = y1;
    for (i = m1 - 1; i >= 1; i--) //y1的月份数
    {
        sum1 += month[i];
        if (year(y1) == 366 && i == 2)
            sum1 += 1;
    }
    sum1 += d1; //y1不含年份的总天数
    for (i = y2 - 1; i >= y1; i--)
        sum2 += year(i);
    for (i = m2 - 1; i >= 1; i--) //y1的月份数
    {
        sum2 += month[i];
        if (year(y2) == 366 && i == 2)
            sum2 += 1;
    }
    sum2 += d2;
    printf("%d", sum2 - sum1);
    return 0;

}

int year(int a) {
    int b;
    if (a % 4 == 0) {
        if (a % 100 == 0) {
            if (a % 400 == 0)
                b = 366;
            else
                b = 365;
        } else
            b = 366;
    } else
        b = 365;
    return b;
}