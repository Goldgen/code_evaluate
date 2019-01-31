#include <stdio.h>
#include <stdlib.h>

int main()
{
  int year;
  int month;
  scanf("%d %d",&year,&month);
  if((year%4==0)&&(year%100!=0)||(year%400==0))
    printf("闰年");
  else
    printf("不是闰年");
    switch(month)
        {
        case 1:
            printf(" 冬季 31");
            break;
        case 2:
            printf(" 冬季 %s",(year%4==0)&&(year%100!=0)||(year%400==0)?"29":"28");
            break;
            case 3:
            printf(" 春季 31");
            break;
            case 4:
            printf(" 春季 30");
            break;
            case 5:
            printf(" 春季 31");
            break;
            case 6:
            printf(" 夏季 30");
            break;
            case 7:
            printf(" 夏季 31");
            break;
            case 8:
            printf(" 夏季 31");
            break;
            case 9:
            printf(" 秋季 30");
            break;
            case 10:
            printf(" 秋季 31");
            break;
            case 11:
            printf(" 秋季 30");
            break;
            case 12:
            printf(" 冬季 31");
            break;
            default:
                printf("Error");
                break;
        }
}
