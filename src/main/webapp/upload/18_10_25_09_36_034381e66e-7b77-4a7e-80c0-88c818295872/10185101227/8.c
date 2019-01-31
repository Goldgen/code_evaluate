#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,y1,r1,n2,y2,r2,s,h;
    scanf("%d%d%d%d%d%d",&n1,&y1,&r1,&n2,&y2,&r2);
    s=0;
     switch(--y1)
    {case 11:s=s+30;
    case 10:s=s+31;
    case 9:s=s+30;
    case 8:s=s+31;
    case 7: s=s+31;
    case 6:s=s+30;
    case 5:s=s+31;
    case 4:s=s+30;
    case 3:s=s+31;
    case 2:if ((n1%4==0&&n1%100!=0)||n1%400==0) s=s+29; else s=s+28;
    case 1: s=s+31;}
    --n1;
    while (n1>0)
    {if ((n1%4==0&&n1%100!=0)||n1%400==0)
      s=s+366;
    else s=s+365;
    --n1;}
   s=s+r1;
   h=0;
   switch(--y2)
    {case 11:h=h+30;
    case 10:h=h+31;
    case 9:h=h+30;
    case 8:h=h+31;
    case 7: h=h+31;
    case 6:h=h+30;
    case 5:h=h+31;
    case 4:h=h+30;
    case 3:h=h+31;
    case 2:if ((n2%4==0&&n2%100!=0)||n2%400==0) h=h+29; else h=h+28;
    case 1: h=h+31;}
     --n2;
    while (n2>0)
    {if ((n2%4==0&&n2%100!=0)||n2%400==0)
      h=h+366;
    else h=h+365;
    --n2;}
   h=h+r2;
   s=h-s;
   printf("采集时间为%d天",s);
    return 0;
}
