#include <iostream>
#include <algorithm>

using namespace std;

long long Factorial(long long n){
    int sum = 1;
    for (int i = 1;i <= n;i++){
        sum  *= i;
        if (sum >= 20181111)
            sum %= 20181111;
    }
    return sum;
}

int main(void)
{
    long long n;
    cin>>n;
    cout<<Factorial(n);
    return 0;
}
