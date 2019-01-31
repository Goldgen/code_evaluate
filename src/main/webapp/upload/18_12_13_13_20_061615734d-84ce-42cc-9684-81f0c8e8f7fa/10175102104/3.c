#include <stdio.h>
void i2a(int n)
{
   int i;
   if ((i=n/10)!=0) i2a(i);
   putchar(n%10+'0');
}

int main()
{
    int n;
    char s[20];
    scanf("%d",&n);
    i2a(n);
    return 0;
}
