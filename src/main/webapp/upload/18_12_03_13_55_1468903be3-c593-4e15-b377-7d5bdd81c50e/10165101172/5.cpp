#include <iostream>
#include <string>
#include <cmath>

using namespace std;

bool whilemove(const string s1,string s2){
    string s3;
    for (int i = 0;i < s1.length();i++){
        s3 = s2.substr(0,i+1);
        s2.erase(0,i+1);
        s2 += s3;
        if (s2 == s1)
            return true;
    }
    return false;
}

int main(void){
    string str1,str2;
    cin>>str1>>str2;
    if (whilemove(str1, str2))
        cout<<"\""<<str1<<"\""<<" is a rotation of "<<"\""<<str2<<"\""<<endl;
    else
        cout<<"\""<<str1<<"\""<<" is NOT a rotation of "<<"\""<<str2<<"\""<<endl;
    return 0;
}