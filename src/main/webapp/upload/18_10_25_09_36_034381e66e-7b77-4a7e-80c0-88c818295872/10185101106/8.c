#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,year,days,sum=0,i=1,SUM=0,months=0;
    int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
    for(a;a<d;a++)
    {if(a%4==0&&a%100!=0||a%400==0)
            year=366;
        else
            year=365;
    sum=sum+year;} 
	for(i;i<e;i++)
	months+=month[i-1];
    for(int j=1;j<b;j++)
        SUM+=month[j-1];
        if(d%4==0&&d%100!=0||d%400==0)
        months=months+1;
		days=sum+months+f-SUM-c;
        printf("采集时间为%d天",days);

            return 0;

}