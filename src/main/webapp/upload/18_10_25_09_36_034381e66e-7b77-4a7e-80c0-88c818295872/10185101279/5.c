#include <stdio.h>
#include<string.h>

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if((a%4==0&&a%100!=0)||a%400==0)
        printf("闰年 ");
         else
         printf("不是闰年 ");
         switch(b)
     {case 3:case 4:case 5:
        printf("春季 ");
        break;
     case 6:case 7:case 8:
        printf("夏季 ");
        break;
     case 9:case 10:case 11:
        printf("秋季 ");
        break;
     default:
        printf("冬季 ");
        break;}
        switch(b)


   {case 1:case 3:case 5:case 7:case 8:case 10:case 12:
        printf("31");
        break;
    case 2:
        {
            if((a%4==0&&a%100!=0)||a%400==0)
        printf("29");
         else
         printf("28");

        }
        break;
    default:
        printf("30");
   break;}

   return 0;
}








