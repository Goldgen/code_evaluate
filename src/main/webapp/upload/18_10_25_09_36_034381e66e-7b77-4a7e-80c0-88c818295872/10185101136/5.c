#include <stdio.h>
#include <stdbool.h>

int main()
{
    int year, month;
    bool y = true;
    scanf("%d%d", &year, &month);
    if ((year % 4 == 0 && year % 10 != 0) || year % 400 == 0)
        printf("闰年 ");
    else{
        printf("不是闰年 ");
        y = false;
    }

    switch (month){
        case 3: case 4: case 5:
            printf("春季 ");
            break;
        case 6: case 7: case 8:
            printf("夏季 ");
            break;
        case 9: case 10: case 11:
            printf("秋季 ");
            break;
        default:
            printf("冬季 ");
            break;
    }
    if (y && month == 2)
        printf("29");
    else if (month == 2)
        printf("28");
    else if (month == 1 || month == 3 || month == 5 ||
             month == 7 || month == 8 || month == 10 || month == 12)
        printf("31");
    else
        printf("30");
    return 0;
}
