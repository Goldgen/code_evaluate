#include <stdio.h>

int Shuzi(int a)
{
    if(a<10)
        return a;
    return a%10+Shuzi(a/10);
}
int main()
{
    int num = 0;
    scanf("%d",&num);
    printf("%d",Shuzi(num));
}
