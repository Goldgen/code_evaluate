#include <stdio.h>
#include <string.h>

char* Month[12] = {"January","February","March","April","May","June",
				   "July","August","September","October","November","December"};

int main(void)
{
    int month,day,year;
    char Day[3];
    scanf("%d %d %d",&month,&day,&year);
    switch (day%10) {
        case 1:
            strcpy(Day,"st");
            break;
        case 2:
            strcpy(Day,"nd");
            break;
        case 3:
            strcpy(Day,"rd");
            break;
        default:
            strcpy(Day,"th");
            break;
    }
    if (day <= 10 || day >= 20)
        printf("%d%s %s %d",day,Day,Month[month - 1],year);
    else
        printf("%dth %s %d",day,Month[month - 1],year);
    return 0;
}
