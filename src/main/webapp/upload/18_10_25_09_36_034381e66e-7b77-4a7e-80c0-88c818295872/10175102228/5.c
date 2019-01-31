#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{   int year,month;
    scanf("%d%d",&year,&month);
   char season[4];
    if(month==3||month==4||month==5)strcpy(season,"春季");
     else if(month>=6&&month<=8)strcpy(season,"夏季");
     else if(month>=9&&month<=11)strcpy(season,"秋季");
     else strcpy(season,"冬季");
   if((year%4==0&&year%100!=0)||year%400==0)
     { printf("闰年 ");
       printf("%s ",season);
       if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
       { printf("31");

       }
        else if(month==2)printf("29");
        else printf("30");
      }
  else
  { printf("不是闰年 ");
    printf("%s ",season);
      if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
       { printf("31");

       }
        else if(month==2)printf("28");
        else printf("30");


  }
  return 0;
}