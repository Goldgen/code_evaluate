#include <stdio.h>

int main()
{
    int year, month, x;
    scanf("%d %d", &year, &month);

    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        {
            printf("闰年 ");
            x = 0;
        }
    else
        {
            printf("不是闰年 ");
            x = 1;
        }

    switch(month)
        {
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

    switch(month)
        {
        case 2:
            if(x == 0)
                printf("29");
            else if(x == 1)
                printf("28");
            break;
        case 4: case 6: case 9: case 11:
            printf("30");
            break;
        default:
            printf("31");
            break;
        }
}
