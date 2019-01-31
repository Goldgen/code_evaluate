#include <stdio.h>

int month, day, year;
char * monthArr[15] = {"", "January", "February", "March", "April", "May", "June", 
					"July", "August", "September", "October", "November", "December"};

int main(){
	
	scanf("%d%d%d", &month, &day, &year);

	printf("%d", day);
	switch(day){
		case 1:
		case 21:
		case 31:
			printf("st");
			break;
		case 2:
		case 22:
			printf("nd");
			break;
		case 3:
		case 23:
			printf("rd");
			break;
		default:
			printf("th");
			break;
	}
	printf(" %s %d", monthArr[month], year);
	
	
	return 0;
}