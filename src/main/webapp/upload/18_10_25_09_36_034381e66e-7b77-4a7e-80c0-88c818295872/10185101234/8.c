#include <stdio.h>

//获取公历年的天数
int year_alldays(int year)
{
    if((year%4==0 && year%100!=0) || year%400==0) return 366;
	else return 365;
}

//获取公历年初至某整月的天数
int year_sumday(int year,int month)
{
    int sum=0;
    int rui[12]={31,29,31,30,31,30,31,31,30,31,30,31};
    int ping[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int ruiflag=0;
    if((year%4==0 &&year%100!=0) || year%400==0) ruiflag=1;
    for(int index=0;index<month-1;index++)
    {
        if(ruiflag==1) sum+=rui[index];else sum+=ping[index];
    }
    return sum;
}
//获取从公历1800年1月25日至当前日期的总天数
int get_g_alldays(int year,int month,int day)
{
    int i=1800,days=-24;
    while(i<year)
    {
        days+=year_alldays(i);
        i++;
    }
    int days2=year_sumday(year,month);
    return days+days2+day;
}

int main(void)
{
    int year1,year2,month1,month2,day1,day2;
    scanf("%d %d %d",&year1,&month1,&day1);
    scanf("%d %d %d",&year2,&month2,&day2);
    int days1=get_g_alldays(year1,month1,day1);
    int days2=get_g_alldays(year2,month2,day2);
    int sout=0;
    if(days1>=days2) sout=days1-days2;else sout=days2-days1;
    printf("采集时间为%d天",sout);
    return 0;
}