#include<stdio.h>
#include<math.h>
 int fei(int m,int n,int y);
 int rin(int m,int n,int y);
 int judge(int m);

 int main()
 {
     int year1,year2,month1,month2,day1,day2;
     int sum=0,sum1=0,sum2=0;
     int j1,j2,j3;
     int i;
     int x;
   
     scanf("%d%d%d%d%d%d",&year1,&month1,&day1,&year2,&month2,&day2);
     judge(year1);
     j1=judge(year1);
     judge(year2);
     j2=judge(year2);
     if(j1==1)
     {
         rin(year1,month1,day1);
         sum1=rin(year1,month1,day1);
     }
     else
     {
          fei(year1,month1,day1);
          sum1=fei(year1,month1,day1);
     }
     if(j2==1)
     {
         rin(year2,month2,day2);
         sum2=rin(year2,month2,day2);
     }
     else
     {
         fei(year2,month2,day2);
         sum2=fei(year2,month2,day2);
     }
     for(i=year1+1;i<year2;i++)
     {
         judge(i);
         j3=judge(i);
         if(j3==1)sum+=366;
         else sum+=365;
     }
     if(year1<year2&&j1==1)x=sum+(366-sum1)+sum2;
     else if(year1<year2&&j1==0)x=sum+(365-sum1)+sum2;
     else if(year1=year2)x=abs(sum1-sum2);
     printf("采集时间为%d天",x);
 }

 int judge(int m)
 {
     int j;
     if((m%4==0&&m%100!=0)||m%400==0)j=1;

     else j=0;
     return j;
 }

 int fei(int m,int n,int y)
 {
     int sum=0;
     switch(n)
     {
         case 12:sum+=30;
         case 11:sum+=31;
         case 10:sum+=30;
         case 9:sum+=31;
         case 8:sum+=31;
         case 7:sum+=30;
         case 6:sum+=31;
         case 5:sum+=30;
         case 4:sum+=31;
         case 3:sum+=28;
         case 2:sum+=31;
         case 1:sum+=y;
     }
     return sum;
 }

 int rin(int m,int n,int y)
 {
     int sum=0;
     switch(n)
     {
         case 12:sum+=30;
         case 11:sum+=31;
         case 10:sum+=30;
         case 9:sum+=31;
         case 8:sum+=31;
         case 7:sum+=30;
         case 6:sum+=31;
         case 5:sum+=30;
         case 4:sum+=31;
         case 3:sum+=29;
         case 2:sum+=31;
         case 1:sum+=y;
     }
     return sum;
 }