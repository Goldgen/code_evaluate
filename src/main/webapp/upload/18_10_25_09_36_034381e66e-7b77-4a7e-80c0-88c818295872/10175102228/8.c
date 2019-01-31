#include<stdio.h>
#include<stdlib.h>
int leapyear(int year)
{ if((year%4==0&&year%100!=0)||year%400==0)
   return 1;//是闰年返回1
   return 0;//不是返回0
}
int main()
{ int year1,year2,month1,month2,day1,day2;
   scanf("%d%d%d%d%d%d",&year1,&month1,&day1,&year2,&month2,&day2);
   int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
   int days=0,i;
   if(year1==year2)
    { if(leapyear(year1))a[2]=29;
        days=a[month1]-day1+day2;
       for(i=month1+1;i<month2;i++)
        {days+=a[i];
        }
       }
        else
        { days=a[month1]-day1+day2;
          for(i=month1+1;i<13;i++)
           { days=days+a[i];}
           for(i=1;i<month2;i++)
            { days=a[i]+days;}
           if(leapyear(year1)==1&&month1<3)
            days++;
           if(leapyear(year2)==1&&month2>2)
             days++;//因为用的是非闰年的天数，所以是闰年时要加一
            days=days+365*(year2-year1-1);
            int cnt=0;//用记录year1至year2之间的闰年个数
      for(i=year1+1;i<year2;i++)
           { if(leapyear(i))
               cnt++;
           }
            days+=cnt;//加上闰年数
        }
        printf("采集时间为%d天",days);
        return 0;
}