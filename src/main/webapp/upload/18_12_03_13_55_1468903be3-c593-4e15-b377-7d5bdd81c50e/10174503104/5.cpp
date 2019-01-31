#include <bits/stdc++.h>
using namespace std;
int main(){
	string a,b;
	cin>>a>>b;
	if(a.size()!=b.size()){
        printf("\"%s\" is NOT a rotation of \"%s\"\n",a.c_str(),b.c_str());
        return 0;
	}
	string c=a+a;
	if(c.find(b)!=string::npos)
	    printf("\"%s\" is a rotation of \"%s\"\n",a.c_str(),b.c_str());
	else
        printf("\"%s\" is NOT a rotation of \"%s\"\n",a.c_str(),b.c_str());
}
//waterbottlewaterbottle