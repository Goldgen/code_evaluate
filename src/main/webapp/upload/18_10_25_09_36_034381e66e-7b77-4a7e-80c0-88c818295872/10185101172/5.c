#include <stdio.h>
#include <stdlib.h>

int main()
{
   int y,m=0;
   scanf("%d %d",&y,&m);
   if((y%4==0&&y%100!=0)||y%400==0)
    printf("闰年 ");
   else
    printf("不是闰年 ");
   switch(m)
   {
   case 3:case 4:case 5:
    printf("春季");
    break;
   case 6:case 7:case 8:
    printf("夏季");
    break;
   case 9:case 10:case 11:
    printf("秋季");
    break;
   default:
    printf("冬季");
    break;
   }
switch(m)
{
    case 1:case 3:case 5:case 7:case 8:case 10:case 12:
    printf(" 31");
    break;
	case 4:case 6:case 9:case 11:
    printf(" 30");
	break;
case 2:
    if((y%4==0&&y%100!=0)||y%400==0)
        printf(" 29");
    else
        printf(" 28");
break;
default:
    printf("ERROR");
    break;
}
   return 0;
}
