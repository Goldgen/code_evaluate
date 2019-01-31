#include<stdio.h>
int main()
{
    int y1,y2,m1,m2,d1,d2;
    int day1,day2,days,i,count;
    scanf("%d %d %d %d %d %d",&y1,&m1,&d1,&y2,&m2,&d2);
    if((y1/4==0&&y1/100!=0)||(y1/400==0))
    {
        if(m1==1)
            day1=d1;
        else if(m1==2)
            day1=d1+31;
        else if(m1==3)
            day1=d1+31+29;
        else if(m1==4)
            day1=d1+31+29+31;
        else if(m1==5)
            day1=d1+31+29+31+30;
        else if(m1==6)
            day1=d1+31+29+31+30+31;
        else if(m1==7)
            day1=d1+31+29+31+30+31+30;
        else if(m1==8)
            day1=d1+31+29+31+30+31+30+31;
        else if(m1==9)
            day1=d1+31+29+31+30+31+30+31+31;
        else if(m1==10)
            day1=d1+31+29+31+30+31+30+31+31+30;
        else if(m1==11)
            day1=d1+31+29+31+30+31+30+31+31+30+31;
        else if(m1==12)
            day1=d1+31+29+31+30+31+30+31+31+30+31+30;
    }
    else
    {
        if(m1==1)
            day1=d1;
        else if(m1==2)
            day1=d1+31;
        else if(m1==3)
            day1=d1+31+29;
        else if(m1==4)
            day1=d1+31+29+31;
        else if(m1==5)
            day1=d1+31+29+31+30;
        else if(m1==6)
            day1=d1+31+29+31+30+31;
        else if(m1==7)
            day1=d1+31+29+31+30+31+30;
        else if(m1==8)
            day1=d1+31+29+31+30+31+30+31;
        else if(m1==9)
            day1=d1+31+29+31+30+31+30+31+31;
        else if(m1==10)
            day1=d1+31+29+31+30+31+30+31+31+30;
        else if(m1==11)
            day1=d1+31+29+31+30+31+30+31+31+30+31;
        else if(m1==12)
            day1=d1+31+29+31+30+31+30+31+31+30+31+30;
    }
    if((y2/4==0&&y2/100!=0)||(y2/400==0))
    {
        if(m2==1)
            day2=d2;
        else if(m2==2)
            day2=d2+31;
        else if(m2==3)
            day2=d2+31+29;
        else if(m2=4)
            day2=d2+31+29+31;
        else if(m2==5)
            day2=d2+31+29+31+30;
        else if(m2==6)
            day2=d2+31+29+31+30+31;
        else if(m2==7)
            day2=d2+31+29+31+30+31+30;
        else if(m2==8)
            day2=d2+31+29+31+30+31+30+31;
        else if(m2==9)
            day2=d2+31+29+31+30+31+30+31+31;
        else if(m2==10)
            day2=d2+31+29+31+30+31+30+31+31+30;
        else if(m2==11)
            day2=d2+31+29+31+30+31+30+31+31+30+31;
        else if(m2==12)
            day2=d2+31+29+31+30+31+30+31+31+30+31+30;
    }
    else
    {
        if(m2==1)
            day2=d2;
        else if(m2==2)
            day2=d2+31;
        else if(m2==3)
            day2=d2+31+29;
        else if(m2==4)
            day2=d2+31+29+31;
        else if(m2==5)
            day2=d2+31+29+31+30;
        else if(m2==6)
            day2=d2+31+29+31+30+31;
        else if(m2==7)
            day2=d2+31+29+31+30+31+30;
        else if(m2==8)
            day2=d2+31+29+31+30+31+30+31;
        else if(m2==9)
            day2=d2+31+29+31+30+31+30+31+31;
        else if(m2==10)
            day2=d2+31+29+31+30+31+30+31+31+30;
        else if(m2==11)
            day2=d2+31+29+31+30+31+30+31+31+30+31;
        else if(m2==12)
            day2=d2+31+29+31+30+31+30+31+31+30+31+30;
    }
    if(y1==y2)
    {
        days=day2-day1;
    }
    else
    {
        count=0;
        for(i=y1;i<y2;++i)
        {
            if((i%4==0&&i%100!=0)||(i%400==0))
                count+=1;
        }
        days=(y2-y1-count)*365+count*366+day2-day1;
    }
    printf("采集时间为%d天",days);
        return 0;
}
