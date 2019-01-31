#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year1;
    int month1;
    int day1;
    int year2;
    int month2;
    int day2;
    int sum1;
    int sum2=0;
    int sum3=0;
    int sum4=0;
    int a,b,c,e;
    scanf("%d %d %d %d %d %d",&year1,&month1,&day1,&year2,&month2,&day2);
    int d=(year1)+1;
    switch(month1)
        {
            case 1:case 3:case 5:case 7:case 8:case 10:case 12:
            b=31;
            break;
            case 4:case 6: case 9:case 11:
            b=30;
            break;
            default:
            if((year1)%4==0&&(year1)%100!=0||year1%400==0)
                b=29;
            else
                b=28;
            break;
        }
    sum1=b-day1;
    for(c=(month1)+1;c<=12;++c)
    {
        switch(c)
        {
            case 1:case 3:case 5:case 7:case 8:case 10:case 12:
            a=31;
            break;
            case 4:case 6: case 9:case 11:
            a=30;
            break;
            default:
            if((year1)%4==0&&(year1)%100!=0||year1%400==0)
                a=29;
            else
                a=28;
            break;
        }
    sum2+=a;
    }
    for(c=1;c<=(month2)-1;++c)
    {
         switch(c)
        {
            case 1:case 3:case 5:case 7:case 8:case 10:case 12:
            a=31;
            break;
            case 4:case 6:case 9:case 11:
            a=30;
            break;
            default:
            if((year2)%4==0&&(year2)%100!=0||year2%400==0)
                a=29;
            else
                a=28;
            break;
        }
    sum2+=a;
    }
    if((year2)-(year1)!=1)
    {
        for(;d<year2;++d)
        {
            if(d%4==0&&d%100!=0||d%400==0)
                e=366;
            else
                e=365;
            sum3+=e;
        }
    }
    else
        sum3=0;
    sum4=sum1+sum2+day2+sum3;
    printf("%d",sum4);
    return 0;
}
