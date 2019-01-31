#include<stdio.h>
int main()
{
	int y,m,d;
	scanf("%d %d",&y,&m);
	if((y%4==0&&y%100!=0)||y%400==0)
	{d=29;
	printf("闰年 ");}
	
	else
	{d=28;
	printf("不是闰年 ");}
	switch(m)
	{
		case 4:case 5: case 3:
			printf("春季");
			break; 
				case 7:case 8: case 6:
			printf("夏季");
			break; 
				case 10:case 11: case 9:
			printf("秋季");
			break; 	
			case 1:case 12: case 2:
			printf("冬季");
			break; 
	 } 
	 
	 switch(m)
	{
		case 1:case 3: case 5:case 7:case 8:case 10:case 12:
			printf(" 31");
			break; 
				case 2:
			printf(" %d",d);
			break; 
				
		default:
			printf(" 30");
			break; 
	 } 
	 return 0;
	
 } 