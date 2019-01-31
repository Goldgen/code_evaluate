#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<float.h>

int main()
{
    int year1,year2,month1,month2,day1,day2;
    int sum1=0;
    int sum2=0;
    scanf("%d %d %d %d %d %d",&year1,&month1,&day1,&year2,&month2,&day2);
    for(int i=0;i<year1;i++)
    {
        if((i%4==0&&i%100!=0)||i%400==0)
            sum1+=366;
            else
                sum1+=365;
    }
    for(int i=1;i<month1;i++)
    {
        switch(i)
        {
        case 1:case 3:case 5:case 7:case 8:case 10:case 12:
            sum1+=31;
            break;
        case 2:
            {
                if((year1%4==0&&year1%100!=0)||i%400==0)
                    sum1+=29;
                else
                    sum1+=28;
            }
            break;
        default:
            sum1+=30;
            break;
        }
    }
    for(int i=0;i<day1;i++)
        sum1+=1;
for(int i=0;i<year2;i++)
    {
        if((i%4==0&&i%100!=0)||i%400==0)
            sum2+=366;
            else
                sum2+=365;
    }
    for(int i=1;i<month2;i++)
    {
        switch(i)
        {
        case 1:case 3:case 5:case 7:case 8:case 10:case 12:
            sum2+=31;
            break;
        case 2:
            {
                if((year2%4==0&&year2%100!=0)||i%400==0)
                    sum2+=29;
                else
                    sum2+=28;
            }
            break;
        default:
            sum2+=30;
            break;
        }
    }
    for(int i=0;i<day2;i++)
        sum2+=1;
        printf("采集时间为%d天",sum2-sum1);






  return 0;
}
















