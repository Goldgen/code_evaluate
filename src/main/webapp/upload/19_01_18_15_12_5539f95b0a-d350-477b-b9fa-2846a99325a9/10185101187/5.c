#include <stdio.h>

int main()
{
    int A = 0;
    int B = 0;
    int C = 0;
    int D = 0;
    int E = 0;
    int F = 0;
    int G = 0;
    int H = 0;
    int I = 0;

    scanf("%d %d %d\n%d %d %d\n%d %d", &A, &B, &C, &D, &E, &F, &G, &H);
    I = A+B+C+D+E+F+G+H;
    printf("%d", I);

    scanf("%d,%d,%d\n%d,%d,%d\n%d,%d", &A, &B, &C, &D, &E, &F, &G, &H);
    I = A+B+C+D+E+F+G+H;
    printf("%d", I);

    return 0;

}
