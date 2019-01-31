#include<stdio.h>

int main()
{
	int date;
	scanf("%d",&date);
	if(date==1)printf("Monday");
	else if(date==2)printf("Tuesday");
	else if(date==3)printf("Wednesday");
	else if(date==4)printf("Thursday");
	else if(date==5)printf("Friday");
	else if(date==6)printf("Saturday");
	else printf("Sunday");
		
	return 0;
}