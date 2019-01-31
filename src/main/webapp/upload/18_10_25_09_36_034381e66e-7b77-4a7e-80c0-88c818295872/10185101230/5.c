#include <stdio.h>
int main(void)
{
int year,month;
scanf("%d %d",&year,&month);
if(year%400==0||(year%4==0&&year%100!=0))
printf("闰年 ");
else
    printf("不是闰年 ");
switch(month)
{
case 3:case 4:case 5:
printf("春季");
break;
case 6:case 7:case 8:
printf("夏季");
break;
case 9:case 10:case 11:
printf("秋季");
break;
case 12:case 1:case 2:
printf("冬季");
break;
default:
    return 0;
}
if (month==1||month==3||month==5||month==7||
    month==8||month==10||month==12)
        printf(" 31");
if (month==4||month==6||month==9||month==11)
printf(" 30");
if ((month==2)&&((year%400==0)||(year%4==0&&year%100!=0)))
    printf(" 29");
if ((month==2)&&((year%400!=0)||year%4!=0))
    printf(" 28");
return 0;
}