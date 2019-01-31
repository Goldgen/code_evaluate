#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*（循环）In 1742, Christian Goldbach, a German amateur mathematician,
sent a letter to Leonhard Euler in which he made the following conjecture:
Every even number greater than 4 can be written as the sum of two odd prime numbers.
For Example:
8 = 3 + 5. (Both 3 and 5 are odd prime numbers.)
20 = 3 + 17 = 7 + 13.
42 = 5 + 37 = 11 + 31 = 13 + 29 = 19 + 23.
Write a program to solve this problem. The value of even number is given by user.
输入不大于1000，请以=a+b的形式输出所有情况，a≤b，以a的升序输出。
样例输入：
20
样例输出：
20=3+17=7+13*/

int isprime(int m)
{
    for(int i=2; i<=sqrt(m); i++){
        if(m%i==0) return 0; //不是质数
    }
    return 1;
}

int main()
{
    int m;
    scanf("%d", &m);
    printf("%d", m);
    for(int a=2; a<m/2+1; a++){
        if(isprime(a)==1 && isprime(m-a)==1) printf("=%d+%d", a, m-a);
    }
    return 0;
}
