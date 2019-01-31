#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year;
    int i;//月份
    int month[12];
    int a=29;
    int b=28;
    month[0]=31;
    month[2]=31;
    month[4]=31;
    month[6]=31;
    month[7]=31;
    month[9]=31;
    month[11]=31;
    month[3]=30;
    month[5]=30;
    month[8]=30;
    month[10]=30;
    scanf("%d %d",&year,&i);
    if((0==(year%4)&&(0!=(year%100)))||(0==(year%400)))
       {
        if(i==2)
        printf("闰年 冬季 %d",a);
        if(i>=3&&i<=5)
        printf("闰年 春季 %d",month[i-1]);
        if(i>=6&&i<=8)
        printf("闰年 夏季 %d",month[i-1]);
        if(i>=9&&i<=11)
        printf("闰年 秋季 %d",month[i-1]);
       if(i==12||i==1)
        printf("闰年 冬季 %d",month[i-1]);
       }
    else
    {
        if(i==2)
        printf("不是闰年 冬季 %d",b);
        if(i>=3&&i<=5)
        printf("不是闰年 春季 %d",month[i-1]);
        if(i>=6&&i<=8)
        printf("不是闰年 夏季 %d",month[i-1]);
        if(i>=9&&i<=11)
        printf("不是闰年 秋季 %d",month[i-1]);
        if(i==12||i==1)
        printf("不是闰年 冬季 %d",month[i-1]);
    }

    return 0;
}
