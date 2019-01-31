#include<stdio.h>
int a[2][12]={31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31};
int is_leap(int y)
{
	if((!(y%4) && y%100) || !(y%400)) return 1;
	return 0;
}
int main()
{
	int y1,y2,m1,m2,d1,d2;
	int sum=0,i;
	scanf("%d%d%d%d%d%d",&y1,&m1,&d1,&y2,&m2,&d2);
	if(y1!=y2)
	{if(is_leap(y1)){
		for(i=0;i<m1-1;i++)
		sum=sum+a[1][i];
		sum=sum+d1;
		sum=366-sum;}
	else{
		for(i=0;i<m1-1;i++)
		sum=sum+a[0][i];
		sum=sum+d1;
		sum=365-sum;}
	for(i=y1+1;i<y2;i++){
		if(is_leap(i)) sum=sum+366;
		else sum=sum+365;}
	if(is_leap(y2)){
		for(i=0;i<m2-1;i++)
		sum=sum+a[1][i];
		sum=sum+d2;}
	else{
		for(i=0;i<m2-1;i++)
		sum=sum+a[0][i];
		sum=sum+d2;}
	printf("采集时间为%d天",sum);	
	}
	else{
		int m=0,n=0;
		if(is_leap(y1)){
		for(i=0;i<m1-1;i++)
		m=m+a[1][i];
		m=m+d1;}
	else{
		for(i=0;i<m1-1;i++)
		m=m+a[0][i];
		m=m+d1;}
	if(is_leap(y2)){
		for(i=0;i<m2-1;i++)
		n=n+a[1][i];
		n=n+d2;}
	else{
		for(i=0;i<m2-1;i++)
		n=n+a[0][i];
		n=n+d2;}
	printf("采集时间为%d天",n-m);
	}
	return 0;
 }