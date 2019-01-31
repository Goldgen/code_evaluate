#include <stdio.h>

int main()
{
    int year1, month1, day1;
    int year2, month2, day2;
    int ans = 0, i, j;
    scanf("%d%d%d", &year1, &month1, &day1);
    scanf("%d%d%d", &year2, &month2, &day2);
    if (year1 == year2){
        for (i = month1; i <= month2; ++i){
            if (i == 1 || i == 3 || i == 5 || i == 7 ||
                    i == 8 || i == 10 || i == 12)
                    ans += 31;
                else if (i == 2)
                    ans += 28;
                else
                    ans += 30;
        }
    }
    else{
        for (i = year1; i <= year2; ++i){
            if (i == year1){
                for (j = month1; j <= 12; ++j){
                    if (j == 1 || j == 3 || j == 5 || j == 7 ||
                        j == 8 || j == 10 || j == 12)
                        ans += 31;
                    else if (j == 2)
                        ans += 28;
                    else
                        ans += 30;
                }
            }
            else if (i == year2){
                for (j = 1; j <= month2; ++j){
                    if (j == 1 || j == 3 || j == 5 || j == 7 ||
                        j == 8 || j == 10 || j == 12)
                        ans += 31;
                    else if (j == 2)
                        ans += 28;
                    else
                        ans += 30;
                }
            }
            else
                ans += 365;
        }
    }
    for (i = year1; i <= year2; ++i){
        if ((i != year1 && i != year2) || (i == year1 && month1 <= 2) ||
            (i == year2 && month2 > 2)){
            if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
                ans++;
        }
    }
    if (month2 == 1 || month2 == 3 || month2 == 5 ||
        month2 == 7 || month2 == 8 || month2 == 10 || month2 == 12)
        ans -= 31 - day2;
    else if (month2 == 2)
        ans -= 28 - day2;
    else
        ans -= 30 - day2;
    ans -= day1;
    printf("采集时间为%d天", ans);
    return 0;
}
