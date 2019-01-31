#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

string Week[7] = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};

int main(void)
{
    int a;
    cin>>a;
    cout<<Week[a-1];
    return 0;
}
