#include <iostream>
#include <cmath>
#include <cstdio>
#include <algorithm>
#include <map>
using namespace std;
int main() {
    string a,b;
    cin>>a>>b;
    int l=0,r=0;
    for(int i=0;i<a.size()+b.size();i++){
        if(l>=a.size()){
            cout<<b[r++];
            continue;
        }
        if(r>=b.size()){
            cout<<a[l++];
            continue;
        }
        if(!(i&1))
            cout<<a[l++];
        else
            cout<<b[r++];
    }
    return 0;
}
