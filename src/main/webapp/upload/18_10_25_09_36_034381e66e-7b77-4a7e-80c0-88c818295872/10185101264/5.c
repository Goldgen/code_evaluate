#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
int main()
{
    int y,m,d;
    char year[100];
    char season[100];

    scanf("%d %d",&y,&m);
    if(((y%4==0)&&(y%100!=0))||(y%400==0))
    {
        strcpy(year,"闰年");
        if(m==2)
            d=29;
    }
    else
    {
        strcpy(year,"不是闰年");
        if(m==2)
            d=28;
    }
    switch(m)
    {
        case 3:case 4:case 5:strcpy(season,"春季");break;
        case 6:case 7:case 8:strcpy(season,"夏季");break;
        case 9:case 10:case 11:strcpy(season,"秋季");break;
        case 12:case 1:case 2:strcpy(season,"冬季");break;
        default:break;
    }
    if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
        d=31;
    else if(m==4||m==6||m==9||m==11)
        d=30;
    printf("%s %s %d",year,season,d);
    return 0;
}