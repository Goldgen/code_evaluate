#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void octal(int n){
printf("%d",n);
}
int main()
{
    int x;
    scanf("%o",&x);
    octal(x);
    return 0;
}
