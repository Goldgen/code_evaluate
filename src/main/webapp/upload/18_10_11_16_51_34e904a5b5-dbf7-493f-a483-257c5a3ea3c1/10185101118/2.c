#include<stdio.h>
#include<limits.h>
int main()
{
    int a,b;
    char c,d;
    a=INT_MAX;
    b=INT_MIN;
    c=CHAR_MAX;
    d=CHAR_MIN;
    printf("%d\n%d\n%d\n%d",c,d,a,b);
    return 0;
}