#include<stdio.h>

int main(void)
{
	int year1,year2,month1,month2,day1,day2;
	long long sum1=0,sum2=0;
	scanf("%d%d%d%d%d%d",&year1,&month1,&day1,&year2,&month2,&day2);
	for(int i=1;i<year1;++i)
	{
	  if(i%4==0&&i%100!=0||i%400==0)
	    sum1+=366;
	  else
	    sum1+=365;
    }
    for(int i=1;i<month1;++i)
    {
    	if(i==4||i==6||i==9||i==11)
    	  sum1+=30;
    	else if(i==2)
		{
		   if(year1%4==0&&year1%100!=0||year1%400==0)
    	     sum1+=29;
    	   else
    	     sum1+=28;
        }
        else
           sum1+=31;
	} 
	sum1+=day1;
	
	for(int i=1;i<year2;++i)
	{
	  if(i%4==0&&i%100!=0||i%400==0)
	    sum2+=366;
	  else
	    sum2+=365;
    }
    for(int i=1;i<month2;++i)
    {
    	if(i==4||i==6||i==9||i==11)
    	  sum2+=30;
    	else if(i==2)
		{
		   if(year2%4==0&&year2%100!=0||year2%400==0)
    	     sum2+=29;
    	   else
    	     sum2+=28;
        }
        else
           sum2+=31;
	} 
	sum2+=day2;
	printf("采集时间为%d天",sum2-sum1);
	return 0;
}