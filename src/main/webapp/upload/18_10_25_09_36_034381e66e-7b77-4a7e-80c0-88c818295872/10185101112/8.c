#include <stdio.h>

int main()
{
    int year1,month_1st,day1,date1,year2,month_2nd,day2,date2,month2,date1_left,date_total;

    scanf("%d %d %d %d %d %d",&year1,&month_1st,&day1,&year2,&month_2nd,&day2);

//判断第一年是否为闰年
    if ((year1%4==0)&&(year1%100!=0)||(year1%400==0))
        month2=29;
    else
         month2=28;

//判断第二年是否为闰年
    if ((year2%4==0)&&(year2%100!=0)||(year2%400==0))
    {
        if (month_2nd==2) month2=29;
    }
    else
        {
        if (month_2nd==2) month2=28;
        }

//每个月天数
const int month1=31,month3=31,month4=30,month5=31,month6=30,month7=31,month8=31,month9=30,month10=31,month11=30,month12=31;
//第一年距离1月1日的天数
switch (month_1st)
{
    case 1:date1=day1;break;
    case 2:date1=day1+month1;break;
    case 3:date1=day1+month1+month2;break;
    case 4:date1=day1+month1+month2+month3;break;
    case 5:date1=day1+month1+month2+month3+month4;break;
    case 6:date1=day1+month1+month2+month3+month4+month5;break;
    case 7:date1=day1+month1+month2+month3+month4+month5+month6;break;
    case 8:date1=day1+month1+month2+month3+month4+month5+month6+month7;break;
    case 9:date1=day1+month1+month2+month3+month4+month5+month6+month7+month8;break;
    case 10:date1=day1+month1+month2+month3+month4+month5+month6+month7+month8+month9;break;
    case 11:date1=day1+month1+month2+month3+month4+month5+month6+month7+month8+month9+month10;break;
    default: break;
}
//第二年的天数
switch (month_2nd)
{
    case 1:date2=day2;break;
    case 2:date2=day2+month1;break;
    case 3:date2=day2+month1+month2;break;
    case 4:date2=day2+month1+month2+month3;break;
    case 5:date2=day2+month1+month2+month3+month4;break;
    case 6:date2=day2+month1+month2+month3+month4+month5;break;
    case 7:date2=day2+month1+month2+month3+month4+month5+month6;break;
    case 8:date2=day2+month1+month2+month3+month4+month5+month6+month7;break;
    case 9:date2=day2+month1+month2+month3+month4+month5+month6+month7+month8;break;
    case 10:date2=day2+month1+month2+month3+month4+month5+month6+month7+month8+month9;break;
    case 11:date2=day2+month1+month2+month3+month4+month5+month6+month7+month8+month9+month10;break;
    default: break;
}

//判断第一年是否为闰年，计算第一年剩余天数
    if ((year1%4==0)&&(year1%100!=0)||(year1%400==0))
        date1_left=366-date1;
    else
        date1_left=365-date1;
//判断两年间有无闰年，算两年间的间隔天数
 int date_year=0;
 if (year2>=year1+2){
    for (int i=year1+1;i<=year2-1;++i)
 {
    if ((i%4==0)&&(i%100!=0)||(i%400==0))
     date_year=date_year+366;
    else date_year=date_year+365;
 }
 //计算总的间隔天数=第一年剩余天数+两年间隔天数+第二年天数
    date_total=date1_left+date2+date_year+1;
 }

 else if (year2==year1+1)
     {date_year=0;
     date_total=date1_left+date2+1;}

 else if(year2==year1)
    date_total=date2-date1;

printf("采集时间为%d天",date_total);

}

