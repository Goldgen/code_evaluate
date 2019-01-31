#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int n;
    int times = 0;
    cin>>n;
    for (int i = 1;i <= n;i++){
        times = (n - i)*2;
        while (times > 0){
            cout<<" ";
            times--;
        }
        for (int j = 0;j < i;j++){
            if (j >= 1)
                cout<<"+";
            cout<<j+1;
        }
        cout<<"=";
        for (int j = i;j > 0;j--){
            cout<<j;
            if (j != 1)
                cout<<"+";
        }
        if (i != n)
            cout<<endl;
    }
    return 0;
}