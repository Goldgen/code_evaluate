#include <stdio.h>
int main()
{
    int year=0,month=0,a=0,day=0;
    scanf("%d %d",&year,&month);
    if ((year%4==0&&year%100!=0)||year%400==0)
        {
            printf("闰年 ");
            a=1;
        }
    else printf("不是闰年 ");
    switch(month)
    {
    case 12:case 1:
        printf("冬季");
        day=31;
        break;
    case 2:
        printf("冬季");
        day=28;
        break;
    case 3:case 5:
        printf("春季");
        day=31;
        break;
    case 4:
        printf("春季");
        day=30;
        break;
    case 7:case 8:
        printf("夏季");
        day=31;
        break;
    case 6:
        printf("夏季");
        day=30;
        break;
    case 9:case 11:
        printf("秋季");
        day=30;
        break;
    default:
        printf("秋季");
        day=31;
        break;
    }
    if (a==1&&month==2)day+=1;
    printf(" %d",day);
    return 0;
}
