#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
int main()
{
    int a,b,c;
    scanf("%d%d",&a,&b);
    c= a>b ? a : b;
    printf("%d",c);
    return 0;
}
