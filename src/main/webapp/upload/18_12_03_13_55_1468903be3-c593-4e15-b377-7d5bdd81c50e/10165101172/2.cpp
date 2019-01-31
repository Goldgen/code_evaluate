#include <iostream>
#include <string>
#include <algorithm>
#include <cstdio>

using namespace std;

bool cmp(string a,string b){
    return a>b;
}

int main(void){
    string str[10];
    int T;
    cin>>T;
    getchar();
    for (int i = 0;i < T;i++){
        getline(cin,str[i]);
    }
    sort(str,str+T,cmp);
    for (int j = 0;j < T;j++){
        cout<<str[j]<<endl;
    }
    return 0;
}
