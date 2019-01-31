#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    printf("%d\n%d\n%d\n%d",(char)0x7F,(char)0x80,INT_MAX,INT_MIN);
    return 0;
}