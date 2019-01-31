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
	for(int i=0;i<n;i++){
		printf("case #%d: " ,i);
		char str[55];
		scanf("%s",str);
		for(int j=0;j<strlen(str);j++)
			if(str[j]>='A'&&str[j]<='Y')
				str[j]=str[j]+1;
			else
				str[j]='A';
		cout<<str<<endl;
	}
	return 0;
}
