#include <iostream>
#include <cmath>
#include <cstring>
#include <cstdio>
#include <algorithm>
#include <stack>
#include <set>
#include <map>
using namespace std;

bool judge(int x){
    if(x==1) return 0;
    if(x==2) return 1;
    int rng=sqrt(x)+1;
    for(int i=2;i<=rng;i++) {
        if (x % i == 0)
            return false;
    }
    return true;

}
int main() {
   int n;
   cin>>n;
   if(judge(n))
       cout<<"It is a prime number.";
   else
       cout<<"It's not a prime number.";
    return 0;
}
