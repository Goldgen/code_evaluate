#include<stdio.h>
int main()
{
    int month,year,date;
    char *strmon[12]={"January","February","March","April","May","June","July","August","September","October","November","December"};
    scanf("%d %d %d",&month,&date,&year);
    if(date%10==1&&date!=11)
        printf("%dst %s %d",date,strmon[month-1],year);
    else if(date%10==2&&date!=12)
        printf("%dnd %s %d",date,strmon[month-1],year);
    else if(date%10==3&&date!=13)
        printf("%drd %s %d",date,strmon[month-1],year);
    else
        printf("%dth %s %d",date,strmon[month-1],year);
    return 0;
}
