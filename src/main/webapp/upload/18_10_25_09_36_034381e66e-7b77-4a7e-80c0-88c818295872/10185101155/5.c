#include <stdio.h>
int main()
{
    int year,month,day;

    scanf("%d %d",&year,&month);
    if((year%4==0&&year%100!=0)||year%400==0)
    {
        switch(month)
      {
        case 1:case 3:case 5:case 7:case 8:case 10:case 12:day = 31;break;
        case 4:case 6:case 9:case 11:day = 30;break;
        default:day = 29;break;
      }
      printf("闰年 ");
    }
    else
    {
          switch(month)
      {
        case 1:case 3:case 5:case 7:case 8:case 10:case 12:day = 31;break;
        case 4:case 6:case 9:case 11:day = 30;break;
        default:day = 28;break;
      }
        printf("不是闰年 ");
    }
    if (month>=3&&month<=5)
        printf("春季 %d",day);
    else if(month>=6&&month<=8)
        printf("夏季 %d",day);
    else if(month>=9&&month<=11)
        printf("秋季 %d",day);
    else
        printf("冬季 %d",day);

    return 0;
}