#include<stdio.h>
#include<limits.h>
int main()
{
   int x,y,leap;
   scanf("%d%d",&x,&y);
   if(x%4==0&&x%100!=0||x%400==0)
    {printf("闰年");leap=1;}
   else {printf("不是闰年");leap=0;}
   if(y>=3&&y<=5) printf(" 春季");
   else if(y>=6&&y<=8) printf(" 夏季");
   else if(y>=9&&y<=11) printf(" 秋季");
   else  printf(" 冬季");
   switch(y)
   {
       case 1:case 3:case 5:case 7:case 8:case 10:case 12:printf(" 31");break;
       case 4:case 6:case 9:case 11:printf(" 30");break;
       case 2:if (leap==1) printf(" 29");
              else printf(" 28");break;
       default:break;
   }
    return 0;
}