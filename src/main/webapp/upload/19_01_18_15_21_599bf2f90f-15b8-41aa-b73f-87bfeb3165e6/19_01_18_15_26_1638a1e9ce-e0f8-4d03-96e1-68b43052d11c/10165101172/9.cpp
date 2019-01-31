#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
    int x;
    cin>>x;
    if (x == 0)
        cout<<"0";
    else
        x > 0?cout<<"1":cout<<"-1";
    return 0;
}
