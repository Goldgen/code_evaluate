#include <stdio.h>
#include <stdbool.h>

int month_days[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

bool is_leap_year(int y){
    return ((y%4 == 0 && y%100 != 0) || y%400 == 0)?true:false;
}

void season(int m){
    switch (m) {
        case 3:
        case 4:
        case 5:
            printf("春季");
            break;
        case 6:
        case 7:
        case 8:
            printf("夏季");
            break;
        case 9:
        case 10:
        case 11:
            printf("秋季");
            break;
        default:
            printf("冬季");
            break;
    }
}

int main(void)
{
    int year,month;
    scanf("%d %d",&year,&month);
    is_leap_year(year)?printf("闰年"):printf("不是闰年");
    printf(" ");
    season(month);
    printf(" ");
    if (month == 2 && is_leap_year(year))
        month_days[1]++;
    printf("%d",month_days[month - 1]);
    return 0;
}
