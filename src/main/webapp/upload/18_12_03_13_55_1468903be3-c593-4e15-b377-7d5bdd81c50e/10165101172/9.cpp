#include <iostream>
#include <string>

using namespace std;

int main(void){
    string str1,str2;
    int flag = 0,sum = 0;
    string::size_type pos = -1;
    long int_pos = -1;
    getline(cin,str1);
    getline(cin,str2);
    while (str1.find(str2) != string::npos){
        if (flag == 0)
            pos = str1.find(str2);
        str1.replace(str1.find(str2),str2.length()," ");
        sum++;
        flag = 1;
    }
    if (flag == 0)
        int_pos = -1;
    else
        int_pos = pos;
    cout<<str2<<": "<<sum<<" time(s), first at "<<int_pos<<endl;
    return 0;
}
