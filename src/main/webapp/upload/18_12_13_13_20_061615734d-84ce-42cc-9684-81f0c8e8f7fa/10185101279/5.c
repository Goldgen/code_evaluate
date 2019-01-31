#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
void Number2Alpha(int num, char (*mptr)[10]);

int main()
{char month_name[12][10]={"January","February","March","April","May","June","July","August","September","October","November","December"};
int n;
scanf("%d",&n);
Number2Alpha(n,month_name);
	return 0;
}
void Number2Alpha(int num, char (*mptr)[10]){
puts(*(mptr+num-1));
}

