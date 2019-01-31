#include <bits/stdc++.h>
using namespace std;
int main(){
	double a,b,ans;
	char op;
	scanf("%lf%c%lf",&a,&op,&b);
	
	if(op=='+'){
		ans=a+b;
	}
	else if(op=='-')
		ans=a-b;
	else if(op=='*')
		ans=a*b;
	else
		ans=a/b;
	printf("%.3lf",ans);
	return 0;	
}
