#include<bits/stdc++.h>
using namespace std;
char *strmcpy(char *t, const char *s, int m){
		char *tmp=t;
		while(m>0){
			m--;
			s++;
		}
		while(*s){
			*t=*s;
			s++;
			t++;
		}
		*t=0;
		return tmp;
}
int main(){
	char s[88],b[88];
	gets(s);
	int x;
	cin>>x;
	cout<<strmcpy(b,s,x)<<endl;
	//cout<<s<<endl;
	return 0;
}
