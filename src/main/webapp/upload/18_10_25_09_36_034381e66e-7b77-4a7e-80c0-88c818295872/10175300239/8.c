#include <stdio.h>

int main()
{
    int y1,m1,d1,y2,m2,d2,year,month,day=0;
    scanf("%d %d %d %d %d %d",&y1,&m1,&d1,&y2,&m2,&d2);
    int countDay(int d1,int m1,int y1){
        for(month=1;month<m1;month++){
            if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
                d1+=31;
            if(month==2){
                d1+=28;
                if(y1%4==0&&y1%100!=0||y1%400==0)
                d1+=1;
            }
            if(month==4||month==6||month==9||month==11)
                d1+=30;
        }
        return d1;
    }
    d1=countDay(d1,m1,y1);
    d2=countDay(d2,m2,y2);
    //printf("%d %d",d1,d2);
    year=y1;
    if(m1>=m2){
        y2-=1;
        if(y2%4==0&&y2%100!=0||y2%400==0)
            d2+=366;
        else
            d2+=365;
    }
    while(year<y2){
        if(year%4==0&&year%100!=0||year%400==0)
            day+=366;
        else
            day+=365;
        year++;
    }
    day=day+(d2-d1);
    printf("采集时间为%d天",day);
    return 0;
}