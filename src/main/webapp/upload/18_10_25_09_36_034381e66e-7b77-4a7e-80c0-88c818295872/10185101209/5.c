#include<stdio.h>

int main()
{
    int year,month;

    scanf("%d%d",&year,&month);
    printf("%s闰年 ",(year % 4 == 0&&year %100 != 0)||year % 400 == 0 ? "":"不是");
    printf("%s季 ",month >= 3 && month <= 5 ? "春":
           (month >=6 && month <= 8 ? "夏":
            (month >= 9 && month <=11 ? "秋":"冬")));
    printf("%d",month == 1||month == 3||month == 5||month == 7||month == 8||
           month == 10||month == 12 ? 31:
           (month == 4||month == 6||month == 9||month == 11 ? 30:
            (year % 4 == 0&&year %100 != 0)||year % 400 == 0 ? 29:28));
    return 0;
}
