#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;
string str;

int main(void){
    string copy_str;
    getline(cin,str);
    copy_str = str;
    reverse(str.begin(),str.end());
    if (str == copy_str)
        cout<<"True"<<endl;
    else
        cout<<"False"<<endl;
    return 0;
}
