#include <stdio.h>
#include <string.h>
int month_day[12]={31,28,31,30,31,30,31,31,30,31,30,31};
int days_in_year(int);
int days_in_month(int);
int ccl(int d1,int d2,int m1,int m2,int y1,int y2);



int days_in_year(int year){
    if(year%4==0&&(year%100!=0||year%400==0)){
        return 366;
    }
    else
        return 365;
}
int days_in_month(int month)
    {return month_day[month-1];}
int ccl(int d1,int d2,int m1,int m2,int y1,int y2){
    int day=0;
    int month=0;
    int year=0;
    int i=0;

    for(i=y1;i<y2;++i)
    {
        if(y1>=y2){}
        else
            month+=days_in_month(i);
    }
    if(days_in_year(y2)==366)
    {
        month_day[1]=29;
        for(i=m1;i<m2;++i)
        {
            if(m1>=m2){}
            else{month+=days_in_month(i);}
        }
        day=year+month+d2-d1;
    }
    else
    {
        for(i=m1;i<m2;++i)
        {
            if(m1>=m2){}
            else{month+=days_in_month(i);}
        }
        day=year+month+d2-d1;
    }
    return day;
}
int main()
{
    int d1,d2,m1,m2,y1,y2=0;
    int co,co1,co2,co3=0;
    scanf("%d %d %d %d %d %d",&y1,&m1,&d1,&y2,&m2,&d2);
    if(y1==y2){co=ccl(d1,d2,m1,m2,y1,y2);}
    else{
        co1=ccl(d1,31,m1,12,y1,y1);
        co2=ccl(1,31,1,12,y1+1,y2-1);
        co3=ccl(1,d2,1,m2,y2,y2);
        co=co1+co2+co3;
    }

    printf("%d",co);
}
