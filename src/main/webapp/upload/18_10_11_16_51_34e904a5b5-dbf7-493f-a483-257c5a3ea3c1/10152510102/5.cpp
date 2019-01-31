#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
int main()
{
    unsigned long long  a=1,i;
    for(i=2;i<=10;i++)
        a*=i;
    cout<<a<<endl;
    a=1;
    for(i=2;i<=20;i++)
        a*=i;
    cout<<a;
    return 0;
}
