#include <bits/stdc++.h>
using namespace std;
string dic[15];
int main() {
    int n;
    cin>>n;
    getchar();
    for(int i=0;i<n;i++){
        string s;
        getline(cin,s,'\n');
        dic[i]=s;
    }
    sort(dic,dic+n,greater <string>());
    for(int i=0;i<n;i++)
        if(i!=n)
        cout<<dic[i]<<endl;
        else
            cout<<dic[i];
    return 0;
}
