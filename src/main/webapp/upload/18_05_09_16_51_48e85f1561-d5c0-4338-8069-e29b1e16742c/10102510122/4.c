#include <stdio.h>
#include <stdlib.h>

int year1, year2, month1, month2, day1, day2;

int LeapYear(int n) //判断闰年
{
    if ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0)
        return 1;
    else
        return 0;
}

void Exchange() //如果第一个日期大于第二个日期，执行交换
{
    int temp;
    if (year1 > year2) {
        temp = year1;
        year1 = year2;
        year2 = temp;

        temp = month1;
        month1 = month2;
        month2 = temp;

        temp = day1;
        day1 = day2;
        day2 = temp;
    } else if (year1 == year2 && month1 > month2) {
        temp = month1;
        month1 = month2;
        month2 = temp;

        temp = day1;
        day1 = day2;
        day2 = temp;
    } else if (year1 == year2 && month1 == month2 && day1 > day2) {
        temp = day1;
        day1 = day2;
        day2 = temp;
    }
}

int main() {
    int count = 0;
    scanf("%d %d %d %d %d %d", &year1, &month1, &day1, &year2, &month2, &day2);
    Exchange();

    while (year1 != year2 || month1 != month2 || day1 != day2) {
        day1++;
        count++;
        switch (month1) {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                if (day1 > 31) {
                    day1 -= 31;
                    month1++;
                }
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                if (day1 > 30) {
                    day1 -= 30;
                    month1++;
                }
                break;
            case 2:
                if (day1 > (LeapYear(year1) ? 29 : 28)) {
                    day1 -= LeapYear(year1) ? 29 : 28;
                    month1++;
                }
                break;
        }
        if (month1 > 12) {
            month1 = 1;
            year1++;
        }
    }
    printf("采集时间为%d天", count);

    return 0;
}