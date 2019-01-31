#include <stdio.h>
#include <stdlib.h>
void Number2Alpha(int num, const char** mptr);

int main() {
	int num;
	scanf("%d",&num);
	const char* mptr[]= {
		"0",
		"January",
		"February",
		"March",
		"April",
		"May",
		"June",
		"July",
		"August",
		"September",
		"October",
		"November",
		"December"
	};
	Number2Alpha(num, mptr);
}

void Number2Alpha(int num, const char** mptr) {
	puts(mptr[num]);
}
