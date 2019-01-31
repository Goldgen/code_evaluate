#include <iostream>
#include <cstdio>

using namespace std;

int max(int a,int b){
    return a >= b?a:b;
}

int main(void)
{
    int a,b,c;
    cin>>a>>b>>c;
    cout<<max(max(a,b),c);
    return 0;
}
