#include <stdio.h>
#include <math.h>
int main(int argc, char* argv[]){

    double A,B;
    scanf("%lf%lf", &A, &B);
    printf("%.8lf %.8lf %.3lf",A , B, sqrt(fabs(A-B)));

    return 0;
}
