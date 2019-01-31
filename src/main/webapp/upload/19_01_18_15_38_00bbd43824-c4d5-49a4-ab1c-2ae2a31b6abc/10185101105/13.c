#include <stdio.h>

int main()
{
    int day,month,year,a;
    scanf("%d %d %d",&month,&day,&year);
    a=day%10;
    switch(a)
    {
    case 1:
        printf("%dst ",day);
        break;
    case 2:
        printf("%dnd ",day);
        break;
    case 3:
        printf("%drd ",day);
        break;
    default:
        printf("%dth ",day);
        break;
    }
    switch(month)
    {
    case 1:
        printf("January");
        break;
    case 2:
        printf("February");
        break;
    case 3:
        printf("March");
        break;
    case 4:
        printf("April");
        break;
    case 5:
        printf("May");
        break;
    case 6:
        printf("June");
        break;
    case 7:
        printf("July");
        break;
    case 8:
        printf("August");
        break;
    case 9:
        printf("September");
        break;
    case 10:
        printf("October");
        break;
    case 11:
        printf("November");
        break;
    default:
        printf("December");
        break;
    }
    printf(" %d",year);
    return 0;
}
