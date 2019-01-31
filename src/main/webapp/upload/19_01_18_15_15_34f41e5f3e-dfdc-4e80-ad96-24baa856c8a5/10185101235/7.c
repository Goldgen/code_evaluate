#include <stdio.h>

int main(void)

{
    int n = 0;  //二进制中1的个数
    int num = 0;
    scanf("%d",&num);

    while( num >= 1 )
    {
        if(num%2!=0)
            n++;
        num /= 2;
    }
    printf("%d",n);
}
