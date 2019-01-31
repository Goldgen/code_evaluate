#include <iostream>

using namespace std;

int main()
{
    double fahr;
    int celsius;
    cin>>fahr;
    celsius = 5*(fahr - 32)/9;
    cout<<"celsius = "<<celsius<<endl;
    return 0;
}
