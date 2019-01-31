#include<stdio.h>
int main()
{
	int year1,month1,day1;
	int year2,month2,day2;
	int one,all1=0,all2,all3,all4,all5,all;
	scanf("%d %d %d %d %d %d",&year1,&month1,&day1,&year2,&month2,&day2);
	if(year1%4==0&&year1%100!=0||year1%400==0)
        switch(month1)
    {
        case 1:all2=0;break;
        case 2:all2=31;break;
        case 3:all2=60;break;
        case 4:all2=91;break;
        case 5:all2=121;break;
        case 6:all2=152;break;
        case 7:all2=182;break;
        case 8:all2=213;break;
        case 9:all2=244;break;
        case 10:all2=274;break;
        case 11:all2=305;break;
        default:all2=335;break;
    }
    else
    switch(month1)
    {
        case 1:all2=0;break;
        case 2:all2=31;break;
        case 3:all2=59;break;
        case 4:all2=90;break;
        case 5:all2=120;break;
        case 6:all2=151;break;
        case 7:all2=181;break;
        case 8:all2=212;break;
        case 9:all2=243;break;
        case 10:all2=273;break;
        case 11:all2=304;break;
        default:all2=334;break;
    }
	all3=all2+day1;
	for(;year1<year2;year1++)
        {if(year1%4==0&&year1%100!=0||year1%400==0)
        one=366;
        else one=365;
        all1=all1+one;
        }
    if(year2%4==0&&year2%100!=0||year2%400==0)
        switch(month2)
    {
        case 1:all4=0;break;
        case 2:all4=31;break;
        case 3:all4=60;break;
        case 4:all4=91;break;
        case 5:all4=121;break;
        case 6:all4=152;break;
        case 7:all4=182;break;
        case 8:all4=213;break;
        case 9:all4=244;break;
        case 10:all4=274;break;
        case 11:all4=305;break;
        default:all4=335;break;
    }
    else
    switch(month2)
{
        case 1:all4=0;break;
        case 2:all4=31;break;
        case 3:all4=59;break;
        case 4:all4=90;break;
        case 5:all4=120;break;
        case 6:all4=151;break;
        case 7:all4=181;break;
        case 8:all4=212;break;
        case 9:all4=243;break;
        case 10:all4=273;break;
        case 11:all4=304;break;
        default:all4=334;break;
    }
	all5=all4+day2;
	all=all1-all3+all5;
	printf("采集时间为%d天",all);
}