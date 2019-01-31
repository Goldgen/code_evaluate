#include <stdio.h>

int main()
{
    int year,day,month;
    scanf("%d %d %d", &month, &day, &year);
    if (day % 10 == 1 && day != 11)
        printf("%dst ", day);
    else if (day % 10 == 2 && day !=12)
		printf("%dnd ", day);
    else if (day % 10 == 3 && day != 13)
        printf("%drd ", day);
    else
        printf("%dth ", day);
	switch (month)
    {
    case 1:
        printf("January ");
        break;
    case 2:
        printf("February ");
        break;
    case 3:
        printf("March ");
        break;
    case 4:
        printf("April ");
        break;
    case 5:
        printf("May ");
        break;
    case 6:
        printf("June ");
        break;
    case 7:
        printf("July ");
        break;
    case 8:
        printf("August ");
        break;
    case 9:
        printf("September ");
        break;
    case 10:
        printf("October ");
        break;
    case 11:
        printf("November ");
        break;
    case 12:
        printf("December ");
        break;
    default:
        printf("ERROR");
        break;
    }
    printf("%d", year);

    return 0;
}