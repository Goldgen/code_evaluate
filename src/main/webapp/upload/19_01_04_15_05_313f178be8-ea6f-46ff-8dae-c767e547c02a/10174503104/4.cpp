#include <bits/stdc++.h>
using namespace std;
vector <pair <char,int> > S;
bool v[300];
int main(){
	memset(v,0,sizeof(v));
	char str[105];
	gets(str);
	int len=strlen(str);
	for(int i=0;i<len;i++){
		char ch=str[i];
		if(ch==' '||v[ch]) continue;
		int cnt=0;
		for(int j=0;j<len;j++)
			if(ch==str[j])
				cnt++;
		S.push_back(make_pair(ch,cnt));
		v[ch]=1;
	}
	for(int i=0;i<S.size();i++){
		printf("%c %d; ",S[i].first,S[i].second);
		//if(i!=S.size()-1)
		//	printf(" ");
	//	else
			//printf("\n");
	}
	return 0;
} 
