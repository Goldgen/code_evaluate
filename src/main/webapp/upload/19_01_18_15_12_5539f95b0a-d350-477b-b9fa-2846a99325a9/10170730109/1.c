#include <stdio.h>

int main(void) {
    int a = 1;
    int b = 1;
    scanf("%d %d",&a,&b);
    int max = 0;
    if(a > b)
        max = a;
    else
        max = b;
    printf("%d",max);
    return 0;
}