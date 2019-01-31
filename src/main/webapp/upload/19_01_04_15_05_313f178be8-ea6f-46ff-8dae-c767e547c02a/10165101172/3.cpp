#include <iostream>
#include <string>

//之前提交的是错的。。。补一发正确的：

using namespace std;

int main(void)
{
    string a,b;
    int sum = 0;
    cin>>a;
    while (a.find("#") == -1){
        cin>>b;
        sum = 0;
        while (a.find(b) != -1){
            sum++;
            a.replace(a.find(b),b.length(),"\n");
        }
        cout<<sum<<endl;
        cin>>a;
    }
    return 0;
}
