#include <iostream>
#include <string>
#include <cmath>

using namespace std;
int a[30];

int main(void){
    int n,m;
    cin>>n>>m;
    for (int i = 0;i < n;i++){
        cin>>a[i];
        a[i + n] = a[i];
    }
    for (int i = n - m;i < 2*n - m;i++){
        if (i != n - m)
            cout<<" ";
        cout<<a[i];
    }
    cout<<endl;
    return 0;
}