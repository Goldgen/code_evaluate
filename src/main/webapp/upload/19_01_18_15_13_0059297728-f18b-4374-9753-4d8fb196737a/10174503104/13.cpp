#include <bits/stdc++.h>
using namespace std;
char M[15][20]={"","January","February","March"
,"April","May","June","July","August","September"
,"October","November","December"};
int main(){
	int month,day,year;
	cin>>month>>day>>year;
	cout<<day;
	if(day==1||day==21||day==31)
		cout<<"st";
	else if(day==2||day==22)
		cout<<"nd";
	else if(day==3||day==23)
		cout<<"rd";
	else
		cout<<"th";
	cout<<' ';
	cout<<M[month]<<' ';
	cout<<year;
	return 0;	
}
