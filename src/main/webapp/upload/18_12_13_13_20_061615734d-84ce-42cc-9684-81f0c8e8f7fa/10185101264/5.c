#include <stdio.h>
#include <string.h>
int main()
{
    char month1[12][15] = {"January", "February", "March", "April", "May", "June"};
    char month2[12][15] = {"July", "August", "September", "October", "November", "December"};
    int n;
    scanf("%d", &n);
    if(n <= 6)
        puts(month1[n - 1]);
    else
        puts(month2[n - 7]);
}