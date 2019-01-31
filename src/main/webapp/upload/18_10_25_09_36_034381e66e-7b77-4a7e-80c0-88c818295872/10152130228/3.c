#include <stdio.h>
#include <stdlib.h>

/*34.写程序求解N的阶乘，n!;*/

int main()
{
    int n;
	long long res;
    scanf("%d", &n);
    //if(n==0) printf("0");
    //else{
        res = 1;
        for(int i=1; i<=n; i++){
            res = i*res;
        }
        printf("%lld", res);
    //}
    return 0;
}
