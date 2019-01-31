#include <cstdio>
using namespace std;

const char* s[] = {
	"",
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

const char* const Number2Alpha(int n) {
	return s[n];
}

int main() {
	int num;
	scanf("%d", &num);
	printf("%s\n", Number2Alpha(num));
	
	return 0;
}