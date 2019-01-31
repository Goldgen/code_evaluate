#include <bits/stdc++.h>
using namespace std;
char str[100];
int main(){
	int delta;
	scanf("%s %d",str,&delta);
	int n=strlen(str);
	char ans[100];
	ans[n]=0;
	for(int i=0;i<n;i++)
		ans[(i+delta)%n]=str[i];
	cout<<n<<' '<<ans;
	return 0;
}
