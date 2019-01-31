#include <stdio.h>

int main(void)
{
    int day,year;
    enum {January=1,February,March,April,May,
		  June,July,August,September,October,
		  November,December}month;
    scanf("%d %d %d",&month,&day,&year);

    switch(day%10)
    {
    case 1:{
		if(day==11){printf("%dth ",day);}
		else{printf("%dst ",day);}
    }
        break;
    case 2:{
        if(day==12){printf("%dth ",day);}
        else{printf("%dnd ",day);}
    }
        break;
    case 3:
        printf("%drd ",day);
        break;
    default:
        printf("%dth ",day);
		break;
    }

    switch(month)
    {
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
    case 12:printf("December");break;
    }
    printf(" %d",year);
    return 0;
}
