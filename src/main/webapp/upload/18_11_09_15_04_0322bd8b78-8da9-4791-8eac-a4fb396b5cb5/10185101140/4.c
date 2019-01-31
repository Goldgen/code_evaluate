#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    scanf("%u",&n);
    if(n==0) printf("1");
    else{
        unsigned long long num=1;int i;
        for(i=1;i<=n;i++){
            num*=i;
            if(num>20181111){
                num%=20181111;
            }
        }
        printf("%llu",num%20181111);
    }

    return 0;
}
