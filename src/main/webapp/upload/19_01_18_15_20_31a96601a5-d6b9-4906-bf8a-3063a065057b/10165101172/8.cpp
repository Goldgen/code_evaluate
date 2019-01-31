
#include <bits/stdc++.h>

using namespace std;
int m[3];

bool cmp(int a,int b){
    return a > b;
}

int main(void)
{
    cin>>m[0]>>m[1]>>m[2];
    sort(m,m+3,cmp);
    cout<<m[1];
    return 0;
}
