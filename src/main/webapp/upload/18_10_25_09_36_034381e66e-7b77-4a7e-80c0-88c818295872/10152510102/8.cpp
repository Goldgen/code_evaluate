#include<iostream>
using namespace std;
bool check(int x) 
{
	if(x%400==0)return true;
	if(x%100==0)return false;
	if(x%4==0)return true;
	return false;
}
long long days(int y, int m, int d) 
{
	int num[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};   
	y--;
	long long sum=365*y + y/4-y/100 + y/400 +d;
	for(int i=1;i<m;i++)
	{
		sum+=num[i];
		if(i==2&&check(y+1))sum++;
	}
	return sum;
}
int main()
{
	int x,y,z;
	long long a,b;
	cin>>x>>y>>z;
	a=days(x,y,z);
	cin>>x>>y>>z;
	b=days(x,y,z);
	cout<<"采集时间为"<<b-a<<"天";
	return 0;

}