#include <stdio.h>
#include <math.h>
int main()
{
    int ya,yb,ma,mb,da,db;
    int i,sum=0;
    scanf("%d %d %d %d %d %d",&ya,&ma,&da,&yb,&mb,&db);
    for(i=ya;i<=(yb-1);i++)
    {
        if(((i%4==0)&&(i%100!=0))||(i%400==0))
            sum=sum+366;
        else
            sum=sum+365;
    }
    for(i=1;i<=(mb-1);i++)
    {
        if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
            sum=sum+31;
        else if(i==4||i==6||i==9||i==11)
            sum=sum+30;
        else if((((yb%4==0)&&(yb%100!=0))||(yb%400==0))&&i==2)
            sum=sum+29;
        else
            sum=sum+28;
    }
    sum=sum+db;
    for(i=1;i<=(ma-1);i++)
    {
        if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
            sum=sum-31;
        else if(i==4||i==6||i==9||i==11)
            sum=sum-30;
        else if((((ya%4==0)&&(ya%100!=0))||(ya%400==0))&&i==2)
            sum=sum-29;
        else
            sum=sum-28;
    }
    sum=sum-da;
    printf("采集时间为%d天",sum);
}