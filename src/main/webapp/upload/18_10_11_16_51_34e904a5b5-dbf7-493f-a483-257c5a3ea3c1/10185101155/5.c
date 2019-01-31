#include <stdio.h>
int main()
{
     long int a, b;
    int m = 1;
    int n = 1;
    while (n <= 10)
    {
        a = a*n;
        n = n + 1;
    }
    while (m <= 20)
    {
        b = b*m;
        m = m + 1;
     }
        printf("%ld\n%ld",a,b);
        return 0;
}
