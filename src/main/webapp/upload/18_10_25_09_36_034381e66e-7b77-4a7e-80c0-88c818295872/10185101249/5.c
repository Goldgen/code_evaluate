#include <stdio.h>
#include <stdlib.h>
int main()
{
    int m,n;
    scanf("%d %d",&n,&m);
    if(n%4==0&&n%100!=0||n%400==0)
    printf("闰年 ");
    else
    printf("不是闰年 ");
    if(m>=3&&m<=5)
        printf("春季 ");
    else if(m>=6&&m<=8)
        printf("夏季 ");
    else if(m>=9&&m<=11)
        printf("秋季 ");
    else
        printf("冬季 ");
    if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
        printf("31");
    else if(m==4||m==6||m==9||m==11)
        printf("30");
    else if(n%4==0&&n%100!=0||n%400==0)
        printf("29");
    else
        printf("28");
    return 0;
}
