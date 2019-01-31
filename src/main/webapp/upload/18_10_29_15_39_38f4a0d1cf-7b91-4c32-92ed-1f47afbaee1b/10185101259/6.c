#include<stdio.h>
main()
{
    long long  a,b,i;
    scanf("%lld %lld",&a,&b);
    if(a<=b)
    for(i=1;a!=0;a=b%a,b=i)
        i=a;
    else
    for(i=1;b!=0;b=a%b,a=i)
        i=b;
    printf("最大公约数是: %lld",i);

    return 0;
}

