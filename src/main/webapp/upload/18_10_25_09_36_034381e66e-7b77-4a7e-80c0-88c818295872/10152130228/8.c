#include <stdio.h>
#include <stdlib.h>

/*用户输入包含年，月，日的日期，请计算两个日期间相隔的天数；
样例输入1：
2015 10 30 2016 4 15
样例输出1：
采集时间为168天
样例输入2：
2011 6 1 2016 11 10
样例输出：
采集时间为1989天*/

int main()
{
    int year1, month1, date1, year2, month2, date2, sum=0;
    scanf("%d%d%d%d%d%d", &year1, &month1, &date1, &year2, &month2, &date2);
    //考虑同一年
    if(year1==year2){
        if(month1==month2){
            sum = date2-date1;
        }
        else{
            switch(month1){
                case 1: sum = 31-date1;break;
                case 2:
                    if((year1%4==0&&year1%100!=0)||year1%400==0){
                        sum = 29-date1;
                        break;
                    }
                    else{
                        sum = 28-date1;
                        break;
                    }
                case 3: sum = 31-date1;break;
                case 4: sum = 30-date1;break;
                case 5: sum = 31-date1;break;
                case 6: sum = 30-date1;break;
                case 7: sum = 31-date1;break;
                case 8: sum = 31-date1;break;
                case 9: sum = 30-date1;break;
                case 10: sum = 31-date1;break;
                case 11: sum = 30-date1;break;
                case 12: sum = 31-date1;break;
            }
            for(int month=month1+1; month<month2; month++){
                switch(month){
                    case 1:case 3:case 5:case 7:case 8:case 10: sum = sum+31;break;
                    case 4:case 6:case 9:case 11: sum = sum+30;break;
                    case 2:
                        if((year1%4==0&&year1%100!=0)||year1%400==0){
                            sum = sum+29;
                            break;
                        }
                        else{
                            sum = sum+28;
                            break;
                        }
                }
            }
            sum = sum+date2;
        }

    }
    //不同年份
    else{
    switch(month1){
        case 1:
            if((year1%4==0&&year1%100!=0)||year1%400==0){
                sum = sum+31-date1+29+31+30+31+30+31+31+30+31+30+31;
                break;
            }
            else{
                sum = sum+31-date1+28+31+30+31+30+31+31+30+31+30+31;
                break;
            }
        case 2:
            if((year1%4==0&&year1%100!=0)||year1%400==0){
                sum = sum+29-date1+31+30+31+30+31+31+30+31+30+31;
                break;
            }
            else{
                sum = sum+28-date1+31+30+31+30+31+31+30+31+30+31;
                break;
            }
        case 3: sum = sum+31-date1+30+31+30+31+31+30+31+30+31;break;
        case 4: sum = sum+30-date1+31+30+31+31+30+31+30+31;break;
        case 5: sum = sum+31-date1+30+31+31+30+31+30+31;break;
        case 6: sum = sum+30-date1+31+31+30+31+30+31;break;
        case 7: sum = sum+31-date1+31+30+31+30+31;break;
        case 8: sum = sum+31-date1+30+31+30+31;break;
        case 9: sum = sum+30-date1+31+30+31;break;
        case 10: sum = sum+31-date1+30+31;break;
        case 11: sum = sum+30-date1+31;break;
        case 12: sum = sum+31-date1;break;
    }
    for(int year = year1+1; year<year2; year++){//year1和year2之间的几年
        if((year%4==0&&year%100!=0)||year%400==0) sum +=366;
        else sum +=365;
    }
    switch(month2){
        case 1: sum += date2;break;
        case 2: sum =sum+31+date2;break;
        case 3:
            if((year2%4==0&&year2%100!=0)||year2%400==0){
                sum = sum+31+29+date2;
                break;
            }
            else{
                sum = sum+31+28+date2;
            break;
            }
        case 4:
            if((year2%4==0&&year2%100!=0)||year2%400==0){
                sum = sum+31+29+31+date2;
                break;
            }
            else{
                sum = sum+31+28+31+date2;
            break;
            }
        case 5:
            if((year2%4==0&&year2%100!=0)||year2%400==0){
                sum = sum+31+29+31+30+date2;
                break;
            }
            else{
                sum = sum+31+28+31+30+date2;
            break;
            }
        case 6:
            if((year2%4==0&&year2%100!=0)||year2%400==0){
                sum = sum+31+29+31+30+31+date2;
                break;
            }
            else{
                sum = sum+31+28+31+30+31+date2;
            break;
            }
        case 7:
            if((year2%4==0&&year2%100!=0)||year2%400==0){
                sum = sum+31+29+31+30+31+30+date2;
                break;
            }
            else{
                sum = sum+31+28+31+30+31+30+date2;
            break;
            }
        case 8:
            if((year2%4==0&&year2%100!=0)||year2%400==0){
                sum = sum+31+29+31+30+31+30+31+date2;
                break;
            }
            else{
                sum = sum+31+28+31+30+31+30+31+date2;
            break;
            }
        case 9:
            if((year2%4==0&&year2%100!=0)||year2%400==0){
                sum = sum+31+29+31+30+31+30+31+31+date2;
                break;
            }
            else{
                sum = sum+31+28+31+30+31+30+31+31+date2;
            break;
            }
        case 10:
            if((year2%4==0&&year2%100!=0)||year2%400==0){
                sum = sum+31+29+31+30+31+30+31+31+30+date2;
                break;
            }
            else{
                sum = sum+31+28+31+30+31+30+31+31+30+date2;
            break;
            }
        case 11:
            if((year2%4==0&&year2%100!=0)||year2%400==0){
                sum = sum+31+29+31+30+31+30+31+31+30+31+date2;
                break;
            }
            else{
                sum = sum+31+28+31+30+31+30+31+31+30+31+date2;
            break;
            }
        case 12:
            if((year2%4==0&&year2%100!=0)||year2%400==0){
                sum = sum+31+29+31+30+31+30+31+31+30+31+30+date2;
                break;
            }
            else{
                sum = sum+31+28+31+30+31+30+31+31+30+31+30+date2;
            break;
            }
    }
    }
    printf("采集时间为%d天", sum);
    return 0;
}
