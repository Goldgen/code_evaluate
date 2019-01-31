#include<bits/stdc++.h>
using namespace std;
void Number2Alpha(int num, char* mptr){
	char str[13][12]={"","January","February","March","April","May","June","July","August","September","October","November","December"};
	mptr=str[num];
	printf("%s\n",mptr);
}
int main(){
	int n;
	cin>>n;
	char s[100];
	Number2Alpha(n,s);
	//cout<<s<<endl;
	return 0;
}
