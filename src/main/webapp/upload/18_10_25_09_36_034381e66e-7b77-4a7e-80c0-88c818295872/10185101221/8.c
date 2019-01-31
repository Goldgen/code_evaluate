#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
    int year1,year2;
    int month1,month2;
    int day1,day2;

    int a,b,c;
    int ydays,mdays,ddays;
    int thedayofyear1;
    unsigned long long sum = 0,differ1 = 0,differ2 = 0,differ3=0;
    bool it1,it2;
    scanf("%d %d %d ",&year1,&month1,&day1);
    scanf("%d %d %d",&year2,&month2,&day2);
    for ( a = year1 + 1;a < year2;a++)
    {
      if( ( (a%4 ==0)&&(a%100!=0) ) || (a%400 == 0) )
        ydays = 366;
      else
        ydays = 365;
      differ1 += ydays;
    }

     if( ( (year1%4 ==0)&&(year1%100!=0) ) || (year1%400 == 0) )
      {
        it1 = true;
        thedayofyear1 = 366;
      }
      else
        {
            it1 = false;
            thedayofyear1 = 365;

        }
     if( ( (year2%4 ==0)&&(year2%100!=0) ) || (year2%400 == 0) )
        it2 = true;
      else
        it2 = false;//判断两个年份是否是闰年

    for (b = month1 + 1;b <= 12;b++)
    {
       if(b==4 || b==6 || b==9 ||b==11)
         mdays = 30;
       else if(it1&&b==2)
         mdays = 29;
       else if (b==2 && (!it1))
         mdays = 28;
       else
         mdays = 31;
        differ2 += mdays;
    }
    for ( c = 1;c < month2;c++)
    {
       if(c==4 || c==6 || c==9 ||c==11)
         mdays = 30;
       else if(it2&&c==2)
         mdays = 29;
       else if (c==2 && (!it2))
         mdays = 28;
       else
         mdays = 31;
        differ3 += mdays;
    }

       if(month1==4 || month1==6 || month1==9 ||month1==11)
         ddays = 30 - day1;
       else if(it1&&b==2)
         ddays = 29 - day1;
       else if (b==2 && (!it1))
         ddays = 28 - day1;
       else
         ddays = 31 - day1;
      if (year2 > year1 )
        sum = differ1 + differ2 + differ3 +ddays +day2;
      else
        sum = differ1 + differ2 + differ3 +ddays +day2 -thedayofyear1 ;
      printf("采集时间为%u天",sum);
    return 0;
}
