#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
int main()
{
    int n,y,m1,m2,m3;
    scanf("%d %d",&n,&y);
    m1=n%4;
    m2=n%100;
    m3=n%400;
    if ((m1==0&&m2!=0)||m3==0)
    printf("闰年 ");
    else
    printf("不是闰年 ");
    switch (y)
    {
    case 1:printf("冬季 31");break;
    case 2:
    if ((m1==0&&m2!=0)||m3==0) printf("冬季 29");
    else printf("冬季 28");break;
    case 3:printf("春季 31");break;
    case 4:printf("春季 30");break;
    case 5:printf("春季 31");break;
    case 6:printf("夏季 30");break;
    case 7:printf("夏季 31");break;
    case 8:printf("夏季 31");break;
    case 9:printf("秋季 30");break;
    case 10:printf("秋季 31");break;
    case 11:printf("秋季 30");break;
    default:printf("冬季 31");break;
    }
    return 0;
}
