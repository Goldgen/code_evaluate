#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	double tot=0;
	while(1){
		char s[5];
		scanf("%s",s);
		if(s[0]=='T') break;
		int a,b,c,d;
		double e;
		scanf("%d%d%d%d",&a,&b,&c,&d);
		if(s[0]=='P') e=0.89;
		else if(s[0]=='F') e=1.09;
		else if(s[0]=='C') e=2.26;
		else if(s[0]=='M') e=4.50;
		else e=3.10;
		printf("%d %d*%d*%d ",a,b,c,d);
		if(s[0]=='P') cout<<"Pine";
		else if(s[0]=='F') cout<<"Fire";
		else if(s[0]=='C') cout<<"Cedar";
		else if(s[0]=='M') cout<<"Maple";
		else cout<<"Oak";
		cout<<','<<' ';
		printf("Cost: $%.2lf\n",1.0*a*b*c*d/12*e);
		tot+=1.0*a*b*c*d/12*e;
	}
	printf("Total cost: $%.2lf\n",tot);
	return 0;
}
