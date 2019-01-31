#include <stdio.h>
int main(){
    int n;
    long long total=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        total*=i;
    }
    printf("%lld",total);
}