#include <iostream>
#include <string>

using namespace std;
int arr1[50][50];
int arr2[50][50];

int main(void){
    int n,m;
    cin>>n>>m;
    for (int i = 0;i < n;i++){
        for (int j = 0;j < m;j++){
            cin>>arr1[i][j];
        }
    }
    
    for (int i = 0 ;i < n;i++){
        for (int j = 0;j < m;j++){
            arr2[j][i] = arr1[i][j];
        }
    }
    
    for (int i = 0;i < m;i++){
        for (int j = 0;j < n;j++){
            cout<<arr2[i][j];
            if (j != n - 1)
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
