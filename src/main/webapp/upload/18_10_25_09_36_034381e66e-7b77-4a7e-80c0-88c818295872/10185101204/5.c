#include <stdio.h>
int main()
{ long int year=0;
  int month=0;
  scanf("%ld %d",&year,&month);
  if(year%4==0&&year%100!=0||year%400==0)
    printf("闰年 ");
  else printf("不是闰年 ");
  if((month>=3)&&(month<=5))
    printf("春季");
  else if(month>=6&&month<=8)
    printf("夏季");
  else if(month>=9&&month<=11)
    printf("秋季");
  else printf("冬季");
  if(month==2)
    {if(year%4==0&&year%100!=0||year%400==0)
        printf(" 29");
      else printf(" 28");}
    else if(month==4||month==6||month==9||month==11)
        printf(" 30");
    else printf(" 31");
}