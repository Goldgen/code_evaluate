#include <stdio.h>


int days[15] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int swap(int*a, int* b){
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
    return 0;
}
int trueDays(int year, int month){
    if(month == 2 && ((year % 4 == 0 && year % 100 != 0)||(year % 400 == 0)))
        return 29;
    else if(month == 2)
        return 28;
    else
        return days[month];
}
int main(){

    int year1, month1, day1, year2, month2, day2;
    int result = 0;

    scanf("%d%d%d%d%d%d", &year1, &month1, &day1, &year2, &month2, &day2);

    if((year1 > year2) || (year1 == year2 && month1 > month2) ||
       (year1 == year2 && month1 == month2 && day1 > day2)){
        swap(&year1, &year2);
        swap(&month1, &month2);
        swap(&day1, &day2);
    }
    while(year1 != year2 || month1 != month2 || day1 != day2){
        if(month1 == 12 && day1 == trueDays(year1, month1))
            month1 = 1, day1 = 0, year1 ++;
        if(day1 == trueDays(year1, month1))
            day1 = 0, month1 ++;
        day1++;
        result++;
    }
    printf("采集时间为%d天", result);
    return 0;
}
