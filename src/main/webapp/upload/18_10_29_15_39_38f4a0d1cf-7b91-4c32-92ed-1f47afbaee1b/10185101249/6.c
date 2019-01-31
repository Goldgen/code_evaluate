#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d",&a,&b);
    while(a%b!=0)
        {
            c=a%b;
            a=b;
            b=c;
         }
    printf("最大公约数是: %d",b);
    return 0;
}
