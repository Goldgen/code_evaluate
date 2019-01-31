#include <stdio.h>

int main()
{
    int month, day, year;
    scanf("%d%d%d", &month, &day, &year);
    if (day / 10 != 1){
        if (day % 10 == 1)
            printf("%dst ", day);
        else if (day % 10 == 2)
            printf("%dnd ", day);
        else if (day % 10 == 3)
            printf("%drd ", day);
        else
            printf("%dth ", day);
    }
    else
        printf("%dth ", day);
    if (month == 1)
        printf("January ");
    else if (month == 2)
        printf("February ");
    else if (month == 3)
        printf("March ");
    else if (month == 4)
        printf("April ");
    else if (month == 5)
        printf("May ");
    else if (month == 6)
        printf("June ");
    else if (month == 7)
        printf("July ");
    else if (month == 8)
        printf("August ");
    else if (month == 9)
        printf("September ");
    else if (month == 10)
        printf("October ");
    else if (month == 11)
        printf("November ");
    else
        printf("December ");
    printf("%d", year);
    return 0;
}
