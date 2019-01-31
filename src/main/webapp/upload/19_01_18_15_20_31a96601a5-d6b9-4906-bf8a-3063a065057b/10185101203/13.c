#include "stdio.h"
void main(void){
int year,month,day,md[]={31,28,31,30,31,30,31,31,30,31,30,31};
char m[12][10]={"January","February","March","April","May","June",\
"July","August","September","October","November","December"};
char d[3][3]={"st","nd","rd"};
printf("Enter 3 numbers...\nthe first: ");
while(1){
scanf("%d",&month);
printf("The second: ");
scanf("%d",&day);
printf("And the third: ");
scanf("%d",&year);
md[1]=28;
if(!(year%400) || !(year%4) && year%100) md[1]=29;
if(day>0 && day<=md[month-1] && month>0 && month<13 && year>0)
break;
printf("Error! redo...\nthe first: ");
}
printf("%d%s %s %d\n",day,day>3 ? "th" : d[day-1],m[month-1],year);
}
