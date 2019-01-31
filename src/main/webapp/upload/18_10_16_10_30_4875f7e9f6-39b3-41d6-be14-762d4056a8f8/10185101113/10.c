#include <stdio.h>
#include <stdlib.h>

int main()
{
    int NUM;
    scanf("%d",&NUM);
    switch (NUM)
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
        printf("Error");
        break;
    }

    return 0;
}
