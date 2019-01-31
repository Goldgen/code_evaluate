#include <stdio.h>


char* months[] = {"","January","February","March","April","May","June","July",
				  "August","September","October","November","December"};

int main() {
    int day, month, year, ch = 0;

    scanf("%d %d %d", &month, &day, &year);

    if (day > 31 || month > 12) {
        printf("Error!");
        return -1;
    }

    printf("%d", day);

    if (day / 10 == 1) {
        printf("th ");
    } else {
        ch = day % 10;

        switch (ch) {
        case 1:
            printf("st ");
            break;
        case 2:
            printf("nd ");
            break;
        case 3:
            printf("rd ");
            break;
        default :
            printf("th ");
            break;
        }
    }

    printf("%s",months[month]);

    printf(" %d", year);
    return 0;
}
