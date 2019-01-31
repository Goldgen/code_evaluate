#include<stdio.h>
#include<stdlib.h>

int D[12]={31,28,31,30,31,30,31,31,30,31,30,31};

int All_days=365;

int LeapyearConclusion(int year)
{
    if((year%4==0&&year%100!=0)||year%400==0)
    {
        return 1;//是闰年返回1
    }
    else
    {
        return 0;//不是返回0
    }

}

int main()
{
    int year_1,month_1,day_1,year_2,month_2,day_2,n,d_1,d_2,d_3=0,d,m,y;
    scanf("%d %d %d %d %d %d",&year_1,&month_1,&day_1,&year_2,&month_2,&day_2);
    if(year_1==year_2)
    {
        n=LeapyearConclusion(year_1);
        if(n==1)
        {
            D[1]=29;
        }
        if(month_1==month_2)
        {
            d=day_2-day_1;
        }
        else
        {
            d_1=D[month_1-1]-day_1;
            d_2=day_2;
            for(m=month_1+1;m<month_2;m++)
            {
                d_3=d_3+D[m-1];
            }
            d=d_1+d_2+d_3;
        }
    }
    else
    {
        n=LeapyearConclusion(year_1);
        if(n==1)
        {
            D[1]=29;
        }
        d_1=D[month_1-1]-day_1;
        for(m=month_1+1;m<=12;m++)
        {
            d_3=d_3+D[m-1];
        }
        n=LeapyearConclusion(year_2);
        if(n==1)
        {
            D[1]=29;
        }
        d_2=day_2;
        for(m=0;m<month_2;m++)
        {
            d_3=d_3+D[m-1];
        }
        for(y>year_1;y<year_2;y++)
        {
            n=LeapyearConclusion(y);
            if(n==1)
            {
                All_days=366;
            }
            else
            {
                All_days=365;
            }
            d_3=d_3+All_days;
        }
    }
    printf("采集时间为%d天",d_3);
    return 0;
}


