#include <iostream>
#include <cmath>
#include <cstring>
#include <iomanip>
#include <cstdio>
#include <algorithm>
#include <stack>
#include <set>
#include <map>
#include <vector>
using namespace std;
int main() {
    int N;
    cin>>N;
    for(int i=1;i<=N;i++){
        printf(" ");
        for(int j=1;j<=i;j++){
            if(i<j) {
                if(i*j>=10)
                    printf("%d * %d = %d", i, j, i * j);
                else
                    printf("%d * %d =  %d", i, j, i * j);
            }
                else {
                if(i*j>=10)
                    printf("%d * %d = %d", j, i, i * j);
                else
                    printf("%d * %d =  %d", j, i, i * j);
            }
            if(j!=i)
                printf(" ");
        }
        if(i!=N)
        printf("\n");
    }
    return 0;
}
