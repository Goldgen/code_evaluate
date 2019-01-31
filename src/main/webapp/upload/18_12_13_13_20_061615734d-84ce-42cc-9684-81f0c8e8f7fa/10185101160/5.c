#include<stdio.h>
#include<string.h>
void Number2Alpha(int num, const char* mptr[]);
int main()
{
	const char* Monthname[13] = {"","January","February","March","April",
					  "May","June","July","August","September",
					  "October","November","December"};
	int month;
	scanf("%d",&month);
	Number2Alpha(month,Monthname);
	return 0;
}
void Number2Alpha(int num, const char* mptr[])
{
	puts(mptr[num]);
}