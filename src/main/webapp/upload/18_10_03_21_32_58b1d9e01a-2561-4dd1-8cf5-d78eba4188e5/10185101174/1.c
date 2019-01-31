#include <stdio.h>
#include <stdlib.h>
main()
{

float payPerWeek;
float workingHours;
int dollars;
int cents;
printf("Your pay per week is:\n");
scanf("%f",&payPerWeek);
printf("Your working hours per week is:\n");
scanf("%f",&workingHours);
doaalrs=payPerWeek/workingHours;
cents=(payPerWeek%workingHours)/workingHours*100;
printf("Your average hourly pay rate is %d dollars and %d cents.",dollars);
}