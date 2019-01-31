#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year,month;
    int days[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    scanf("%d %d",&year,&month);
    if(year%4==0&&year%100!=0||year%400==0)
    {
        printf("闰年 ");
        if(month==2)
        {
            days[1]=29;
        }
    }
    else
    {
        printf("不是闰年 ");
    }
    if(month>=3&&month<=5)
    {
        printf("春季 ");
    }
    else
    {
        if(month>=6&&month<=8)
        {
            printf("夏季 ");
        }
        else
        {
            if(month>=9&&month<=11)
            {
                printf("秋季 ");
            }
            else
            {
                printf("冬季 ");
            }
        }
    }
    printf("%d",days[month-1]);
    return 0;
}