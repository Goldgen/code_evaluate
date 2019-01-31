#include<stdio.h>
int jud(int y){
	if(y%4==0&&(y%100||y%400==0))
		return 1;
	return 0;}
int main(){
	int mon[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int y,m;
	scanf("%d%d",&y,&m);
	if(jud(y))
		printf("闰年 ");
	else
		printf("不是闰年 ");
	
	if(m>=3&&m<=5)
		printf("春季");
	else if(m>=6&&m<=8)
		printf("夏季");
	else if(m>=9&&m<=11)
		printf("秋季");
	else
		printf("冬季");
	
	if(m==2)
		printf(" %d",mon[m]+jud(y));
	else
		printf(" %d",mon[m]);
	return 0;
}
	