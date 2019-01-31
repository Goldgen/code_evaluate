#include <stdio.h>

int main()
{
    int A = 0;
    int B = 0;
    int C = 0;

    scanf("%d %d %d", &A, &B, &C);

    if(A >= B)
        A = A;
    else
        A = B;

    if(A >= C)
        A = A;
    else
        A = C;

    printf("%d", A);

    return 0;
}
