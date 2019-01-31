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
	int n;
	cin>>n;
	cout<<n<<endl;
	return 0;
}
