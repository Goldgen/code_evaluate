#include <stdio.h>
#include <stdlib.h>

/*（函数）请写函数判断正整数n(n为int类型整数)是否为素数；
样例输入1：
5
样例输出1：
It is a prime number.
样例输入2：
6
样例输出2：
It's not a prime number.
*/

int isprime(int n){
    for(int i=2; i<sqrt(n); i++){
        if(n%i==0) return 0;
    }
    return 1;
}

int main()
{
    int n, res;
    scanf("%d", &n);
    res = isprime(n);
    if(res==1) printf("It is a prime number.");
    else printf("It's not a prime number.");
    return 0;
}
