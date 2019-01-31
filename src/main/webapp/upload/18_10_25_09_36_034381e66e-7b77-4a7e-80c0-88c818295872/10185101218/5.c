#include<stdio.h>
int main(void)
{
    int year,mth,a;
    scanf("%d%d",&year,&mth);
    if((year%4==0&&year%100!=0)||(year%400==0))
    {
            printf("闰年 ");
            a=1;
    }
    else
    {   printf("不是闰年 ");
        a=0;
    }
    switch(mth)
    {
        case 3: printf("春季 31");
        break;
        case 4: printf("春季 30");
        break;
        case 5: printf("春季 31");
        break;
        case 6: printf("夏季 30");
        break;
        case 7: printf("夏季 31");
        break;
        case 8: printf("夏季 31");
        break;
        case 9: printf("秋季 30");
        break;
        case 10:printf("秋季 31");
        break;
        case 11:printf("秋季 30");
        break;
        case 12:printf("冬季 31");
        break;
        case 1: printf("冬季 31");
        break;
        case 2:printf("冬季 ");
		break;
        default:;
        break;
    }
    if(a==1&&mth==2)
        printf("29");
    else if(a==0&&mth==2)
        printf("28");
    return 0;
}
