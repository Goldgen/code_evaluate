#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<float.h>

int main()
{
    int weekday;
    scanf("%d",&weekday);
    switch(weekday)
    {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
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
    default:
        break;

    }

  return 0;
}
