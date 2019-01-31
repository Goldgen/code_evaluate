#include <stdio.h>
#include <math.h>

int main(void)
{
    int n;
    int i = 0;
    scanf("%d",&n);
    while (n != 0){
        if (n%2 != 0)
            i++;
        n /= 2;
    }
    printf("%d",i);
    return 0;
}
