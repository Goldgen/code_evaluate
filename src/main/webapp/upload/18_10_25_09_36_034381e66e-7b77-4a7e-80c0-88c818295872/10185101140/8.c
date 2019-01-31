#include <stdio.h>
#include <math.h>

int main(void)
{
    int y1,m1,d1,y2,m2,d2;
    scanf("%d %d %d %d %d %d",&y1,&m1,&d1,&y2,&m2,&d2);

    int mon[]={31,28,31,30,31,30,31,31,30,31,30,31};
    int day1 = 0;
    int day2 = 0;
    int i;

    for(i=1;i<y1;i++){
        day1+=(((i%4==0&&i%100!=0)||i%400==0)?366:365);
    }
    if((y1%4==0&&y1%100!=0)||y1%400==0)mon[2]++;
    for(i=1;i<m1;i++){
        day1+=mon[i-1];
    }
    day1+=d1;
    if((y1%4==0&&y1%100!=0)||y1%400==0)mon[2]=28;

    for(i=1;i<y2;i++){
        day2+=(((i%4==0&&i%100!=0)||i%400==0)?366:365);
    }
    if((y2%4==0&&y2%100!=0)||y2%400==0)mon[2]++;
    for(i=1;i<m2;i++){
        day2+=mon[i-1];
    }
    day2+=d2;
    if((y2%4==0&&y2%100!=0)||y2%400==0)mon[2]=28;

    printf("采集时间为%d天",(int)fabs(day2-day1));
    return 0;
}
