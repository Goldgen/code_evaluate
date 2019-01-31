#include<stdio.h>
int f(int year,int month,int day); 
int main()
{
	int b[2][1]={{365},{366}};
	int y1,m1,d1,y2,d2,m2,x1,x2,k,x,t,year,sumday=0;
	scanf("%d %d %d %d %d %d",&y1,&m1,&d1,&y2,&m2,&d2);
	x1=f(y1,m1,d1);
	x2=f(y2,m2,d2);
	for(t=y1;t<y2;t++){
		year=t;
		k=((year%4==0&&year%100!=0)||year%400==0);
		sumday+=b[k][0];
	}
	x=sumday-x1+x2;
	printf("采集时间为%d天",x);
	return 0;
}
int f(int year,int month,int day)
{
	int i,m,n;
	n=day;
	int a[2][13]={{0,31,28,31,30,31,30,31,31,30,31,30,31},{0,31,29,31,30,31,30,31,31,30,31,30,31}};
	m=((year%4==0&&year%100!=0)||year%400==0);
	for(i=1;i<month;i++){
		n=n+a[m][i];
	}
	return(n);
}