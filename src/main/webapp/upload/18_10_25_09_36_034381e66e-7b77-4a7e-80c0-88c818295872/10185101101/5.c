#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year,month,i;
    scanf("%d %d",&year,&month);
    if((year%400)==0)
        {printf("闰年 ");
        i=1;}
    else if((year%100)==0)
        {printf("不是闰年 ");i=0;}
    else if((year%4)==0)
        {printf("闰年 ");i=1;}
    else
        {printf("不是闰年 ");i=0;}
    if(month>=3&&month<=5)
        printf("春季");
    else if(month>=6&&month<=8)
        printf("夏季");
    else if(month>=9&&month<=11)
        printf("秋季");
    else
        printf("冬季");
    if(month==1||month==3||month==5)//comment
        {printf(" 31");}
    else if(month==7||month==8||month==10||month==12)
        {printf(" 31");}
    else if(month==2)
    {
        if(i==1)
            printf(" 29");
        else
            printf(" 28");
    }
    else
        printf(" 30");

    return 0;
}