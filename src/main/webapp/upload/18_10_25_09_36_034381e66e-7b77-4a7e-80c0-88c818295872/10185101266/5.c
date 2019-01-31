#include<stdio.h>
#include<string.h>
int main(void)
{
	int y,m,a,b,c,d;
	char year[50],season[50];
    scanf("%d %d",&y,&m);
	a=y%4;
	b=y%100;
	c=y%400;

	if(c==0||(a==0&&b>0))
    {
        strcpy(year,"闰年");
        if(m==2)
        d=29;
    }

    else
    {
        strcpy(year,"不是闰年");
        if(m==2)
        d=28;
    }
	switch(m)
	{
        case 3:case 4:case 5:strcpy(season,"春季");break;
		case 6:case 7:case 8:strcpy(season,"夏季");break;
		case 9:case 10:case 11:strcpy(season,"秋季");break;
		case 12:case 1:case 2:strcpy(season,"冬季");break;
	    default:break;
     }

		if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
			d=31;
		else if(m==4||m==6||m==9||m==11)
			d=30;
		printf("%s %s %d",year,season,d);

		return 0;


}
