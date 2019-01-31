#include <stdio.h>
#include <stdlib.h>

/*请编写递归程序，计算给定正整数的各位数字之和。
例如，如果实参为12345，则函数返回1+2+3+4+5=15，即返回15.*/

int mmm(int k, int sum){
    if(k>=0 && k<10) sum = sum+k;
    else{
        sum = sum+k%10;
        k/=10;
        sum = mmm(k, sum);
    }
    return sum;
}

int main()
{
    int kk, summ=0, res;
    scanf("%d", &kk);
    res = mmm(kk, summ);
    printf("%d", res);
    return 0;
}
