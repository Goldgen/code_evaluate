#include<stdio.h>
#include<ctype.h>
int main()
{
	char mon,a,e,i,o,u;
	int num;
	while(mon)
	{
		scanf("%s",&mon);
		tolower(mon);
		if(mon==a||mon==e||mon==i||mon==o||mon==u)
		num=1;
		else
		num=0;
	}
	if(num==1)
	printf("yes");
	else 
	printf("no");
	return 0;
 } 