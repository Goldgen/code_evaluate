#include <stdio.h>

int main()
{
    int y,m=0;
    scanf("%d %d",&y,&m);
    if(y%4==0&&y%100!=0||y%400==0){
        printf("闰年 ");
    }
    else
        printf("不是闰年 ");
    if(m==2){
        if(y%4==0&&y%100!=0||y%400==0)
            printf("冬季 29");
        else
            printf("冬季 28");
    }
    else if(m==3||m==5)
        printf("春季 31");
    else if(m==4)
        printf("春季 30");
    else if(m==6)
        printf("夏季 30");
    else if(m==7||m==8)
        printf("夏季 31");
    else if(m==9||m==11)
        printf("秋季 30");
    else if(m==10)
        printf("秋季 31");
    else
        printf("冬季 31");
    return 0;
}