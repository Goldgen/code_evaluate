#include<stdio.h>
int main()
{
	int n;
	char *a;
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			a = "January";
			break;
		case 2:
			a = "February";
			break;
		case 3:
			a = "March";
			break;
		case 4:
			a = "April";
			break;
		case 5:
			a = "May";
			break;
		case 6:
			a = "June";
			break;
		case 7:
			a = "July";
			break;
		case 8:
			a = "August";
			break;
		case 9:
			a = "September";
			break;
		case 10:
			a = "October";
			break;
		case 11:
			a = "November";
			break;
		default:
			a = "December";
	}
	printf("%s",a);
	return 0;
	
 } 