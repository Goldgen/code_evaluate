#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	switch(b)
	{
		case 1:case 21:case 31:
			printf("%dst ",b); break;
		case 2:case 22:	
		printf("%dnd ",b); break;
		case 3:case 23:
		printf("%drd ",b); break;
		default:
			printf("%dth ",b);break;
			
	}
	switch(a)
	{
		case 1:
			printf("January"); break;
		case 2:
			printf("February");break;
			case 3:
			printf("March");break;
		case 4:
			printf("April");break;
			case 5:
			printf("May");break;
		case 6:
			printf("June");break;
			case 7:
			printf("July");break;
		case 8:
			printf("August");break;
			case 9:
			printf("September");break;
		case 10:
			printf("October");break;
			case 11:
			printf("November");break;
		case 12:
			printf("December");break;
		default:
			break;
	}
	printf(" %d",c);
	return 0;
 } 