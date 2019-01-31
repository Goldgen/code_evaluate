#include <stdio.h>

int main()
{
    int sumEven=0,sumOdd=0;
    for(int a=1;a<=100;a+=2)
        sumOdd+=a;
    for(int b=0;b<=100;b+=2)
        sumEven+=b;
    printf("%d %d",sumOdd,sumEven);
    return 0;
}

