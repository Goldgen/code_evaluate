#include <stdio.h>
#include <stdbool.h>
bool leapyear(int m)
{
    return ( (m%4 == 0 && m%100 != 0)||m%400 == 0 )?true:false;
}
int main()
{
    int year1,month1,day1,year2,month2,day2;
    int month[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    scanf("%d %d %d %d %d %d",&year1,&month1,&day1,&year2,&month2,&day2);
    int n,p,q;
    int a,b;
     q  = 1;
     n  = 1;
     p  = 0;//p为总日期
     a = day1;b = day2;
     for (n= year1;n < year2;n++)
    {
        p += (leapyear(n) == true)?366:365;
    }
    while(q < month1)
    {
        a = a + month[q-1];
        if(leapyear(year1) == true && q == 2)
            a++;
            q++;
    }
    q = 1;
    while(q < month2)
    {
        b = b + month[q-1];
        if(leapyear(year2) == true && q == 2)
            b++;
            q++;
    }
    p = p + b - a;
    printf("采集时间为%d天",p);
    return 0;

}