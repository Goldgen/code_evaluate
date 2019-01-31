#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if((a%4==0&&a%100!=0)||a%400==0)
    {
        printf("闰年 ");
    }
    else
    {
        printf("不是闰年 ");
    }
    switch(b)
    {
    case 1:
        printf("冬季 31");break;
    case 2:
        {
            if((a%4==0&&a%100!=0)||a%400==0)
            {
                printf("冬季 29");
                break;
            }
            else
            {
                printf("冬季 28");
                break;
            }
        }
    case 3:case 5:
        printf("春季 31");break;
    case 4:
        printf("春季 30");break;
    case 6:
        printf("夏季 30");break;
    case 7:case 8:
        printf("夏季 31");break;
    case 9:case 11:
        printf("秋季 30");break;
    case 10:
        printf("秋季 31");break;
    case 12:
        printf("冬季 31");break;
    default:break;
    }
    return 0;
}
