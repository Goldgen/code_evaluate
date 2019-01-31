#include <stdio.h>
#include <math.h>
int main()
{
    int year,month,i=0;
    scanf("%d %d",&year,&month);
    if(year%400==0||year%4==0&&year%100!=0){
        i=1;
        printf("闰年");
    }
     else printf("不是闰年");
        printf(" ");
        if(month<=2||month==12)printf("冬季");
        else if(month<=5)printf("春季");
        else if(month<=8)printf("夏季");
        else printf("秋季");
        printf(" ");
    switch(month){
        case 4:printf("30");break;
        case 6:printf("30");break;
        case 9:printf("30");break;
        case 11:printf("30");break;
        case 2:if(i==1)printf("29");
                else printf("28");break;
        default :printf("31");break;
        }

    }