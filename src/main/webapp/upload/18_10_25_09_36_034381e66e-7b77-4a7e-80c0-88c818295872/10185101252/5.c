#include <stdio.h>

int year, month;
int isRunYear = 0;
char* season[5] = {"冬季", "春季", "夏季", "秋季"};
int days[15] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int main(){

    scanf("%d%d", &year, &month);
    if((year % 4 == 0 && year % 100 != 0)||(year % 400 == 0))
        isRunYear = 1;
    if(isRunYear)
        printf("闰年 ");
    else
        printf("不是闰年 ");
    printf("%s ", season[((month)%12)/3]);
    if(2 == month){
        if(isRunYear)
            printf("29");
        else
            printf("28");
    }else{
        printf("%d", days[month]);
    }

}
