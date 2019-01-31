#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <cctype>
using namespace std;
int main()
{
    string a,b,c;
    cin>>a;
    cin>>b;
    c=b;
    int limit=0;
    int t=b.length();
    for(int i=1;i<=t;i++){
        char m=b[t-1];
        for(int n=t-1;n>0;n--)
            b[n]=b[n-1];
        b[0]=m;
        if(a==b){
            limit=1;
            break;
        }
    }
    if(limit)
        cout<<'"'<<a<<'"'<<" is a rotation of "<<'"'<<c<<'"';
    else
        cout<<'"'<<a<<'"'<<" is NOT a rotation of "<<'"'<<c<<'"';
}