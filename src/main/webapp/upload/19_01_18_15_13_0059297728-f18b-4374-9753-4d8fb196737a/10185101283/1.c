#include<stdio.h>
#define max(a,b)(a>b)?a:b
int main()
{
    int a,b,big;
    scanf("%d %d",&a,&b);
    big=max(a,b);
    printf("%d",big);
    return 0;
}
