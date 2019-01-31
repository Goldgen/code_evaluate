#include <stdio.h>

int main()
{
   int year,month;
   scanf("%d %d",&year,&month);
   if ((0==year%4)&&(0!=year%100))
    printf("闰年");
   else if(0==year%400)
    printf("闰年");
   else
    printf("不是闰年");
   switch (month)
   {
       case 3: case 4: case 5:
        printf(" 春季");
        break;
       case 6: case 7: case 8:
        printf(" 夏季");
        break;
       case 9: case 10: case 11:
        printf(" 秋季");
        break;
       case 12: case 1: case 2:
        printf(" 冬季");
        break;
       default:
        printf("ERROR");
        break;
   }
   switch(month)
   {
       case 1: case 3: case 5: case 7: case 8: case 10: case 12:
       printf(" 31");
       break;
       case 4: case 6: case 9: case 11:
       printf(" 30");
       break;
       default:
        if ((0==year%4)&&(0!=year%100))
         printf(" 29");
        else if(0==year%400)
         printf(" 29");
        else
         printf(" 28");
       break;
    }

   return 0;
}
