#include <stdio.h>
#include <string.h>
int main()
{
    int n, i = 0;
    char str[20] = {'\0'};
    scanf("%d", &n);
    while(n != 0)
    {
        str[i] = n % 10 + 48;
        n /= 10;
        i++;
    }
    for(i--; i >=0; i--)
        putchar(str[i]);
}