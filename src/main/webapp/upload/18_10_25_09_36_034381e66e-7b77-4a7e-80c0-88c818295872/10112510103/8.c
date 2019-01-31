#include<stdio.h>
//计算整年的差距（天数）
int midday(int y1, int y2);
//计算月和日据当年第一天的差距
int dayinyear(int y,int m, int d);
int main()
{
	int y1, m1, d1, y2, m2, d2,total;
	
	scanf("%d %d %d %d %d %d", &y1, &m1, &d1, &y2, &m2, &d2);
	total = midday(y1, y2) + dayinyear(y2, m2, d2)- dayinyear(y1, m1, d1);
	printf("采集时间为%d天",total);	return 0;
}

int midday(int y1, int y2)//出入年的信息，返回两年间相差的天数
{   int run =0;
    int y;
	for (y = y1; y < y2;y++)
		if (((y % 4) == 0 && (y % 100) != 0) || (y % 400) == 0)
		    run++;
	return 365 * (y2 - y1) + run;
}

//传入年，月，日信息，返回日期是这一年的第多少天；
int dayinyear(int y,int m, int d)
{
	int day=0;
	//注意此时通过省略case后的break来实现了日期的累加**********
	switch (m)
	{
	case 12:day += 30;
	case 11:day += 31;
	case 10:day += 30;
	case 9:day += 31;
	case 8:day += 31;
	case 7:day += 30;
	case 6:day += 31;
	case 5:day += 30;
	case 4:day += 31;
	case 3:day += 28;
	case 2:day += 31;
	case 1:day += d;
		break;
	default:break;
	}
	if ((((y % 4) == 0 && (y % 100) != 0) || (y % 400) == 0)&&(m>2))
		day++;
	return day;
}
