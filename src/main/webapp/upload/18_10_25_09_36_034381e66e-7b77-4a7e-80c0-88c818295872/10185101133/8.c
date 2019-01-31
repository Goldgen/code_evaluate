#include <stdio.h>
#include <stdlib.h>


int main()
{
    int y_1,m_1,d_1=0;
    int y_2,m_2,d_2=0;
    scanf("%d %d %d %d %d %d",&y_1,&m_1,&d_1,&y_2,&m_2,&d_2);
    int sum=0;
    int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    while(y_1<y_2){
        int day=365;
        if(  ((((y_1) % 4==0 && (y_1)%100!=0) || ((y_1)%400==0)) && m_1<=2) ||
           ((((y_1+1) % 4==0 && (y_1+1)%100!=0) || ((y_1+1)%400==0)) && m_1>2)
           ){
            day = 366;
        }
        else
            day=365;
        sum = sum + day;
        y_1++;
    }
    if((((y_2) % 4==0 && (y_2)%100!=0) || ((y_2)%400==0)) && m_2>2)
        month[1]=29;
    while(m_1 < m_2){
        sum = sum + month[m_1-1];
        m_1++;
    }
    while(m_1 > m_2){
        sum =sum - month[m_1-2];
        m_1--;
    }
    sum = sum + (d_2 - d_1);
    printf("采集时间为%d天",sum);
    return 0;
}