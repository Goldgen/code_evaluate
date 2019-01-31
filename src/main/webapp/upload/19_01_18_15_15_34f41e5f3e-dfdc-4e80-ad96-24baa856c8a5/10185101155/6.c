#include <stdio.h>
int main()
{
    int a,b;
    int m,n;
    int c = 1;
    scanf("%d %d",&a,&b);
    while(c!=0)
    {
        m = b;
        n = a;
        if(m%n==0)
            break;
        a = m%n;
        b = n;



    }
    printf("最大公约数是: %d",a);
    return 0;
}
