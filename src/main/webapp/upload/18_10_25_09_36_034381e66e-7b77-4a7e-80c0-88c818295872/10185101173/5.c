#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(a%100!=0)
    {if(a%4==0)
        printf("闰年 ");
    else
        printf("不是闰年 ");}
    else
    {if(a%400==0)
        printf("闰年 ");
    else
        printf("不是闰年 ");}
    if (b>=3&&b<=5)
        printf("春季 ");
    else if(b>=6&&b<=8)
        printf("夏季 ");
    else if(b>=9&&b<=11)
        printf("秋季 ");
    else
        printf("冬季 ");
    if (b==2)
        {if (a%100!=0)
        {if(a%4==0)
        printf("29");
        else
        printf("28");}
        else{if(a%400==0)
        printf("29");
             else
            printf("28");}}
    else if ((b==2)&&(a%4==0))
        printf("29");
    else if(b==4||b==6||b==9||b==11)
        printf("30");
    else
        printf("31");
    return 0;
}

