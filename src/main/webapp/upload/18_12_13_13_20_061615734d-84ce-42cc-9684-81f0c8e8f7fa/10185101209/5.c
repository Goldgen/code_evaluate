#include<stdio.h>
#include<string.h>

int main()
{
    char month[12][20];
    int num;

    scanf("%d",&num);
    strcpy(month[0], "January");
    strcpy(month[1], "February");
    strcpy(month[2], "March");
    strcpy(month[3], "April");
    strcpy(month[4], "May");
    strcpy(month[5], "June");
    strcpy(month[6], "July");
    strcpy(month[7], "August");
    strcpy(month[8], "September");
    strcpy(month[9], "October");
    strcpy(month[10], "November");
    strcpy(month[11], "December");
    printf("%s",month[num-1]);
    return 0;
}