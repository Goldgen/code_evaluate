#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
    bool it;
    int year = 0,month = 0;
    scanf("%d%d",&year,&month);
    if( ( (year%4 ==0)&&(year%100!=0) ) || (year%400 == 0) )
     {
        it = true;
        printf("闰年 ");
     }
    else
    {
        it = false;
        printf("不是闰年 ");
    }

    if (month >= 3 && month <= 5)
        printf("春季 ");
    else if (month >= 6 && month <= 8)
        printf("夏季 ");
    else if (month >= 9 && month <= 11)
        printf("秋季 ");
    else
        printf("冬季 ");

    if(month==4 || month==6 || month==9 || month==11)
        printf("30");
    else if(it&&month==2)
        printf("29");
    else if (month==2 && (!it))
        printf("28");
    else
        printf("31");

    return 0;
}
