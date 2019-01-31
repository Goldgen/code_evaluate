#include <stdio.h>
#include <stdlib.h>

int main()
{
    int y;
    int q=0;
    scanf("%d",&y);
    if((y%4==0 && y%100!=0)||(y%400==0)){
        printf("闰年 ");
    }
    else{
        printf("不是闰年 ");
        q=1;
    }
    int m;
    scanf("%d",&m);
    if(m==3||m==4||m==5){
        printf("春季 ");
    }
    else if(m==6||m==7||m==8){
        printf("夏季 ");
    }
     else if(m==9||m==10||m==11){
        printf("秋季 ");
    }
     else
        printf("冬季 ");
    if((m==1)||(m==3)||(m==5)||(m==7)||(m==8)||(m==10)||(m==12)){
        printf("31");
    }
    else if(m==2&&q==0){
        printf("29");
    }
    else if(m==2&&q==1){
        printf("28");
    }
    else
        printf("30");
    return 0;
}
