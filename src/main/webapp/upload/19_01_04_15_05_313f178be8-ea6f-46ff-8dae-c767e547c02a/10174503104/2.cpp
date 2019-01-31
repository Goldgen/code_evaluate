#include <bits/stdc++.h>
using namespace std;
int main(){
	long long a,b,c;
	scanf("%lld+%lld=%lld",&a,&b,&c);
//	cout<<a<<endl<<b<<endl<<c<<endl;
	long long ta=a;
	for(int i=0;i<=10;i++)	{
		if((ta+b)==c){
			cout<<i<<endl;
			return 0;
		}
		else
			ta*=10;
	}
	long long tb=b;
	for(int i=0;i<=10;i++){
		if((tb+a)==c){
			cout<<-i<<endl;
			return 0;
		}
		else
			tb*=10;
	}
	return 0;
} 
