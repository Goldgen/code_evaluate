#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <algorithm>
#include <limits>
#include <map>
#include <vector>
using namespace std;
long long f[20][20];
int main(){
    int n;
    cin>>n;
    memset(f,0,sizeof(f));
    for(int i=1;i<=n;i++)
        f[i][1]=1;
    for(int i=2;i<=n;i++)
        for(int j=1;j<=i;j++)
            f[i][j]=f[i-1][j]+f[i-1][j-1];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(!(i==j))
                printf("%lld ",f[i][j]);
            else
                printf("%lld",f[i][j]);
        }
        if(i!=n)
        printf("\n");
    }
    return 0;
}

