#include <stdio.h>
int main()
{
int year=0;
int month=0;
int day=0;
enum Month
{
January=1,February,March,April,May,June,July,August,September,October,November,December
};
scanf("%d %d %d",&month,&day,&year);
if(day%10==1)
printf("%dst ",day);
else if(day%10==2)
printf("%dnd ",day);
else if(day%10==3)
printf("%drd ",day);
else
printf("%dth ",day);

switch(month)
{
    case January:printf("January");
    break;
    case February:printf("February");
    break;
    case March:printf("March");
    break;
    case April:printf("April");
    break;
    case May:printf("May");
    break;
    case June:printf("June");
    break;
    case July:printf("July");
    break;
    case August:printf("August");
    break;
    case September:printf("September");
    break;
    case October:printf("October");
    break;
    case November:printf("November");
    break;
    case December:printf("December");
    break;
    default:
		break;
}
printf(" %d",year);
return 0;
}
