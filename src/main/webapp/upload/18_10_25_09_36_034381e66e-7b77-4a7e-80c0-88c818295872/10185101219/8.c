#include <stdio.h>
int main()
{
int y1,m1,d1,y2,m2,d2,e;
int month[12];
    month[0]=31;
    month[2]=31;
    month[4]=31;
    month[6]=31;
    month[7]=31;
    month[9]=31;
    month[11]=31;
    month[3]=30;
    month[5]=30;
    month[8]=30;
    month[10]=30;
scanf("%d %d %d %d %d %d",&y1,&m1,&d1,&y2,&m2,&d2);
int sum1=0,sum2=0;
{for (int k=1;k<y1;++k)
    {if((0==(k%4)&&(0!=(k%100)))||(0==(k%400)))
    sum1=sum1+366;
    else
    sum1=sum1+365;}
{
    {if((0==(y1%4)&&(0!=(y1%100)))||(0==(y1%400)))
   month[1]=29;
else
   month[1]=28;}
for(int i=1;i<=m1-1;++i)
    sum1=sum1+month[i-1];
    }
sum1=sum1+d1;}
{for (int p=1;p<y2;++p)
    {if((0==(p%4)&&(0!=(p%100)))||(0==(p%400)))
    sum2=sum2+366;
    else
    sum2=sum2+365;}
{
    {if((0==(y2%4)&&(0!=(y2%100)))||(0==(y2%400)))
   month[1]=29;
else
   month[1]=28;}
for(int i=1;i<=m2-1;++i)
    sum2=sum2+month[i-1];}
sum2=sum2+d2;}
e=sum2-sum1;
printf("采集时间为%d天",e);

return 0;
}
