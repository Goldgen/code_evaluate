#include <stdio.h>
#include <stdlib.h>

int main()
{
   int year,month;
   scanf("%d %d",&year,&month);
   if (year%400==0)
    printf("闰年 ");
    else if((year%4==0)&&(year%100!=0))
    printf("闰年 ");
   else
    printf("不是闰年 ");
   if (month>=3&&month<=5)
    printf("春季 ");
    else if (month>=6&&month<=8)
    printf("夏季 ");
    else if(month>=9&&month<=11)
        printf("秋季 ");
    else
        printf("冬季 ");
    switch(month)
{case 1:case 3:case 5:case 7:case 8:case 10:case 12:
    printf("31");
    break;
case 4:case 6:case 9:case 11:
    printf("30");
    break;
case 2:
    {if (year%400==0)
    printf("29");
    else if((year%4==0)&&(year%100!=0))
        printf("29");
        else
            printf("28");
            break;
        }
default:
    break;
}

    return 0;
}
