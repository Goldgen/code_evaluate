#include <stdio.h>
#include <stdlib.h>

int gcd(int m, int n)
{
    int r = 0;
    r = m%n;
    if (r<0)  return 0;
    else if (r == 0)  return n;
    else if (r>0)  return  gcd(n, r);
}

int main()
{
    int N = 0;
    int M = 0;
    int gc = 0;
    scanf("%d%d", &N, &M);
    gc = gcd(M, N);
    printf("%d", gc);
    return 0;
}
