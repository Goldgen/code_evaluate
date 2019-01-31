#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if (((a%4==0)&&(a%100!=0))||(a%400==0))
        printf("闰年");
    else
        printf("不是闰年");
    switch(b)
    {
    case 12:case 1:case 2:
        printf(" 冬季");
        break;
    case 3:case 4:case 5:
        printf(" 春季");
        break;
    case 6:case 7:case 8:
        printf(" 夏季");
        break;
    case 9:case 10:case 11:
        printf(" 秋季");
        break;
    default:
        break;
    }
    if (b==2)
        {
            if (((a%4==0)&&(a%100!=0))||(a%400==0))
                printf(" 29");
            else
                printf(" 28");
        }
    else if((b==4)||(b==6)||(b==9)||(b==11))
        printf(" 30");
    else
        printf(" 31");
}