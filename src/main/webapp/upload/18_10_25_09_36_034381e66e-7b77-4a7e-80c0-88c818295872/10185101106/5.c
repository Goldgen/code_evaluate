#include<stdio.h>

int main()
{
    int year,month;
    scanf("%d %d",&year,&month);
    if(year%4==0&&year%100!=0||year%400==0)
        printf("闰年 ");
    else
        printf("不是闰年 ");
    if(month>=3&&month<=5)
        printf("春季 ");
    if(month>=6&&month<=8)
        printf("夏季 ");
    if(month>=9&&month<=11)
        printf("秋季 ");
    if(month==12||month==1||month==2)
        printf("冬季 ");
    int a[7]={1.3,5,7,8,10,12};
    for(int i=0;i<7;i++)
    {if(month==a[i])
            printf("31");}
     int b[4]={4,6,9,11};      
    for(int j=0;j<4;j++)
            {if(month==b[j])
            printf("30");}
            if(month==2)
			{if(year%4==0&&year%100!=0)
        		printf("29");
    		else if(year%400==0)
        		printf("29");
    		else
        		printf("28");}
            return 0;

}
