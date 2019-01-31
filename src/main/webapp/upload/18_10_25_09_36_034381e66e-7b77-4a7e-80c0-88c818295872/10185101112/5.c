#include <stdio.h>

int main()
{
    int year,month,day_Feb,day;
    scanf("%d %d",&year,&month);
    if ((year%4==0)&&(year%100!=0)||(year%400==0))
    {
        printf("闰年 ");
        if (month==2) day_Feb=29;
    }
    else
        {printf("不是闰年 ");
            if (month==2) day_Feb=28;
        }

    if (month>2&&month<6)  printf("春季");
    else if (month>5&&month<9)  printf("夏季");
    else if (month>8&&month<12) printf("秋季");
    else  printf("冬季");

switch (month)
{
case 4:case 6:case 9:case 11:   day=30;break;
case 2: day=day_Feb; break;
default: day=31;break;
}

printf(" %d",day);

    return 0;
}
