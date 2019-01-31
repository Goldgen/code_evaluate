#include <stdio.h>
int main()
{long int year1=0,year2=0,a=0,m1=0,m2=0,year=0,all_year=0;
int month1=0,month2=0,day1=0,day2=0,y=0;
scanf("%ld %d %d %ld %d %d",&year1,&month1,&day1,&year2,&month2,&day2);
int ping[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
if(year1==year2)
 {if(year1%4==0&&year1%100!=0||year1%400==0)
   ping[2]=29;
   for(int m=month1;m<month2;++m)
        a += ping[m];
        a = a+day2-day1;}
else{for(int m=12;m>=month1;--m)
        {if(year1%4==0&&year1%100!=0||year1%400==0)
		 ping[2]=29;
	     m1 += ping[m];}
     for(int m=0;m<month2;++m)
	    {if(year2%4==0&&year2%100!=0||year2%400==0)
		 ping[2]=29;
		 m2 += ping[m];}
    a = m1 + m2 + day2 -day1;
    if(year2-year1>1)
      {for(y=year1+1;y<year2;y++)
          {if(y%4==0&&y%100!=0||y%400==0)
            year=366;
          else year=365;
          all_year +=year;}
        a += all_year;}
    }
printf("采集时间为%ld天",a);
}