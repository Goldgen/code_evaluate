#include <iostream>
#include <string>
#include <cmath>

using namespace std;
string str;

int main(void){
    int n;
    getline(cin,str);
    cin>>n;
    for (int i = n;i < str.length();i++){
        cout<<str[i];
    }
    return 0;
}
