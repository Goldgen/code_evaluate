#include<iostream>
using namespace std;
int jud(int y ,int m){
	int mon[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	if(m!=2) return mon[m];
	if(y%4||y%100==0&&y%400) return 28;
	return 29;
}
int judg(int y){
	if(y%4||y%100==0&&y%400) return 0;
	return 1;
}
int main() {
	int y1,m1,d1,y2,m2,d2,sum1(0),sum2(0),i;
	while(cin>>y1>>m1>>d1>>y2>>m2>>d2){
		sum1=sum2=0;
	cout<<"采集时间为";
	
	
	for(i=y1;i<y2;i++)
		sum2+=365+judg(i);
		
	for(i=1;i<m1;i++)
		sum1+=jud(y1,i);
	for(i=1;i<m2;i++)
		sum2+=jud(y2,i);
		
		sum1+=d1;
		sum2+=d2;
	cout<<sum2-sum1<<"天";
	}
	return 0;
}
/*2016 1 1 2200 5 4
67328*/