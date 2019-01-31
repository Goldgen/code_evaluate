#include <stdio.h>
int b1[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int b2[]={0,31,29,31,30,31,30,31,31,30,31,30,31};
int main(){
	int year,month,day;
	scanf("%d %d",&year,&month);
	if(!(year%400)||((year%100)&&!(year%4))){
		printf("闰年");
		day=b2[month];
	}
	else{
		printf("不是闰年");
		day=b1[month];
	}
	printf(" ");
	if(month>=3&&month<=5)
		printf("春季");
	else if(month>=6&&month<=8)
		printf("夏季");
	else if(month>=9&&month<=11)
		printf("秋季");
	else
		printf("冬季");
	printf(" ");
	printf("%d",day);
	return 0;
}
