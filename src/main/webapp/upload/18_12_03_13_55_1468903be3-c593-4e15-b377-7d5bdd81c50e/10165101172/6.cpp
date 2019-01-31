
#include <iostream>
#include <string>
#include <cmath>

using namespace std;
string str;

long long hex2int(string s){
   long long sum = 0;
    for (int i = 0 ;i < s.length();i++){
        if (s[i] <= 57 && s[i] >= 48)
            sum += (s[i] - 48)*pow(16,s.length() - 1 - i);
        else if (s[i] >= 65 && s[i] <= 70)
            sum += (s[i] - 55)*pow(16,s.length() - 1 - i);
        else if (s[i] >= 97 && s[i] <= 102)
            sum += (s[i] - 87)*pow(16,s.length() - 1 - i);
        else
            break;
    }
    return sum;
}

int main(void){
    cin>>str;
    cout<<hex2int(str)<<endl;
    return 0;
}
