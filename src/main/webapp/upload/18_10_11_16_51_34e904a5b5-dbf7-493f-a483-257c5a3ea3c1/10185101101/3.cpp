#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 0;
    int ge = 0;
    int shi = 0;
    scanf("%d",&num);

        ge=num%10;
        shi=num/10;
        printf("%d %d",ge,shi);

    return 0;
}
