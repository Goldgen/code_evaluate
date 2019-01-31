#include <stdio.h>

const char* months[13] = {
	" Error",
	" January",
	" February",
	" March",
	" April",
	" May",
	" June",
	" July",
	" August",
	" September",
	" October",
	" November",
	" December",
};

int main() {
	int day,month,year; scanf("%d %d %d",&month,&day,&year);
	switch(day) {	//day
		case 1:
		case 21:
		case 31:
			printf("%dst", day);
			break;
		case 2:
		case 22:
			printf("%dnd", day);
			break;
		case 3:
		case 23:
			printf("%drd", day);
			break;
		default:
			printf("%dth", day);
			break;
	}
	return !printf("%s %d",months[month],year);	//year
}
