
#include <iostream>
#include <cstdio>
#include <string>

using namespace std;


int main(void)
{
    int sum = 0;
    int a,b,c;
    
    cin>>a>>b>>c;
    sum += a+b+c;
    cin>>a>>b>>c;
    sum += a+b+c;
    cin>>a>>b;
    sum += a+b;
    cout<<sum<<endl;
    
    sum = 0;
    
    scanf("%d,%d,%d",&a,&b,&c);
    sum += a+b+c;
    scanf("%d,%d,%d",&a,&b,&c);
    sum += a+b+c;
    scanf("%d,%d",&a,&b);
    sum += a+b;
    cout<<sum;
    
    return 0;
}