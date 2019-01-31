#include <stdio.h>
int main()
{
	int d1=0,d2=0,dd,year1,year2,month1,month2,day1,day2;
	scanf("%d%d%d%d%d%d",&year1,&month1,&day1,&year2,&month2,&day2);
    for(int i=year1;i>0;i-=4)
    {
    	d1=d1+1;
	}
	d1=d1+year1*365;
	for(int i=year1-100;i>0;i-=100)
	{
		d1=d1-1;
	}
	for(int i=year1-400;i>0;i-=400)
	{
		d1=d1+1;
	}
	for(int i=1;i<month1;i++)
	{
		switch(i)
		{
		case 1:case 3:case 5:case 7:case 8:case 10:case 12:
		   d1=d1+31;
		   break;
		case 4:case 6:case 9:case 11:
		   d1=d1+30;
		   break;
		default:
		   d1=d1+28;
		   break;
	    }
	}
	d1=d1+day1;
 	if((year1%4==0&&year1%100!=0)||(year1%400==0))
    {
    	if(month1>2)
    	d1=d1+1;
    }                                           //year1 to AD1 

    for(int i=year2;i>0;i-=4)
    {
    	d2=d2+1;
	}
	for(int i=year2-100;i>0;i-=100)
	{
		d2=d2-1;
	}
	for(int i=year2-400;i>0;i-=400)
	{
		d2=d2+1;
	}
	d2=d2+year2*365;
	for(int i=1;i<month2;i++)
	{
		switch(i)
		{
		case 1:case 3:case 5:case 7:case 8:case 10:case 12:
		   d2=d2+31;
		   break;
		case 4:case 6:case 9:case 11:
		   d2=d2+30;
		   break;
		default:
		   d2=d2+28;
		   break;
	    }
	}
	d2=d2+day2;
 	if((year2%4==0&&year2%100!=0)||(year2%400==0))
    {
    	if(month2>2) 
    	d2=d2+1;
    }
	dd=d2-d1;
	printf("采集时间为%d天",dd);
	return 0;
} 