#include <stdio.h>

int main()
{
	int day,month,year;
	char a[12][10]={"January","February","March","April","May","June",\
	"July","August","September","October","November","December"};
	char b[4][5] = {"st","nd","rd","th"};
	scanf("%d%d%d",&month,&day,&year);
	
	int low = day % 10 , high = day / 10;
	if(low > 4) low = 4;
	if(high == 1) printf("%dth ",day);
	else printf("%d%s ",day,b[low-1]);
	
	printf("%s ",a[month-1]);
	printf("%d",year);
	return 0;
}