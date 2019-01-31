#include <stdio.h>
int main()
{
    int year=0;
    int month=0;
    scanf("%d %d",&year,&month);
	//whether it is leap year
    if((year%4==0&&year%100!=0)||year%400==0)
        printf("闰年 ");
    else
        printf("不是闰年 ");
	//which season
    if(month>=3&&month<=5)
        printf("春季 ");
    else if(month>=6&&month<=8)
        printf("夏季 ");
    else if(month>=9&&month<=11)
        printf("秋季 ");
    else
        printf("冬季 ");
	//how many days
    switch(month)
    {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        printf("31");
        break;
    case 4: case 6: case 9: case 11:
        printf("30");
		break;
    case 2:
        if((year%4==0&&year%100!=0)||year%400==0)
            printf("29");
        else
            printf("28");
        break;
	default:
			break;
    }
    return 0;
}