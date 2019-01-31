#include <stdio.h>
#include <math.h>
int main()
{
    int a;
    //enum Weekday{Monday=1,Tuesday,Wednesday,Thursday,Friday,Saturday,Sunday};
    scanf("%d",&a);
    //(int)Weekday;
    //Weekday=a;
    switch(a)
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
