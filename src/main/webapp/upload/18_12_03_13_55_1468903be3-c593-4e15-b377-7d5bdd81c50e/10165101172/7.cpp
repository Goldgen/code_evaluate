#include <iostream>
#include <string>

using namespace std;
string str[100];

int main(void){
    string longest_str;
    unsigned long length_str = 0;
    int i = 0;
    for (i = 0;cin>>str[i];i++){
        if (str[i].length() > length_str){
            length_str = str[i].length();
            longest_str = str[i];
            i++;
        }
        if (cin.get() == '\n')
            break;
    }
    cout<<longest_str<<endl;
    return 0;
}
