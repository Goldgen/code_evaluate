#include <stdio.h>
int main(){
    int year,month,delta=0;
    scanf("%d %d",&year,&month);
    if(year%4==0&&year%100!=0||year%400==0){
        printf("闰年 ");
        delta++;
    }
    else
        printf("不是闰年 ");
    switch(month){
        case 3:
        case 5:
            printf("春季 31");
            break;
        case 4:
            printf("春季 30");
            break;
        case 6:
            printf("夏季 30");
            break;
        case 7:
        case 8:
            printf("夏季 31");
            break;
        case 9:
        case 11:
            printf("秋季 30");
            break;
        case 10:
            printf("秋季 31");
            break;
        case 12:
        case 1:
            printf("冬季 31");
            break;
        case 2:
            printf("冬季 %d",delta+28);
            break;
        default:
            break;
    }
}