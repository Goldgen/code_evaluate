#include <stdio.h>
#include <stdlib.h>
int main()
{   long long int a;//输入一个十进制数
    scanf("%lld",&a);
    int b=0;
    int c;
    while(a!=0)
    { c=a%2;
      a=a/2;
    if(c==1)
        b=b+1;
    else
        b=b;
    }
    printf("%d",b);

    return 0;
}