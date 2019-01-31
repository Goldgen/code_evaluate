#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

int main(void){
    int n;
    cin>>n;
    for (int i = 1;i <= n;i++){
        for (int j = 1;j <= i;j++){
            cout<<" "<<j<<" * "<<i<<" = ";
            printf("%2d",i*j);
        }
        if (i != n)
            cout<<endl;
    }
    return 0;
}
