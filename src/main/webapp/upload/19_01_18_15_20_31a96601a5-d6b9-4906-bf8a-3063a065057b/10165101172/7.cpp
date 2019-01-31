#include <iostream>
#include <cstdio>

using namespace std;

int max(int a,int b){
    return a >= b?a:b;
}

int main(void)
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    printf("%d",max(max(max(a,b),c),d));
    return 0;
}
