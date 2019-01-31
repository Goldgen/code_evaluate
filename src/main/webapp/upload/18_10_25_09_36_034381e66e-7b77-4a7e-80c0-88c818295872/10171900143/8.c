#include <stdio.h>
#include <math.h>
struct date {
    int y;
    int m;
    int d;
    }day_1,day_2;
int StrJud(struct date,struct date);
int main()
{

    scanf("%d %d %d %d %d %d",&day_1.y,&day_1.m,&day_1.d,&day_2.y,&day_2.m,&day_2.d);
    int n=0;
    int month[13];month[0]=0;
    month[1]=month[3]=month[5]=month[7]=month[8]=month[10]=month[12]=31;
    month[4]=month[6]=month[9]=month[11]=30;

    while(StrJud(day_1,day_2)==0){
            if(day_1.y%4==0&&day_1.y%100!=0 || day_1.y%400==0)month[2]=29;
    else month[2]=28;
        n++;
        day_1.d++;
        if(day_1.d==month[day_1.m]+1){
                day_1.d=1;
                day_1.m++;
        }
        if(day_1.m==12+1){
            day_1.m=1;
            day_1.y++;
        }
    }
    printf("采集时间为%d天",n);
    return 0;
}
int StrJud(struct date a,struct date b){
    if(a.y==b.y && a.m==b.m && a.d==b.d)return 1;
    return 0;
}
