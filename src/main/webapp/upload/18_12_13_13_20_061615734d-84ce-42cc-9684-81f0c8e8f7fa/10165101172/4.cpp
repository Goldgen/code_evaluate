#include <iostream>
#include <string>
#include <cmath>

using namespace std;
string str;

int main(void){
    int T;
    cin>>T;
    for (int j = 0;j < T;j++){
        cin>>str;
        for (int i = 0;i < str.length();i++){
            if (str[i] == 'Z')
                str[i] = 'A';
            else
                str[i] += 1;
        }
        cout<<"case #"<<j<<": "<<str<<endl;
    }
    return 0;
}
