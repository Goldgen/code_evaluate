#include <stdio.h>
int main()
{
int year,month,run=0;
scanf("%d %d", &year, &month);
if(year%4==0&&year%100!=0||year%400==0)
    {run=1;
    printf("闰年"); }
else
    {run=0;
    printf("不是闰年");}
switch(month)
{
    case 1:printf(" 冬季 31");break;
    case 2:
        if(run == 1) printf(" 冬季 29");
            else printf(" 冬季 28"); break;
    case 3:printf(" 春季 31");break;
    case 4:printf(" 春季 30");break;
    case 5:printf(" 春季 31");break;
    case 6:printf(" 夏季 30");break;
    case 7:printf(" 夏季 31");break;
    case 8:printf(" 夏季 31");break;
    case 9:printf(" 秋季 30");break;
    case 10:printf(" 秋季 31");break;
    case 11:printf(" 秋季 30");break;
    case 12:printf(" 冬季 31");break;
    default:
        break;
    }
    return 0;
}

