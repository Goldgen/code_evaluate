#include <stdio.h>

int main()
{
    int rest,total,i,year1,month1,day1,year2,month2,day2,a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    scanf("%d %d %d %d %d %d",&year1,&month1,&day1,&year2,&month2,&day2);
    
    
    if(((year1%4==0)&&(year1%100!=0))||year1%400==0)
    {
        a[2]=29;
    }
    
    
	rest=day1;
	for(i=1;i<month1;i++)
		rest+=a[i];
	if((((year1%4==0)&&(year1%100!=0))||year1%400==0)&&month1>2)
    {
        rest++;
    }
	total=day2;
	for(i=1;i<month2;i++)
		total+=a[i];
	for(i=year1;i<year2;i++)
		total+=365;
	for(i=year1;i<year2;i++)
	{
		if(((i%4==0)&&(i%100!=0))||i%400==0)
    	{
       		total++;
    	}
	}
	if((((year2%4==0)&&(year2%100!=0)))||year2%400==0&&month2>2)
    {
    	total++;
	}
	printf("采集时间为%d天",total-rest);
	return 0;
}