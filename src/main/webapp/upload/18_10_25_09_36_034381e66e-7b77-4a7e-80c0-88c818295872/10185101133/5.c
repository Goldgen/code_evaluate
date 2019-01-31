#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year,month;
    scanf("%d %d",&year,&month);
    if((year%4==0&&year%100!=0) || year%400==0){
        printf("闰年 ");
        if(month==2)
            printf("冬季 29");}
    else{
        printf("不是闰年 ");
        if(month==2)
            printf("冬季 28");}
    if(month==1 || month==12){
        printf("冬季 ");
            printf("31");}
    else if(month<=5 && month>=3){
        printf("春季 ");
        if(month==3 || month==5)
            printf("31");
        else
            printf("30");}
    else if(month<=8 && month>=6){
        printf("夏季 ");
        if(month==7 || month==8)
            printf("31");
        else
            printf("30");}
    else if(month<=11 && month>=9){
        printf("秋季 ");
        if(month==9 || month==11)
            printf("30");
        else
            printf("31");}
    return 0;
}