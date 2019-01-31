#include <iostream>
#include <string>
#include <algorithm>
#include <cstdio>

using namespace std;

bool cmp(string a,string b){
    return a<b;
}

int main(void){
    string str[100];
    int n;
    cin>>n;
    getchar();
    for (int i = 0;i < n;i++)
        getline(cin,str[i]);
    sort(str,str+n,cmp);
    for (int i = 0;i < n;i++)
        cout<<str[i]<<endl;
    return 0;
}
