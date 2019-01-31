#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int Sum(int* a,int n){
    return (n == 1)?a[0]:a[n - 1]+Sum(a,n - 1);
}

bool cmp(int a,int b){
    return a<b;
}

int main(void){
    int array[100];
    int n;
    cin>>n;
    for (int i = 0;i < n;i++)
        cin>>array[i];
    sort(array,array+n,cmp);
    cout<<array[0]<<" "<<Sum(array,n)<<endl;
    return 0;
}
