#include <iostream>
#include <string>
#include <cmath>

using namespace std;
string month[12] = {"Januray","Februray","March","April","May","June","July",
    "August","September","October","November","December"};

int main(void){
    int sign;
    cin>>sign;
    cout<<month[sign - 1]<<endl;
    return 0;
}
