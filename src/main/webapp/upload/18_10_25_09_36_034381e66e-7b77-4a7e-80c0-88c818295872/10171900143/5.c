#include <stdio.h>
#include <math.h>


int main()
{
    int year,month;int ret=1;
    scanf("%d %d",&year,&month);
    if(0==year%4 && year%100!=0 || year%400==0)printf("闰年 ");
    else {
            printf("不是闰年 ");ret=0;
    }
    switch (month){
case 3:case 4:case 5:
    printf("春季 ");break;
case 6:case 7:case 8:
    printf("夏季 ");break;
case 9:case 10:case 11:
    printf("秋季 ");break;
default:
    printf("冬季 ");break;
    }
switch (month){
case 1:case 3:case 5:case 7:case 8:case 10: case 12:
    printf("31");break;
case 4:case 6:case 9:case 11:
    printf("30");break;
default:
    if(ret==1)
    printf("29");
    else printf("28");break;
}
    return 0;
}
