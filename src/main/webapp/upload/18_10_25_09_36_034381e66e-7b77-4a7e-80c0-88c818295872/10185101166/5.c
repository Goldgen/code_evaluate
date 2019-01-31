#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	if(a%4==0&&a%100!=0||a%400==0)
	{
		if(b>=3&&b<=5)
		{
			if(b==4)
			printf("闰年 春季 30");
			else
			printf("闰年 春季 31");
		}
		if(b>=6&&b<=8)
		{
			if(b==6)
			printf("闰年 夏季 30");
			else
			printf("闰年 夏季 31");
		 } 
		 if(b>=9&&b<=11)
		 {
		 	if(b==10)
		 	printf("闰年 秋季 31");
		 	else
		 	printf("闰年 秋季 30");
		 }
		 if(b==1||b==2||b==12)
		 {
		 	if(b==12||b==1)
		 	printf("闰年 冬季 31");
		 	else
		 	printf("闰年 冬季 29");
		 }
	}

	else
{
		if(b>=3&&b<=5)
		{
			if(b==4)
			printf("不是闰年 春季 30");
			else
			printf("不是闰年 春季 31");
		}
		if(b>=6&&b<=8)
		{
			if(b==6)
			printf("不是闰年 夏季 30");
			else
			printf("不是闰年 夏季 31");
		 } 
		 if(b>=9&&b<=11)
		 {
		 	if(b==10)
		 	printf("不是闰年 秋季 31");
		 	else
		 	printf("不是闰年 秋季 30");
		 }
		 if(b==1||b==2||b==12)
		 {
		 	if(b==12||b==1)
		 	printf("不是闰年 冬季 31");
		 	else
		 	printf("不是闰年 冬季 28");
		 }
	}
	
}   