#include<stdio.h>

int main()
{
    enum weekday{a=1,b,c,d,e,f,g}day;
    int h;

    scanf("%d",&h);
    day=(enum weekday)h;
    switch(day)
    {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Thursday");
        break;
    case 4:
        printf("Wednesday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Sunday");
        break;
    }
}