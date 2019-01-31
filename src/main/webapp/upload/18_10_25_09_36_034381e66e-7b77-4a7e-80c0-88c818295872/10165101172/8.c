
#include <stdio.h>
#include <stdbool.h>
//可以去查一下什么是typedef。
typedef struct Date Date;
//一个时间点，包括年月日：
struct Date {
    int year;
    int month;
    int day;
};
//每个月的天数：
int Month[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
//判断闰年：
bool is_leap_year(int a){
    return (a%400 == 0 || (a%4 == 0 && a%100 != 0))?true:false;
}
//获取自1月1日起过去的时间：
int days_since(int year,int month,int day){
    int i;
    int Day = 0;//储存总天数
    for (i = 1;i < month;i++){
        Day += Month[i - 1];
        if (is_leap_year(year) == true && i == 2)
            Day++;
    }
    Day += (day - 1);
    return Day;
}

int main(void)
{
    Date a,b;
    int i;
    int Day = 0;
    scanf("%d %d %d %d %d %d",&a.year,&a.month,&a.day,&b.year,&b.month,&b.day);
    for (i = a.year;i < b.year;i++){
        Day += (is_leap_year(i) == true)?366:365;
    }
    Day += days_since(b.year,b.month,b.day);
    Day -= days_since(a.year,a.month,a.day);
    printf("采集时间为%d天",Day);//交的时候吧\n去掉
    return 0;
}
