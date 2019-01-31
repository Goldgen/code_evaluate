#include <stdio.h>

int main()
{
    int A = 0;
    int B = 0;
    int C = 0;
    int D = 0;

    scanf("%d %d %d %d", &A, &B, &C, &D);

    if(A >= B)
        A = A;
    else
        A = B;

    if(A >= C)
        A = A;
    else
        A = C;

    if(A >= D)
        A = A;
    else
        A = D;

    printf("%d", A);

    return 0;
}
