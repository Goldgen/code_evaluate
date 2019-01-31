#include<stdio.h>
#include<stdlib.h>
int main(){
	int month,day,year;
	scanf("%d%d%d",&month,&day,&year);
	printf("%d",day);
	if(day/10!=1)
		switch(day%10){
			case 1:printf("st ");break;
			case 2:printf("nd ");break;
			case 3:printf("rd ");break;
			default:printf("th ");break;
	}
	else printf("th ");
	switch(month){
		case 1:printf("January");break;
		case 2:printf("February");break;
		case 3:printf("March");break;
		case 4:printf("April");break;
		case 5:printf("May");break;
		case 6:printf("June");break;
		case 7:printf("July");break;
		case 8:printf("August");break;
		case 9:printf("September");break;
		case 10:printf("October");break;
		case 11:printf("November");break;
		default: printf("December");break;
	}
	printf(" %d",year);
	return 0;
} 