#include <stdio.h>
#include <stdlib.h>

void change(int n){
    if (n != 0)
        change(n/2);
    if (n != 0)
    printf("%d",n%2);
}

int main(void)
{
    int n;
    scanf("%d",&n);
    change(n);
    return 0;
}
