#include <stdio.h>
int main()
{
    long long a;
    int b,c;
    scanf("%lld",&a);
    b=0;
    c=0;
    while(a/2!=0)
        {
            b=a%2;
            a/=2;
            if(b==1)
                c++;
         }
    if(a==1)
        c++;
    printf("%d",c);
    return 0;
}
