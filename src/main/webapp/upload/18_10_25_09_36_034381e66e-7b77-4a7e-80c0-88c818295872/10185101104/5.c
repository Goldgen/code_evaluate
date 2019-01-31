#include<stdio.h>

int main()
{
	int year,month,a[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	char b[5][8]={"冬季","春季","夏季","秋季","冬季"};
    scanf("%d %d",&year,&month);
    if((year%4==0&&year%100!=0)||year%400==0)
    {
		printf("闰年 ");
        a[2]=29;
	}
	else
    	printf("不是闰年 ");
	printf("%s %d",b[month/3],a[month]);
	return 0;
}