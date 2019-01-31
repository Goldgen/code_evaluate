#include <iostream>
#include <string>

using namespace std;

int Phone(char c){
    if (c >= 65 && c <= 90)
        c += 32;
    switch (c) {
        case 'a':
        case 'b':
        case 'c':
            return 2;
            break;
        case 'd':
        case 'e':
        case 'f':
            return 3;
            break;
        case 'g':
        case 'h':
        case 'i':
            return 4;
            break;
        case 'j':
        case 'k':
        case 'l':
            return 5;
            break;
        case 'm':
        case 'n':
        case 'o':
            return 6;
            break;
        case 'p':
        case 'q':
        case 'r':
        case 's':
            return 7;
            break;
        case 't':
        case 'u':
        case 'v':
            return 8;
            break;
        default:
            return 9;
            break;
    }
}

int main(void){
    string str;
    cin>>str;
    for (int i = 0;i < 8;i++){
        cout<<Phone(str[i]);
    }
    return 0;
}