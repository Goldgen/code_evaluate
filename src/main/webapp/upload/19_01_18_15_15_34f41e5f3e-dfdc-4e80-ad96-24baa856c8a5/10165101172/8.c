#include <stdio.h>
#include <math.h>

int digit(int n){
    return n == 0?0:1+digit(n /= 10);
}

int main(void)
{
    int n,m;
    int i;
    int sum_digit = 0,digit_sum = 0;
    scanf("%d %d",&n,&m);
    digit_sum = digit(n);
    for (i = 0;n != 0;i++){
        sum_digit += (n%10)*pow(10,(i + digit_sum - m%digit_sum)%digit_sum);
        n /= 10;
    }
    printf("%d %d",digit_sum,sum_digit);
    return 0;
}
