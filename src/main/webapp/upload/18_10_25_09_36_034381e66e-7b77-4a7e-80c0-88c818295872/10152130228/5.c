#include <stdio.h>
#include <stdlib.h>

/*用户输入年和月，你的程序判断该年是否闰年，并根据给出的月份判断当前的季节和该月有多少天？
闰年的条件是年份能够被4整除但不能被100整除，或者能被400整除。3-5月为春季，依此类推。答案间用空格隔开。
样例输入1：
2018 10
样例输出1：
不是闰年 秋季 31
样例输入2：
2008 8
样例输出2：
闰年 夏季 31*/

int main()
{
    int year, month;
    scanf("%d%d", &year, &month);
    if((year%4==0&&year%100!=0)||year%400==0){
        printf("闰年 ");
        switch(month){
        case 3:
            printf("春季 31");break;
        case 4:
            printf("春季 30");break;
        case 5:
            printf("春季 31");break;
        case 6:
            printf("夏季 30");break;
        case 7:
            printf("夏季 31");break;
        case 8:
            printf("夏季 31");break;
        case 9:
            printf("秋季 30");break;
        case 10:
            printf("秋季 31");break;
        case 11:
            printf("秋季 30");break;
        case 12:
            printf("冬季 31");break;
        case 1:
            printf("冬季 31");break;
        case 2:
            printf("冬季 29");break;
        }
    }
    else{
        printf("不是闰年 ");
        switch(month){
        case 3:
            printf("春季 31");break;
        case 4:
            printf("春季 30");break;
        case 5:
            printf("春季 31");break;
        case 6:
            printf("夏季 30");break;
        case 7:
            printf("夏季 31");break;
        case 8:
            printf("夏季 31");break;
        case 9:
            printf("秋季 30");break;
        case 10:
            printf("秋季 31");break;
        case 11:
            printf("秋季 30");break;
        case 12:
            printf("冬季 31");break;
        case 1:
            printf("冬季 31");break;
        case 2:
            printf("冬季 28");break;
        }
    }
}
