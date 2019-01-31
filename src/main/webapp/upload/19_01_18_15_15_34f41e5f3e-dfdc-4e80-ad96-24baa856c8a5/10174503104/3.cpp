#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <algorithm>
#include <limits>
#include <map>
#include <vector>
#include <cmath>
using namespace std;
/*int cb(int x){
    return x*x*x;
}
int main(){
    for(int i=100;i<=999;i++){
        if(i==cb(i%10)+cb(i/10%10)+cb(i/100))
            printf("%d ",i);
    }
    return 0;
}*/
bool isprime(int x){
    if(x==1) return 0;
    if(x==2) return 1;
    int rng=sqrt(x)+1;
    for(int i=2;i<=rng;i++){
        if(x%i==0)
            return false;
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    printf("%d",n);
    for(int i=2;i<=n/2;i++){
        if(isprime(i)&&isprime(n-i))
            printf("=%d+%d",i,n-i);
    }
    return 0;
}

