#include <iostream>
#include <string>
#include <algorithm>
#include <cstdio>

using namespace std;

int main(void){
    string str;
    char c = '\0';
    while ((c = getchar()) != EOF && c != '?')
        str += c;
    reverse(str.begin(), str.end());
    cout<<str<<endl;
    return 0;
}
